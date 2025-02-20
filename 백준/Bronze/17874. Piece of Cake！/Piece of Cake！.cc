#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int n, h, v; //케이크 한 변, 가로 칼질 길이, 세로 칼 질 길이
	const int volume = 4;

	cin >> n >> h >> v;

	int width = max(n - h, h);
	int height = max(n-v, v);
	
	cout << width * height * volume;
}