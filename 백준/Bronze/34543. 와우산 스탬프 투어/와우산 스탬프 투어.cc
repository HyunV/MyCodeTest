#include <iostream>

using namespace std;

int main()
{
	int n, w;
	cin >> n >> w;

	int score = 0;

	score += n * 10;
	if (n >= 3)
		score += 20;
	if (n >= 5)
		score += 50;

	if (w > 1000)
		score -= 15;

	if (score < 0)
		score = 0;

	cout << score;
		
}