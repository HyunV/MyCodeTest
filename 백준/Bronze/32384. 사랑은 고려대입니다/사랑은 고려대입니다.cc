#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s = "LoveisKoreaUniversity";
	int n;
	string s2 = "";
	cin >> n;
	while(n--)
	{
		s2+= s+' ';
	}
	s2.pop_back();

	cout << s2;	
}