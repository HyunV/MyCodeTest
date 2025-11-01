#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int answer = 0;
	cin >> n;
	string s;
	int sum;
	for (int i = 1; i <= n; i++) {
		s = to_string(i);
		sum = 0;
		for (char c : s)
			sum += c - '0';

		if (i % sum == 0)
			answer++;
	}

	cout << answer;
}