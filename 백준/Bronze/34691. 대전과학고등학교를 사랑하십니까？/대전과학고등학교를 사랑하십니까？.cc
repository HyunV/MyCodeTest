#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
	unordered_map<string, string> umap;

	umap.insert({ "animal", "Panthera tigris" });
	umap.insert({ "flower", "Forsythia koreana" });
	umap.insert({ "tree", "Pinus densiflora" });

	string s;
	while (1) {
		getline(cin, s);
		if (s == "end")
			break;

		cout << umap[s] << '\n';
	}
}