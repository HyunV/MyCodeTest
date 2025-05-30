#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	s = s.substr(0, 5);
	string s2;
	int n;
	int answer = 0;

	cin >> n;
	while (n--)
	{
		cin >> s2;

		if (s2.substr(0, 5) == s)
			answer++;
	}

	cout << answer;
	
}