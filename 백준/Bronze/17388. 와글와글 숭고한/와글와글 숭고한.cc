#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main()
{
	const string univ[3] = { "Soongsil", "Korea", "Hanyang" };
	map<int, string> map;
	int n;
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cin >> n;
		map.insert({ n, univ[i] });
		sum += n;
	}

	cout << (sum < 100 ? map.begin()->second : "OK");


}