#include <iostream>
using namespace std;

int N, M;
int arr[10];
bool isUsed[10];

void Recursive(int num)
{
	if (num == M) //모든 칸이 찼으면 출력
	{
		for (int i = 0; i < M; i++)
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; i++)
	{
		if (!isUsed[i])
		{
			arr[num] = i;
			isUsed[i] = true;

			Recursive(num + 1); //재귀
			isUsed[i] = false;
		}
	}
}

int main()
{
	cin >> N >> M;
	Recursive(0);
}