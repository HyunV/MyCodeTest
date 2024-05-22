#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	const int M = 5;
	cin >> n;

	while (n--)
	{
		vector<int> v(M);
		for (int i = 0; i < M; i++)
			cin >> v[i];
		
		sort(v.begin(), v.end());

		int sum = 0;
		for (int i = 1; i <= 3; i++)
			sum += v[i];

		if (v[3] - v[1] >= 4)
			cout << "KIN\n";
		else
			cout << sum << '\n';

	}
}