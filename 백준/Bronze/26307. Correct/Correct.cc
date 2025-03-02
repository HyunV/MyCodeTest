#include <iostream>

using namespace std;

int main()
{
	int h, m;

	cin >> h >> m;
	int answer = 0;
	int startH = 9;
	int startM = 0;
	while (true)
	{
		if (startH == h && startM == m)
			break;

		if (++startM % 60 == 0)
		{
			startM = 0;
			startH++;
		}
		answer++;
	}
	cout << answer;
}