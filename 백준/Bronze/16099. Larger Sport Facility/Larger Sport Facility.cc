#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a, b, c, d;
	long long  tel, eure;
		while (n--)
		{
			cin >> a >> b >> c >> d;
			tel = (long long)a * b;
			eure = (long long)c * d;

			if (tel > eure)
				cout << "TelecomParisTech\n";
			else if (tel < eure)
				cout << "Eurecom\n";
			else
				cout << "Tie\n";

		}
}