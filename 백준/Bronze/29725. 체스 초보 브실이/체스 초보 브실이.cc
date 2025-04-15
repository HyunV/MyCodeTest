#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<char, int> umap;
	//백 : 대문자, 흑 : 소문자
	//백 - 흑
	umap.insert({'P', 1});
	umap.insert({'p', -1});
	umap.insert({'N', 3});
	umap.insert({'n', -3});
	umap.insert({'B', 3});
	umap.insert({'b', -3});
	umap.insert({'R', 5});
	umap.insert({'r', -5});
	umap.insert({'Q', 9});
	umap.insert({'q', -9});


	const int n = 8;
	int sum = 0;
	char c;
	for(int i = 0; i<n; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cin >> c;
			sum += umap[c];
		}
	}
	cout << sum;
}