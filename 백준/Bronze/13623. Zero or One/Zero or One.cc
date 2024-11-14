#include<iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	vector<char> vec1;
	vector<char> vec2;
	char answer;


	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		if (n)
			vec1.push_back('A' + i);
		else
			vec2.push_back('A' + i);
	}

	if (vec1.size() == 1)
		cout << vec1[0];
	else if (vec2.size() == 1)
		cout << vec2[0];
	else
		cout << '*';


}