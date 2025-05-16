#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, m;
	cin >> n;

	const string five = "++++ ";
	
	while(n--)
	{
		string answer = "";

		cin >> m;
		int a = m / 5;
		for(int i = 0; i< a; i++)
			answer+=five;

		int b = m % 5;

		for(int i = 0.; i<b; i++)
			answer += '|';

		cout << answer << '\n';		
	}
}