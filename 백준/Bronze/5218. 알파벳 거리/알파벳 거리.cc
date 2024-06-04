#include <iostream>
#include <string>

using namespace std;

int main()
{
	const int ALPHA = 26;
	string s1, s2;
	int n;
	cin >> n;
	while (n--)
	{
		cin >> s1 >> s2;
		cout << "Distances: ";
		for (int i = 0; i < s1.size(); i++)
		{
			int sum = s2[i] - s1[i];

			if (sum < 0)
				sum = ALPHA + sum;

			cout << sum << ' ';
		}
		cout << '\n';
	}
}