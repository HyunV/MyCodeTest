#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	cout << a + b - c << '\n';
	
	int m  = stoi(to_string(a) + to_string(b));
	cout << m - c;
}