#include <iostream>
#include <deque>
#include <utility>
using namespace std;

int main()
{
	int n;

	cin >> n;

	deque<pair<int, int>> deq(n);
	for (int i = 0; i < n; i++)
	{
		deq[i].first = i + 1;
		cin >> deq[i].second;
	}
		
	//deque<int> answer;
	while (!deq.empty())
	{
		auto curNum = deq.front();
		deq.pop_front();
		//answer.push_back(curNum.first);
		cout << curNum.first << ' ';
		
		if (deq.empty())
			break;

		int isMinus = curNum.second > 0 ? 1 : -1;
		int move = abs(curNum.second);

		if (isMinus == 1)
			move--;

		//앞으로 이동하면 맨 앞에걸 뒤로 보냄
		//뒤로 이동하면 맨 뒤에걸 맨 앞으로 보냄
		pair<int,int> tempNum;
		while (move--)
		{
			if (isMinus == -1)
			{
				tempNum = deq.back();
				deq.pop_back();
				deq.push_front(tempNum);				
			}
			else
			{
				tempNum = deq.front();
				deq.pop_front();
				deq.push_back(tempNum);				
			}
		}
	}
}