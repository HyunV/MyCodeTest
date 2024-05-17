#include <iostream>
#include <map>
using namespace std;

int main()
{
	int cnt = 10;
	int num, sum = 0;
	int answer = 0, maxNum =0;
	map<int, int> map;

	while (cnt--)
	{
		cin >> num;
		sum += num;
		if (!(map.insert({ num, 1 }).second))
			map[num]++;
	}

	for (auto m : map)
		if (maxNum < m.second)
		{
			maxNum = m.second;
			answer = m.first;
		}
			
	cout << sum / 10 << '\n' << answer;

}