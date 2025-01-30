#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int n, m;

	unordered_map<int, bool> uMap;

	cin >> n >> m;
	int num;
	while (n--)
	{
		cin >> num;
		uMap.insert({ num, false });
	}

	while (m--)
	{
		cin >> num;
		if (uMap.insert({ num, false }).second == false)
			uMap[num] = true;
	}

	int answer = 0;
	for (auto& m : uMap)
	{
		if(m.second == false)
			answer++;
	}
	cout << answer;
}