#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	string s = "";
	getline(cin, s);
	for(int i = 1; i<=n; i++)
	{
		getline(cin, s);
		cout << i << ". "<<s <<'\n';
	}
}