#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
	set<char> set;
	set.insert('l');
	set.insert('k');
	set.insert('p');
	string s[3];
	cin >> s[0] >> s[1] >> s[2];

	int answer = 0;

	for (int i = 0; i < 3; i++)
	{
		if (s[i].size() <= 0)
			continue;

		if (set.insert(s[i][0]).second == false)
			answer++;
			
		set.erase(s[i][0]);
	}

	if (answer == 3)
		cout << "GLOBAL";
	else
		cout << "PONIX";
}