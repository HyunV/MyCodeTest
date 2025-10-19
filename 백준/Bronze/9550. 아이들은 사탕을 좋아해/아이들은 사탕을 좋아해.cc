#include <iostream>

using namespace std;

int main()
{
	int t, n, k;
	cin >> t;
	
	int num, cnt;
	for(int i = 0; i<t; ++i) {
		cin >> n >> k;
		cnt = 0;
		for(int j = 0; j< n; ++j) {
			cin >> num;
			while( num >= k) {
				cnt++;
				num -= k;
			}
		}
		cout << cnt << '\n';
	}
}
