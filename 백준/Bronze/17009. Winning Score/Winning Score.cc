#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;

	int num;
	for(int i = 3; i>0; i--)
	{
		cin >> num;
		a+= num * i;
	}

	for(int i = 3; i>0; i--)
	{
		cin >> num;
		b+= num * i;
	}

	if(a> b)
		cout << 'A';
	else if(a<b)
		cout << 'B';
	else
		cout << 'T';

}