#include <iostream>
using namespace std;

/*
//소수 : 1과 자기 자신의 수로만 나뉘는 수

* 0, 1은 소수가 아니다. 2는 소수다.

1. 1부터 m까지의 소수를 판별하려면 1<=sqrt(m) 까지 확인하면된다. -> i*i < m
2. 2를 제외한 짝수는 모두 소수가 아니므로 홀수 위주로 계산한다. 
*/

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long n, m;

	cin >> n;

	while (n--)
	{
		cin >> m;
		
		if (m <= 2)
		{
			cout << 2 << '\n';
			continue;
		}
		else if (m % 2 == 0) // 짝수면 홀수로 바꾸기
			m++;

		while (true)
		{
			bool isPrime = true;

			for (long long i = 2; i * i <= m; i++)
			{
				if (m % i == 0)
				{
					isPrime = false;
					break;
				}
			}
			if (isPrime)
			{
				cout << m << '\n';
				break;
			}
			m += 2;
		}
	}
}