#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
	int n;

	unordered_map<string, string> umap;

	umap.insert({"Algorithm","204"});
	umap.insert({"DataAnalysis","207"});
	umap.insert({"ArtificialIntelligence","302"});
	umap.insert({"CyberSecurity","B101"});
	umap.insert({"Network","303"});
	umap.insert({"Startup","501"});
	umap.insert({"TestStrategy","105"});
	cin >> n;

	
	while(n--)
	{
		string s;
		cin >> s;

		cout << umap[s] << '\n';
	}
	
}