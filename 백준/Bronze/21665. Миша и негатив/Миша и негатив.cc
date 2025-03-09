#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;

	int size = n * m;
	string s;
	string origin = "";
	string compare = "";

	int cnt = n * 2;
	bool isCompStr = false;
	while (cnt--)
	{
		cin >> s;
		if (cnt == n-1)
			isCompStr = true;

		if (!isCompStr)
		{
			for (char& c : s)
				if (c == 'W')
					c = 'B';
				else if (c == 'B')
					c = 'W';

			origin += s;
		}
		else
			compare += s;
	}

	int answer = 0;
	for (int i = 0; i < size; i++)
		if (origin[i] != compare[i])
			answer++;

	cout << answer;
}