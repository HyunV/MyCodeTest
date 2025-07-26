#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d, e;
	int answer = 0;
	cin >> a >> b >> c >> d >> e;
	if (a - 1000 <= b) 
		answer++;
	if (a - 1000 <= c) 
		answer++;
	if (a - 1000 <= d) 
		answer++;
	if (a - 1000 <= e) 
		answer++;

	cout << answer;
}