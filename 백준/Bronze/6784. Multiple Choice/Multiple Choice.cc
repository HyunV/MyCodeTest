#include <iostream>

using namespace std;

int main()
{
	char arr[10001];
	int n;
	cin >> n;
	char c;
	int answer = 0;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		cin >> c;
		if (c == arr[i])
			answer++;
	}

	cout << answer;
}