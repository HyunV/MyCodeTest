#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m;
	string s;
	cin >> n >> m;

	int answer = 0;
	while(n--)
	{
		cin >> s;
		for(char c : s)
		{
			if(c=='+')
			{
				answer ++;
				break;
			}				
		}			
	}
	cout << answer;
}