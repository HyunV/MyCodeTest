#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num = 3;
	int n, m;
	vector<int> vec(num);
	while(num--) {
		cin >> vec[num];		
	}

	sort(vec.begin(), vec.end());
	n = vec[1] - vec[0];
	m = vec[2] - vec[1];

	if(n > m)
		cout << vec[0] + m;
	else if (n == m)
		cout << vec[2] + n;
	else
		cout << vec[1] + n;
}