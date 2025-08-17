#include <iostream>

using namespace std;

int main()
{
	int n, a, b;
	int answer = 2147483647;

	cin >> n;
	while(n--)
	{
		cin >> a >> b;
		if(a<=b && b<answer)
			answer = b;
	}
	
	if(answer == 2147483647)
		cout << -1;
	else
		cout << answer;
}