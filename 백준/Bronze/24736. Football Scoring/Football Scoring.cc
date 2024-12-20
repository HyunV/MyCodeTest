#include <iostream>
#include <vector>
using namespace std;


int main()
{
	vector<int> score = { 6, 3, 2, 1, 2 };

	int n;
	int sumA = 0, sumB = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		sumA += n * score[i];
	}
		

	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		sumB += n * score[i];
	}
	
	cout << sumA << ' ' << sumB;
}