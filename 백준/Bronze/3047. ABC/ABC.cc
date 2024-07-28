#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	vector<int> vec(3);
	cin >> vec[0] >> vec[1]>> vec[2];
	sort(vec.begin(), vec.end());

	string s;

	cin >> s;
	for(char c : s)
	{
		switch(c)
		{
			case 'A':
				cout << vec[0] << ' ';
				break;
			case 'B':
				cout << vec[1] << ' ';
				break;
			case 'C':
				cout << vec[2] << ' ';
				break;		
		}
	}
	
}