#include <iostream>

using namespace std;

int main()
{
	int arr[4];

	cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
	if ((arr[0] == 8 || arr[0] == 9) && (arr[3] == 8 || arr[3] == 9) && (arr[1] == arr[2]))
		cout << "ignore";
	else
		cout << "answer";
}