#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	unordered_map<string, string> umap;
	umap.insert({ "CU", "see you" });
	umap.insert({ ":-)", "I’m happy" });
	umap.insert({ ":-(", "I’m unhappy" });
	umap.insert({ ";-)", "wink" });
	umap.insert({ ":-P", "stick out my tongue" });
	umap.insert({ "(~.~)", "sleepy" });
	umap.insert({ "TA", "totally awesome" });
	umap.insert({ "CCC", "Canadian Computing Competition" });
	umap.insert({ "CUZ", "because" });
	umap.insert({ "TY", "thank-you" });
	umap.insert({ "YW", "you’re welcome" });
	umap.insert({ "TTYL", "talk to you later" });

	//for (auto u : umap)
	//{
	//	cout << u.first << " " << u.second;
	//	cout << '\n';
	//}
	string s = "";
	while (s != "TTYL")
	{		
		cin >> s;
		
		cout << (umap[s] != "" ? umap[s] : s) << '\n';
	}
}