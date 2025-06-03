#include <iostream>
#include <string>
#include <utility>
#include <math.h>

using namespace std;

int main()
{
	string s;
	int n;

	pair<string, int> answer = { "", -1 };
	int num = 7;

	while (num--)
	{
		cin >> s >> n;
		if (n > answer.second)
			answer = { s, n };
	}

	cout << answer.first;
}