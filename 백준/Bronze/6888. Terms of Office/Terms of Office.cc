#include <iostream>

using namespace std;

int main()
{
	//시장 4년, 재무 2년, 플그 3년, 개잡이 5년

	const int num = 60;
	int x, y;
	cin >> x >> y;
	for (int i = x; i <= y; i++)
		if ((i - x) % 60 == 0)
			cout << "All positions change in year " << i << '\n';
}