#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> vec(2);
	cin >> vec[0] >> vec[1];
	
	while (vec[0] != vec[1]) {
		sort(vec.begin(), vec.end());
		vec[1] -= vec[0];
	}
	cout << vec[1];
}