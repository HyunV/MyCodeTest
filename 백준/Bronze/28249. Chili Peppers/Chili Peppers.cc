#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
	int n;
	string s;
	unordered_map<string , int> umap;

	umap.insert({"Poblano", 1500});
	umap.insert({"Mirasol", 6000});
	umap.insert({"Serrano", 15500});
	umap.insert({"Cayenne", 40000});
	umap.insert({"Thai", 75000});
	umap.insert({"Habanero", 125000});

	int sum = 0;
	cin >> n;

	while(n--)
	{
		cin >> s;
		sum += umap[s];
	}
	cout << sum;
}