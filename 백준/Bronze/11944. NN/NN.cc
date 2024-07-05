#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int num;
	cin >> s >> num;

	int i = stoi(s);
	string s2 = "";
	while (i--)
		s2 += s;

	int num2 = stoi(s);
	if (s2.size() > num)
		s2 = s2.substr(0, num);

	cout << s2;
}