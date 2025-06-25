#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s >> s;
	int size = s.size() - 5;
	cout << s.substr(size);
}