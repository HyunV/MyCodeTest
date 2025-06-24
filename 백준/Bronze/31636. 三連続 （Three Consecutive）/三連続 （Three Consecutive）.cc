#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s >> s;

	int size = s.size() - 2;
	for (int i = 0; i < size; i++)
	{
		if (s[i] == 'o' && s[i + 1] == 'o' && s[i + 2] == 'o')
		{
			cout << "Yes";
			return 0;
		}
	}
	cout << "No";
}