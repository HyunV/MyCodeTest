#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
문제 조건

조카들에게 최대한 긴 과자를 반드시 같은 길이로 나눠주기

나눠줄 수 없다면 0 출력하기

- 과자 길이는 정렬되어있다.

해결방법

이분탐색

1. 제일 긴 과자의 중간 기준으로 시작한다. 0~10억

2. 과자갯수만큼 반복문을 돌며 조카에게 나눠줄 수 있는지 체크한다.

3. 나눠줄 수있다면 과자길이를 반의반 늘려보고 만족하지않는다면 반의반 줄여본다.

4. 3의 과정을 start 피봇이 end 피봇을 넘어갈때까지 반복한다.

*/

int main()
{
	int n, m, answer = 0;
	cin >> n >> m;

	vector<int> vec(m);

	for (int i = 0; i < m; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	//start : 최소 과자사이즈 , end : 최대 과자 사이즈
	int start = 1, end = vec.back(), mid = 0;
	while (start <= end)
	{
		mid = (end + start) /2;

		int cnt = 0;
		for (int i : vec)
			cnt += i / mid;

		if (n <= cnt)
		{
			start = mid+1;
			answer = mid;
		}
		else
			end = mid-1;
	}

	cout << answer;
	
}