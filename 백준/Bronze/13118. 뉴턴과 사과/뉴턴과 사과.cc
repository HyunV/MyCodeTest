#include <iostream>

using namespace std;

int main()
{
	int arr[4];
	int x, y, r;
	int answer = 0;

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> x >> y >> r;
	for (int i = 1; i <= 4; i++)
	{
		if (x == arr[i - 1])
			answer = i;
	}
	cout << answer;
}