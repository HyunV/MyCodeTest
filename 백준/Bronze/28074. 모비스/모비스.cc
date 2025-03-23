#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	const int charSize = 5;
	vector<char> mobis = { 'M','O','B','I','S' };
	vector<bool> isUsed(charSize);
	int answer = 0;
	string s;
	cin >> s;

	for (char c : s)
	{
		for (int i = 0; i<charSize; i++)
		{
			if (isUsed[i])
				continue;

			if (c == mobis[i])
			{
				isUsed[i] = true;
				answer++;
			}				
		}
	}
	cout << ((answer == charSize) ? "YES" : "NO");
}