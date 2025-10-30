#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int answer = 0;
	for(int i = 1; i<= 100; i++)
		for(int j = 1; j<= 100 - i; j++)
			for(int k = 1; k<=100-i-j; k++)
				if(j!= 0 && k != 0 && (k % 2 == 0) && (i+j+k == n) && (i >= j+2))
					answer++;

	cout << answer;
}