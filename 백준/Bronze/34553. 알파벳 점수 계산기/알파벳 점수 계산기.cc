#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	int size = s.size();
	int res = 1;
	int bonus = 1;
	
	for (int i = 1; i < size; ++i) {
		if (s[i] > s[i - 1]) {
			bonus += 1;			
		}
		else {
			bonus = 1;			
		}
		res += bonus;
	}
	cout << res;
}