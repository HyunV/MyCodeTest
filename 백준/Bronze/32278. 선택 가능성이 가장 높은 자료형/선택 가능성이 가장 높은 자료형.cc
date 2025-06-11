#include <iostream>
#include <string>
using namespace std;

int main()
{
	const int maxInt = 2'147'483'647;
	const short maxShort = 32'767;
	string s = "long long";
	long long n;

	cin >> n;

	bool isMinus = n < 0;

	if (n <= maxInt && n >= (maxInt+1) * -1)
	{
		s = "int";

		if (n <= maxShort && n >= (maxShort + 1) * -1)
		{
			s = "short";
		}
	}

	cout << s;
	
}