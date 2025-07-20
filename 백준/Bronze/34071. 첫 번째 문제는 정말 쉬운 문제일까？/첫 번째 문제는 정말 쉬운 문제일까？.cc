#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> vec(n);
	vector<int> vec2(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
		vec2[i] = vec[i];
	}
	sort(vec2.begin(), vec2.end());

	if (vec[0] == vec2[0])
		cout << "ez";
	else if (vec[0] == vec2[n - 1])
		cout << "hard";
	else
		cout << "?";
}