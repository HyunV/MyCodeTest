#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n;
		cin >> n;
		float sum = 0.f;
		while (n--)
		{
			string name;
			int count;
			float price;
			cin >> name >> count >> price;

			sum += count * price;			
		}
		printf("$%.2f\n", sum);
	}
}