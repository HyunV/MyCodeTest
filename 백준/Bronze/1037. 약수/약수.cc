#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	
	long long n, maxNum = 0;
	
	cin >> n;
	vector<long long> vec(n);
	while (n--){
		cin >> vec[n];
		maxNum = max(maxNum, vec[n]);
	}

	if ((int)vec.size() == 1)
	{
		cout << vec[0] * vec[0];
		return 0;
	}

	sort(vec.begin(), vec.end());

	cout << (*vec.begin()) * (*(vec.end()-1));
}