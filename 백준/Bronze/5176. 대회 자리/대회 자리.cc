#include <iostream>
#include <vector>

using namespace std;

int main(){
	int tc;

	cin >> tc;
	int n, m , k;
	while(tc--){
		cin >> n >> m;
		int cnt = 0;
		vector<bool> vec(m+1);
		while(n--)
		{
			cin >> k;
			vec[k] ? cnt++ : vec[k] = true;
		}
		cout << cnt << '\n';
	}
}