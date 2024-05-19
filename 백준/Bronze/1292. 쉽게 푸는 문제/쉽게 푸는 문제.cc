#include <iostream>
#define MAX_NUM 1001
using namespace std;

int arr[MAX_NUM];
int main()
{
	int num = 1;
	int j = num;
	for (int i = 1; i <= MAX_NUM; i++)
	{
		arr[i] = num;
		if (!(--j))
		{
			num++;
			j = num;
		}
	}

	int N, M, sum =0;
	cin >> N >> M;

	for (int i = N; i <= M; i++)
		sum += arr[i];
	
	cout << sum;
}