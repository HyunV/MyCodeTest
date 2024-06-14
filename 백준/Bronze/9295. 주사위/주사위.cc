#include <iostream>

using namespace std;

int main()
{
	int n, a, b;
	int cnt = 0;
	cin >> n;
	while(n--)
	{
		cnt++;
		cin >> a >> b;
		cout << "Case "<<cnt <<": "<<a+b<<'\n';
	}
}