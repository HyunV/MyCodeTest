#include <iostream>

using namespace std;

int main()
{
	int n, t, m;
	int sum = 0, answer = 0;
	cin >> n >> t;

	while(n--)
	{
		cin >> m;
		sum+= m;
		if(sum > t)
			break;

		answer++;		
	}

	cout << answer;
}