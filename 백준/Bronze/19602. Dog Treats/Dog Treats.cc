#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0;
	for(int i = 1; i<=3; i++)
	{
		cin >> n;
		sum += n * i;
	}

	cout << (sum >= 10 ? "happy" : "sad");
}