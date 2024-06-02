#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> wUniv(10);
	vector<int> kUniv(10);
	
	for (int i = 0; i < 10; i++)
		cin >> wUniv[i];

	for (int i = 0; i < 10; i++)
		cin >> kUniv[i];

	sort(wUniv.begin(), wUniv.end(), greater<int>());
	sort(kUniv.begin(), kUniv.end(), greater<int>());

	cout << wUniv[0] + wUniv[1] + wUniv[2] << ' ' << kUniv[0] + kUniv[1] + kUniv[2];

}