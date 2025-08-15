#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	scanf("%d : %d : %d", &a, &b, &c);
	scanf("%d : %d : %d", &d, &e, &f);

	int start = (a * 3600) + (b * 60) + c;
	int end = (d * 3600) + (e * 60) + f;
	if (start > end)
		cout << ((24 * 3600) - start) + end;
	else
		cout << end - start;
}