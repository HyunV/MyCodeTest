#include <iostream>

using namespace std;

long long rec(int n)
{
	long long result = 1;
	for(int i = 1; i<=n; i++)
		result *=i;

	return result;
}

int main()
{
	int n;
	long long week = 7*24*60*60;
	cin >> n;
	long long answer = rec(n);
	cout << answer / week;	
}