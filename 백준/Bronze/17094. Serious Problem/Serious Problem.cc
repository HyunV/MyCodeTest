#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;

	cin >> n >> s;

	int arr[] = { 0, 0};
	for(char c : s)
		c == '2' ? arr[0]+=1 : arr[1]+=1;	

	if(arr[0] > arr[1])
		cout << "2";
	else if(arr[1] > arr[0])
		cout << "e";
	else if (arr[0] == arr[1])
		cout << "yee";
}