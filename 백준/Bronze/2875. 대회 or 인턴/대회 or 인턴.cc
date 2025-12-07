#include<iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	int temp = min(n / 2, m);

	int sum = n + m - (2 * temp + temp);

	if (k <= sum) 
		cout << temp;
	else {
		temp = temp - ((k - sum + 2) / 3);
        cout << temp;
    }
}