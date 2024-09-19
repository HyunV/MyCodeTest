#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int answer = 0;
	cin >> n;
	for(int i = 0; i<3; i++)
	{
		cin >> m;
		answer += (n >= m ? m : n);
	}

	cout << answer;
}