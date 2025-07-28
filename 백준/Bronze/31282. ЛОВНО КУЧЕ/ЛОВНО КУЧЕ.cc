#include<iostream>

using namespace std;

int main()
{
	 int n, m, k;
	cin >> n >> m >> k;

	int dog = -n;
	int rabbit = 0;

	int jump = 0;
	while(dog < rabbit)
	{
		dog += k;
		rabbit += m;
		jump++;
	}
	cout << jump;
}
