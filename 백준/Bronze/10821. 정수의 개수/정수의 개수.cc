#include<iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int answer = 0;
	cin >> s;


	for(char c : s)
		if(c == ',')
			answer++;

	cout << answer+1;
}