#include <iostream>
#include <string>
using namespace std;

int main()
{
	char alpha[10] = {'a' , 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
	
	string s;
	while(true)
	{
		getline(cin, s);

		if(s == "#")
			break;
		
		int answer = 0;

		for(char c : s)
		{
			for(int i = 0; i<10; i++)
			{
				if(alpha[i] == c)
				{
					answer++;
					break;
				}
			}
		}
		cout << answer << '\n';
	}
}