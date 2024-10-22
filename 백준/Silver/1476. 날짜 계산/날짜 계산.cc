#include <iostream>
using namespace std;

int main()
{
	/*
	1. 배열에 E, S, M을 받는다.
	2. while문을 돌린다.
	2.5  cnt +1
	3. 각 배열에 1씩 더하고 %E %S, %M 을 한다. 0이 된다면 1로 바꾼다.
	4. E, S, M이 입력값과 동일할 때 break
	
	*/
	
	//E S M
	const int E = 15;
	const int S = 28;
	const int M = 19;
	
	int ESM[3] = { 1, 1, 1 };
	int answer[3] = {};

	cin >> answer[0] >> answer[1] >> answer[2];

	int cnt = 1;
	while (1)
	{
		if (ESM[0] == answer[0] &&
			ESM[1] == answer[1] &&
			ESM[2] == answer[2])
			break;

		cnt++;

		ESM[0] = ESM[0] % E +1;
		ESM[1] = ESM[1] % S +1;
		ESM[2] = ESM[2] % M + 1;
	}

	cout << cnt;
}