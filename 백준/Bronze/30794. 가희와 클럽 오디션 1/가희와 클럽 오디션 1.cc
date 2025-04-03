#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<string, int> umap;
	umap.insert({"miss", 0});
	umap.insert({"bad", 200});
	umap.insert({"cool", 400});
	umap.insert({"great", 600});
	umap.insert({"perfect", 1000});

	int n;
	string s;

	cin >> n >> s;

	cout << n * umap[s];
}