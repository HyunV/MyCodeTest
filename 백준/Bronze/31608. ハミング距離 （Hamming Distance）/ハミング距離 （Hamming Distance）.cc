#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, s2;	
	cin >> s >> s >> s2;

	int answer =0;
	for(int i = 0; i< s.size(); i++)
	{
		if(s[i] != s2[i])
			answer++;
	}
	cout << answer;
}