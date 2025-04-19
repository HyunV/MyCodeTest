#include <iostream>

using namespace std;

int main()
{
	//계수(라면 수 - 1) + 물의양

	int n;
	cin >> n;
	while(n--)
	{
		int a, b, x;
		cin >> a >> b >> x;
		cout << a * (x-1) + b << '\n';
	}
}