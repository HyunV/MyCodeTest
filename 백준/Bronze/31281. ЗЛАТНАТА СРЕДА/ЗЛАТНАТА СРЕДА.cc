#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<long long> vec(3);
	cin >> vec[0] >> vec[1] >> vec[2];

	sort(vec.begin(), vec.end());
	cout << vec[1];	
}
