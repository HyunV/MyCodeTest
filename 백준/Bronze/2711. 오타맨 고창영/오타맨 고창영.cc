#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int num;
	string s;
	while (N--)
	{
		cin >> num >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if (i == num - 1)
				continue;

			cout << s[i];
		}
		cout << '\n';
	}
}