#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;

	int length = 1;
	int size = s.size();
	int nextNum = 0;
	int i = 0;
	while (i < size)
	{
		nextNum++;	
		length = ((nextNum) / 10) + 1;

		if (i-1 + length > size)
		{
			nextNum = -1;
			break;
		}			

		int n = stoi(s.substr(i, length));
		i += length;
		if (n != nextNum)
		{
			nextNum = -1;
			break;
		}				
	}
	cout << nextNum;

}