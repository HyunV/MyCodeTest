#include <iostream>
#define ONE_HOUR 3600
#define ONE_MIN 60
using namespace std;

int main()
{
	int h1, m1, s1, h2, m2, s2;
	int start, end, time, hour, min, sec;

	for (int i = 0; i < 3; i++)
	{
		cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

		start = (h1 * ONE_HOUR) + (m1 * ONE_MIN) + s1;
		end = (h2 * ONE_HOUR) + (m2 * ONE_MIN) + s2;

		time = end - start;
		hour = time / ONE_HOUR;
		min = (time % ONE_HOUR) / ONE_MIN;
		sec = (time % ONE_HOUR) % ONE_MIN;

		cout << hour << " " << min << " " << sec << '\n';
	}
}