#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	unordered_map<string, string> umap;

	umap.insert({"SONGDO","HIGHSCHOOL"});
	umap.insert({"CODE","MASTER"});
	umap.insert({"2023","0611"});
	umap.insert({"ALGORITHM","CONTEST"});

	string s;

	cin >> s;

	cout << umap[s];

}