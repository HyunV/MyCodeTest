#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	// 제곱근 (x2 - x1)^ + (y2-y1)^
	int arr[6];
	for (int i = 0; i < 6; i++)
		cin >> arr[i];


	double range = sqrt(pow(arr[3] - arr[0], 2) + pow(arr[4] - arr[1], 2));
	if (range < arr[2]+ arr[5])
		cout << "YES";
	else
		cout << "NO";
}