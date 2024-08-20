#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int cnt = 5;

	bool isFBI = false;
	for (int i = 1; i <= cnt; i++)
	{
		cin >> s;
		if (s.find("FBI") != string::npos)
		{
			isFBI = true;
			cout << i << ' ';
		}		
	}

	if (!isFBI)
		cout << "HE GOT AWAY!";
}