#include <iostream>
#include <string>
using namespace std;

int main()
{
	char c = '+';
	int n; 
	int sum = 0;

	bool isNum = true;
	bool isFinish = false;
	while (!isFinish)
	{
		if (isNum)
		{
			cin >> n;
			switch (c)
			{
			case '+':
				sum += n;
				break;
			case '-':
				sum -= n;
				break;
			case '*':
				sum *= n;
				break;				
			case '/':
				sum /= n;
				break;			
			}
		}
		else
		{
			cin >> c;
			if (c == '=')
				break;
		}

		isNum = !isNum;
	}

	cout << sum;

}