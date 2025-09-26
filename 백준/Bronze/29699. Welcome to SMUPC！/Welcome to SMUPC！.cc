#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	string s = "WelcomeToSMUPC";
	int sz = s.size(); //14

	cout << s[(n - 1) % sz];
}
