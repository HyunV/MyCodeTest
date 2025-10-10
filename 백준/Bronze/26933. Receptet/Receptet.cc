#include <iostream>

using namespace std;

int main()
{
	int n;
	int h,b,k;
	int res = 0;
	cin >> n;
	while(n--) {
		cin >> h >> b >> k;
		int cost = b-h;
		if(cost > 0)	{
			res += cost * k;
		}
	}
	cout << res;
}