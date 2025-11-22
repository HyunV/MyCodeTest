#include <iostream>
 
using namespace std;
 
int main()
{
	int t, d, answer = 0;
	cin >> t;
 
	for (int i = 0; i < t; ++i) {
		cin >> d;
		for (int j = 0; j * j + j <= d; ++j) {
            		if (j > answer) {
				answer = j;
			}
		}
		cout << answer << '\n';
        	answer = 0;
	}
}