#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int n = 9;
	int l = 0, t = 0;
	while(n--)
	{
		cin >> s;
		if(s == "Lion")
			l++;
		else
			t++;
	}
	if(l > t)
		cout << "Lion";
	else
		cout << "Tiger";
}