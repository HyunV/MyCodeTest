#include <iostream>

using namespace std;

int main()
{
	int n, m,cost;
	cin >> n >> cost;

	int answer = 0;
	while(n--)
	{
		cin >> m;
		if(m >= cost)
			answer+= m/cost;
	}
	cout << answer;
}