#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector<int> vec(n);

		for(int i = 0; i<n; i++)
			cin >> vec[i];

		sort(vec.begin(), vec.end());
		
		int answer = 0;

		for(int i = 0; i<n-1; i++)
			answer += vec[i+1] - vec[i];

		cout << answer*2 << '\n';
	}
}