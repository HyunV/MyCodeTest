#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	
	// XOR 시 1의 최대 개수
	// x의 1의 자리와 y의 0의 개수를 비교해서 더 작은거 (1, 0)의 경우
	// x의 0의 자리와 y의 1의 개수를 비교해서 더 작은거 (0, 1)의 경우
	int calc = min(a, n - b) + min(n - a, b);
	int answer = 0;
	
	while(calc--)
		answer ^= (1 << n - calc - 1);
	
	cout << answer;
}