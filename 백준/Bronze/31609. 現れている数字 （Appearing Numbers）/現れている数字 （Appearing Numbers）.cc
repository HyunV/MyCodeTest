#include <iostream>
#include <set>
using namespace std;

int main()
{
	int n, m;
	set<int> set;
	cin >> n;
	while (n--)
	{
		cin >> m;
		set.insert(m);		
	}

	for (int i : set)
		cout << i << '\n';
}