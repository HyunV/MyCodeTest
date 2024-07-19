#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;

	while(getline(cin, s))
	{
		int arr[4] = {0, 0, 0, 0};
		for(char c : s)
		{
			if(c >= '0' && c <= '9')
				arr[2]++;
			else if (c >= 'A' && c <= 'Z')
				arr[1]++;
			else if(c >= 'a' && c <= 'z')
				arr[0]++;
			else if(c ==' ')
				arr[3]++;
		}
		
		for(int i = 0; i<4; i++)
			cout << arr[i] << ' ';

		cout << '\n';
	}	
	
}