#include <iostream>
#include <string>

using namespace std;

int main() {
	int n; 
	cin >> n;

	int day = 0, answer = 0;
	string s;
	for (int i = 0; i < n; i++) 
	{
		cin >> s;
		int day = stoi(s.substr(2));

		if (day <= 90) 
			answer++;
	}
		cout << answer;
}