#include <iostream>
#include <string>
using namespace std;

int main()
{
	string vowels = "AEIOU";

	int n;
	cin >> n;
	
	string s;
	getline(cin, s);

	while (n--)
	{
		int wordSize = 0, vowel = 0;
		getline(cin, s);
		for (char c : s)
		{
			if (c == ' ')
				continue;

			wordSize++;

			for (char c2 : vowels)
			{
				if (c == c2 || c == (c2 ^ 32))
				{
					vowel++;
					wordSize--;
					break;
				}				
			}			
		}
		cout << wordSize << ' ' << vowel << '\n';
	}
}