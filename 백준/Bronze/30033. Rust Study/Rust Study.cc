#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	vector<int> vec(n);

	int answer = 0;
	for(int i = 0; i<n; i++)
		cin >> vec[i];

	for(int i = 0; i<n; i++)
	{
		cin >> m;
		if(vec[i] <= m)
			answer++;
	}

	cout << answer;
}