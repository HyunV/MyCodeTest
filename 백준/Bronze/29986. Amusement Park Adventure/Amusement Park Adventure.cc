#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	int h;
	int answer = 0;
	while(n--)
	{
		cin >> h;

		if(h <= m)
			answer++;
	}

	cout << answer;
}