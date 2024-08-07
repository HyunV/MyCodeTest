#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v1(n);
	vector<int> v2(n);

	for(int i; i<n; i++)
		cin >> v1[i];

	for(int i; i<n; i++)
		cin >> v2[i];

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater<int>());

	int sum = 0;

	for(int i; i<n; i++)
		sum += v1[i] * v2[i];

	cout << sum;
}