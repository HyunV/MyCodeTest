#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	int sum = 0;
	for (char c : s)
	{
		int num = c - '0';
		num = pow(num, 5);
		sum += num;
	}
	cout << sum;
}