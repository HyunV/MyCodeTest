#include <iostream>

using namespace std;

int main()
{
	int n;
	bool arr[101] = { 0 };
	arr[1] = true;
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			arr[i * j] = true;
		}
	}
	cin >> n;

	cout << (arr[n] ? "1" : "0");
}