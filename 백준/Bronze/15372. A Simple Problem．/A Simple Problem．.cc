#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	long long m;

	cin >> n;

	//pow는 부동소수점 연산이라 long long를 넣어도 inf가 떴다.
	while (n--)
	{
		cin >> m;
		
		cout << m*m << '\n';
	}
}