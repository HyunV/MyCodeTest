#include <iostream>
#include <queue>
#include <unordered_map>
#include <utility>
#include <string>
#include <vector>
using namespace std;

/*
- 문제

■ 입력
첫 번째 줄에 문제 N
N만큼 문제 번호, 난이도 입력받음

M만큼 명령어가 일어남
● add: 문제 추가
※ 추천 문제 리스트에 없는 문제 번호 P만 입력으로 주어진다.
※ 이전에 추천 문제 리스트에 있던 문제 번호가 다른 난이도로 다시 들어올 수 있다.

● recommend : 문제 추천
1이면 가장 어려운 문제의 번호 -> 여러개면 문제 번호가 큰 것
-1이면 가장 쉬운 문제 번호 -> 여러 개면 문제 번호가 작은 것
★ 해시맵을 탐색해보고 없어진 문제라면 그 문제를 삭제한다.

● solved : 문제 해결
리스트에서 문제 번호 삭제
//해시맵으로 관리

■ 풀이
pq로 문제 담기 쉬운 문제, 어려운 문제 


*/
struct problem {
	int no;
	int level;
};

struct asc {
	bool operator()(problem p1, problem p2)
	{
		//난이도 별 오름차순(제일 쉬운 문제 순)	
		return (p1.level == p2.level) ? (p1.no < p2.no) : (p1.level < p2.level);
	}
};

struct desc {
	bool operator()(problem p1, problem p2)
	{
		//난이도 별 내림차순(제일 어려운 문제 순)	
		return (p1.level == p2.level) ? (p1.no > p2.no) : (p1.level > p2.level);
	}
};

int main()
{
	int N, M;

	cin >> N;

	priority_queue<problem, vector<problem>, asc> asc_pq;
	priority_queue<problem, vector<problem>, desc> desc_pq;
	unordered_map<int, int> problem_map;

	problem prob;

	vector<int> answer;

	while (N--)
	{
		cin >> prob.no >> prob.level;
		problem_map.insert({ prob.no, prob.level });

		asc_pq.push(prob);
		desc_pq.push(prob);		
	}

	//명령어 입력받기
	cin >> M;
	string oper;
	int val1, val2;
	while (M--)
	{
		cin >> oper;
		if (oper == "add")
		{
			cin >> val1 >> val2;
			problem prob;
			prob.no = val1;
			prob.level = val2;

			asc_pq.push(prob);
			desc_pq.push(prob);
			problem_map.insert({ prob.no, prob.level });
		}
		else if (oper == "recommend")
		{
			cin >> val1;

			if (val1 == -1)
			{
				while (!desc_pq.empty())
				{
					auto p = desc_pq.top();
					auto find = problem_map.find(p.no);
					if (!(find != problem_map.end()))
						desc_pq.pop();
					else
					{
						if (find->second != p.level)
						{
							desc_pq.pop();
							continue;
						}							

						answer.push_back(desc_pq.top().no);						
						break;
					}
				}				
			}
			else if (val1 == 1)
			{
				while (!asc_pq.empty())
				{
					auto p = asc_pq.top();
					auto find = problem_map.find(p.no);
					if (!(find != problem_map.end()))
						asc_pq.pop();
					else
					{
						if (find->second != p.level)
						{
							asc_pq.pop();
							continue;
						}

						answer.push_back(asc_pq.top().no);
						break;
					}
				}
			}
		}
		else if (oper == "solved")
		{
			cin >> val1;
			problem_map.erase(val1);
		}
	}

	for (int i : answer)
		cout << i << '\n';

}