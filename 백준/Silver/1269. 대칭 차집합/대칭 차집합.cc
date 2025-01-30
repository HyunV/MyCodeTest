#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int n, m;

	unordered_set<int> uSet;

	cin >> n >> m;
	int num;
	int cnt = 0;
	while (n--)
	{
		cin >> num;
		uSet.insert(num);
		cnt++;
	}


	while (m--)
	{
		cin >> num;
		if (uSet.find(num) != uSet.end())
		{
			cnt--;
			continue;
		}

		uSet.insert(num);
		cnt++;
	}

	cout << cnt;
}