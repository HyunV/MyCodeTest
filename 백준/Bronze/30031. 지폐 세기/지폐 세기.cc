#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	unordered_map<int, int> umap;
	
	umap.insert({136, 1000});
	umap.insert({142, 5000});
	umap.insert({148, 10000});
	umap.insert({154, 50000});

	int n, m, k;
	cin >> n;

	int sum = 0;
	while(n--)
	{
		cin >> m >> k;
		sum += umap[m];
	}
	cout << sum;
}