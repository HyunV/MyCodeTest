#include <iostream>

using namespace std;

int main()
{
	int dd, hh, mm;
	cin >> dd >> hh >> mm;

	int calc = 11 + (11 * 60) + (11 * 60 * 24);
	int answer = mm + (hh * 60) + (dd * 60 * 24) - calc;

	if(answer < 0)
		cout << -1;
	else
		cout << answer;
}