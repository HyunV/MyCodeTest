#include <iostream>

using namespace std;

int main()
{
	int yyyy = 2024;
	int mm = 8; //1~12
	int n;
	cin >> n;
		
	mm += (n - 1) * 7; //첫 대회는 그대로니 -1
	yyyy += (mm - 1) / 12; // 0~ 11 기준으로 나눔
	mm = (mm - 1) % 12 + 1; // 1~ 12로 환원

	cout << yyyy << ' ' << mm;
}