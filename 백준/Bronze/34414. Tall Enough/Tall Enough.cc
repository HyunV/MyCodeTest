#include <iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n;

	bool b = true;
	while(n--)
	{
		cin >> m;
		if(m < 48)
			b = false;
	}
	cout << (b ? "True" : "False");
}