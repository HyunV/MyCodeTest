#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
	int n;
	cin >> n;
	
	unordered_set<string> uset;
	uset.insert("Never gonna give you up");
	uset.insert("Never gonna let you down");
	uset.insert("Never gonna run around and desert you");
	uset.insert("Never gonna make you cry");
	uset.insert("Never gonna say goodbye");
	uset.insert("Never gonna tell a lie and hurt you");
	uset.insert("Never gonna stop");
	string s;

	bool flag = true;
	getline(cin, s);
	while (n--)
	{
		getline(cin, s);
		if (uset.find(s) == uset.end())
			flag = false;

	}
	cout << (flag ? "No" : "Yes");
}