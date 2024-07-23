#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s[50];
	int alpha[26];

	for(int i = 0; i<50; i++)
		getline(cin, s[i]);

	for(int i = 0; i<26; i++)
		alpha[i] = 0;

	for(int i = 0; i<50; i++)
	{
		for(char c : s[i])
		{
			if(c ==' ')
				continue;
			
			alpha[c - 'a']++;		
		}
	}

	string answer = "";
	int maxNum =-1;
	for(int i =0; i<26; i++)
	{
		if(alpha[i] > maxNum)
		{
			maxNum = alpha[i];
		}
	}
	
	for(int i = 0; i<26; i++)
	{
		if(alpha[i] == maxNum)
			answer += (char)(i + 'a');
	}
	cout << answer;
}