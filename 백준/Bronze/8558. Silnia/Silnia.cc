#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	if (n == 0)
	{
		cout << 1;
		return 0;
	}
		
	int num = n;
	while (--n)
		num = (num * n) % 10;

	cout << num;
}