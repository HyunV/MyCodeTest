#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int n;
	int m;
	string s;	
	map<int, string> maps;
	cin >> n;
	while (n--)
	{
		cin >> s;
		cin >> m;
		maps.insert({ m, s });
	}
	cout << maps.begin()->second;
}