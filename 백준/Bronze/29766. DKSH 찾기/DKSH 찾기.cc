#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	cin >> s;

	int answer = 0;
	int n = s.size() - 3;
	for (int i = 0; i < n; i++)
		if (s.substr(i, 4) == "DKSH")
			answer++;
			
	cout << answer;
}