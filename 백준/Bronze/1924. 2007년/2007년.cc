#include <iostream>
#include <string>

using namespace std;

int main() {
	const int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const string day[8] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	
	int x, y;
	cin >> x >> y;
	
	int answer = 0;

	for (int i = 0; i < x-1; i++) {
		answer += month[i];
	}
	answer += y;
	cout << day[answer %= 7];
}