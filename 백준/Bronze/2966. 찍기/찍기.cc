#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	char Adrian[] = { 'A','B','C' };
	char Bruno[] = { 'B','A','B','C' };
	char Goran[] = { 'C','C','A','A','B','B'};

	int num = 0;
	int correctArr[] = { 0, 0, 0 };
	int maxScore = 0;
	string s;
	cin >> num >> s;

	for (int i = 0; i < num; i++)
	{
		if (Adrian[i%3] == s[i])
		{
			correctArr[0]++;
			maxScore = max(maxScore, correctArr[0]);
		}

		if (Bruno[i%4] == s[i])
		{
			correctArr[1]++;
			maxScore = max(maxScore, correctArr[1]);
		}

		if (Goran[i%6] == s[i])
		{
			correctArr[2]++;
			maxScore = max(maxScore, correctArr[2]);
		}	
	}

	cout << maxScore << '\n';

	if (correctArr[0] == maxScore)
		cout << "Adrian\n";
	if (correctArr[1] == maxScore)
		cout << "Bruno\n";
	if (correctArr[2] == maxScore)
		cout << "Goran\n"; 
}