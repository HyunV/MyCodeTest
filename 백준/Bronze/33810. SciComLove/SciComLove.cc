#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	const string s2 = "SciComLove";

	int cnt = 0;
	for(int i = 0; i<s.size(); i++)
	{
		if(s[i] != s2[i])
			cnt++;
	}
	cout << cnt;
}