#include <iostream>

using namespace std;

int main()
{
	int chicken, cola, beer;

	cin >> chicken >> cola >> beer;

	int answer = (cola /2) + beer;

	if(chicken > answer)
		cout << answer;
	else
		cout << chicken;
}