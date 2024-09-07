#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	cin >> s;
	string answer = (s.substr(0, 3) == "555") ? "YES" : "NO";
	cout << answer;
}