#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int answer = 0;
	cin >> n;
	
	while(n--)
	{
		cin >> m;
		answer += m;
	}
	cout << answer;
}