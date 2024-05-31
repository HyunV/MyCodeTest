#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int x, y, z = 0;
	string s;
	while (N--)
	{
		z = 0;
		cin >> x >> y;
		for (int i = x; i <= y; i++)
		{
			s = to_string(i);
			for (char c : s)
			{
				if (c == '0')
					z++;
			}
		}

		cout << z << '\n';
	}
	
}