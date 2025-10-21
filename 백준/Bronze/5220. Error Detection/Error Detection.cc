#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int n;
	int num, isValid;
	cin >> n;
	while (n--)
	{
		cin >> num >> isValid;
		bitset<16> bit(num);

		int res = bit.count() % 2;
		cout << (res == isValid ? "Valid" : "Corrupt") << '\n';
	}
}