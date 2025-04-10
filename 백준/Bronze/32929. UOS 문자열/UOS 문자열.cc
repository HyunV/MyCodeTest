#include<iostream>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	char c[3] = { 'U','O','S' };
	cout << c[(n-1)% 3];
}