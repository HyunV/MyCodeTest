#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> vec(n);
	while (n--)
		cin >> vec[n];		

	sort(vec.begin(), vec.end());

	cout << (*vec.begin()) * (*(vec.end()-1));
}