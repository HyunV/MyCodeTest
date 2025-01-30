#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
	int n, m;

	unordered_set<int> uSet;

	cin >> n >> m;
	int num;
	while (n--)
	{
		cin >> num;
		uSet.insert(num);
	}

	int cnt = 0;
	while (m--)
	{
		cin >> num;
		if (uSet.find(num) != uSet.end())
			cnt++;
		else
			uSet.insert(num);
	}

	cout << uSet.size() - cnt;
}