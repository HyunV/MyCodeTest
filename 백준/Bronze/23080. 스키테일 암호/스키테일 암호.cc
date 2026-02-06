#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	cin >> n >> s;
	string answer = "";
	answer += s[0];
	int size = s.size();
	for (int i = n; i < size; i += n) {
		answer += s[i];
	}
	cout << answer;
}