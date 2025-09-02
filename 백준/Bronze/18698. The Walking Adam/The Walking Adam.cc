#include <iostream>
using namespace std;

int main(){
	int n, answer;
	string s;

	cin >> n;
	while(n--)
	{
		answer = 0;
		cin >> s;
		for(char c : s)
		{		
			if(c == 'D') 
			break;
		
			answer++;
		}
			cout << answer << '\n';
	}
}