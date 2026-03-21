#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main() {
	int arr[5] = { 0,1,0,0,2 };
	string s; cin >> s;
	for (char c : s) {
		switch (c) {
		case 'A':
			swap(arr[1], arr[2]); 
			break;
		case 'B':
			swap(arr[1], arr[3]); 
			break;
		case 'C':
			swap(arr[1], arr[4]); 
			break;
		case 'D':
			swap(arr[2], arr[3]); 
			break;
		case 'E':
			swap(arr[2], arr[4]); 
			break;
		case 'F':
			swap(arr[3], arr[4]);
			break;
		}
	}

	for (int i = 1; i < 5; i++) {
		if (arr[i] == 1) cout << i << '\n';
	}
	for (int i = 1; i < 5; i++) {
		if (arr[i] == 2) cout << i << '\n';
	}
}