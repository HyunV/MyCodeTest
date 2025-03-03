#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	string answer = "";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		answer += s[i];
		i += s[i] - 'A';
	}
	cout << answer;
}