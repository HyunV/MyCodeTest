#include<iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<char, int> umap;
	umap.insert({'C', 0});
	umap.insert({'S', 0});
	umap.insert({'I', 0});
	umap.insert({'A', 0});

	int n;
	char c;
	cin >> n;

	while(n--)
	{
		cin >> c;
		umap[c]++;
	}

	cin >> c;
	cout << umap[c];
}