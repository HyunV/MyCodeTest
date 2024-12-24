#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int i = 3;
	vector<int> vec(i);
	while (i--)
		cin >> vec[i];
	
	sort(vec.begin(), vec.end());

	cout << vec[1];
}