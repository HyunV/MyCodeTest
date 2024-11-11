#include  <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	const int num = 3;
	vector<int> vec(num);

	for(int i = 0; i < num; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());
	
	cout << vec[1] + vec[2];
}