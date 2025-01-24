#include <iostream>
#include <map>
#include <vector>
using namespace std;

/*
Xi > Xj를 만족하는 서로 다른 X의 개수와 같아야한다?
 -> Xi보다 작은 값들의 원소의 개수가 압축값이다.

 -시간복잡도
 N이 1~100만 사이

 */

int main()
{
	int n;
	cin >> n;
	vector<int> vec(n);
	map<int, int, greater<int>> map;

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
		map[vec[i]]++;
	}

	int idx = 0;
	int mapSize = map.size();
	for (auto& m : map)
		m.second = mapSize-1-idx++;

	for (auto& v : vec)
		cout << map[v] << ' ';
}