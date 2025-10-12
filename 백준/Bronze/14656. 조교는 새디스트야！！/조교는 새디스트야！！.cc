#include <iostream>

using namespace std;

int main()
{
	int n, m;
	int res = 0;
	cin >>n;
	for(int i = 1; i<=n; ++i) {
		cin >> m;
		if(i != m)
			res++;
	}
	cout << res;
}