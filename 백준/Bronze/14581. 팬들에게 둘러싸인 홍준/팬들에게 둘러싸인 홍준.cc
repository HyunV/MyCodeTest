#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string fan = ":fan:";

	string s;

	cin >> s;

	cout << fan << fan << fan<<'\n';
	cout << fan <<":"<< s <<":"<< fan<<'\n';
	cout << fan << fan << fan;
}