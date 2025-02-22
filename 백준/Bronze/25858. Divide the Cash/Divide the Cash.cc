#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, prize;
	cin >> n >> prize;
	vector<int> solved(n);
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> solved[i];
		sum += solved[i];
	}
	prize /= sum;
	for (int i = 0; i < n; i++)
		cout << solved[i] * prize << '\n';
}