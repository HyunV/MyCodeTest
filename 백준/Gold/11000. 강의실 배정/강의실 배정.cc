#include <iostream>
#include <queue>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;
/*
그리디?
1. vector로 start와 end를 담는다.
2. start 기준으로 오름차순 정렬한다.

3. 첫 번째 강의를 선언한다.
3-1. 첫 번째강의의 끝나는 시간을 우선순위큐에 등록한다.
	* 우선순위큐 또한 오름차순 등록
4. 반복문을 돌려 강의를 이어서 할 수 있을지 비교한다.
   - ★ 첫번째 강의의 끝나는 시간보다 크거나 같다면 그 강의실을 다시 사용할 수 있다.
   - 그렇지 않다면 새로운 강의실을 열어야한다.(우선순위큐에 추가로 등록)

5. 따라서 모든 강의의 반복문이 끝나고 남아있는 우선순위 큐의 사이즈가 곧 생성된 강의실의 개수이다. 

*/

int main()
{
	int n;
	
	cin >> n;
	vector<pair<int, int>> startTimeVec(n);
	
	for (int i = 0; i < n; i++)
		cin >> startTimeVec[i].first >> startTimeVec[i].second;

	sort(startTimeVec.begin(), startTimeVec.end());

	//오름차순 pq
	priority_queue<int, vector<int>, greater<int>> endTimePq;

	endTimePq.push(startTimeVec[0].second);

	//두 번째 강의부터 확인
	for (int i = 1; i < n; i++)
	{
		//새 강의의 시작 시간이 들어갈 수 있는 시간대가 없다면 강의실을 기존 큐를 제거하지 않고 새로 추가한다.
		if (startTimeVec[i].first >= endTimePq.top())
			endTimePq.pop();

		endTimePq.push(startTimeVec[i].second);
	}

	cout << endTimePq.size();
}