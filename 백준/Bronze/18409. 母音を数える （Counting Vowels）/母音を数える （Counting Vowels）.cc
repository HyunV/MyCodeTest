#include <iostream>
using namespace std;

int main()
{
	string temp = "aiueo";
	string s;
	int answer = 0;
	cin >> s >> s;
	for (char c : s)
	{
		for (char c2 : temp)
		{
			if (c == c2)
			{
				answer++;
				break;
			}
		}
	}
	cout << answer;
}