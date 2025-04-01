#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int sum = 0;

	cin >> n >> m;
	sum = n;
	while(m--)
	{
		cin >> n;
		sum -= n;
	}

	if(sum <= 0)
		cout << "Padaeng_i Happy";
	else
		cout << "Padaeng_i Cry";
}