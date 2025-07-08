#include <iostream>
#include <string>
using namespace std;

int main()
{
	const string chunbae = "chunbae";
	const string nabi = "nabi";
	const string yeongcheol = "yeongcheol";
	const int arrSize = 15;
	
	int size = arrSize * arrSize;
	
	char c;
	string answer;
	while (size--)
	{
		cin >> c;

		if (c == 'w')
			answer = chunbae;
		else if (c == 'b')
			answer = nabi;
		else if (c == 'g')
			answer = yeongcheol;
	}
	cout << answer;
}