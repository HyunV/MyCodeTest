#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
작은 상자는 큰 상자 안에 들어갈 수 있다.
최대로 넣을수 있는 상자

		//vec[1]은 vec[0]과 비교
		//vec[2]는 vec[1], vec[0]과 비교
		//vec[3]은 vec[0], vec[1], vec[2]와 비교
*/

int main()
{
	int n;

	int dp[1001];
	fill(dp, dp + 1001, 1);

	cin >> n;
	vector<int> vec(n);
	for(int i = 0; i<n; i++)
		cin >> vec[i];

	//dp[0]은 무조건 1
	
	int answer = 0;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			//이전값보다(dp[i-j]) 현재 값(dp[i])가 크면 상자를 집어넣을 수 있다.
			if (vec[j] < vec[i])
				dp[i] = max(dp[i], dp[j] + 1);
				
		}

		answer = max(dp[i], answer);
	}
	cout << answer;
}