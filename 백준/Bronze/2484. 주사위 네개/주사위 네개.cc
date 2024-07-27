#include <iostream>
#include <math.h>
#include <vector>
#include <utility>
using namespace std;

int main()
{

	int maxPrice = 0;

	int n;

	cin >> n;

	while (n--)
	{
		int dice[7] = { 0, 0, 0, 0, 0, 0, 0 };

		int num = 0;

		for (int i = 0; i < 4; i++)
		{
			cin >> num;
			dice[num]++;
		}

		//상금 계산
		pair<int, int> priceIdx = { 0, 0 }; //가장 큰 숫자, 해당 숫자의 인덱스
		int priceIdx2 = -1;

		for (int i = 1; i < 7; i++)
		{
			if (dice[i] >= priceIdx.first)
			{
				//2, 2 가 나올 경우
				if (dice[i] == 2 && priceIdx.first == 2)
					priceIdx2 = priceIdx.second;

				priceIdx = { dice[i], i };
			}
		}

		int price = 0;
		switch (priceIdx.first)
		{
		case 1: //각자 다른 눈금
			price = priceIdx.second * 100;
			break;
		case 2:
			//같으 눈이 2개씩 두 쌍
			if (priceIdx2 != -1)
				price = 2000 + (priceIdx.second * 500) + (priceIdx2 * 500);
			else
				price = 1000 + priceIdx.second * 100;
			break;

		case 3:
			price = 10000 + (priceIdx.second * 1000);
			break;

		case 4:
			price = 50000 + (priceIdx.second * 5000);
			break;
		}
		maxPrice = max(maxPrice, price);
	}
	cout << maxPrice;
}