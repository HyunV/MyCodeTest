#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s; 

	cin >> s;

	vector<int> v;

	string num = "";

	for (char c : s)
	{
		if (c == '/')
		{
			v.push_back(stoi(num));
			num = "";
		}			
		else
			num += c;
	}
	v.push_back(stoi(num));

	if (v[0] + v[2] < v[1] || v[1] == 0)
		cout << "hasu";
	else
		cout << "gosu";
}