#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s, s2;
	int sum = 1; // 총총
	unordered_map<string, bool> umap;
	umap.insert({ "ChongChong", true });
	while (n--) {
		cin >> s >> s2;
		umap.insert({ s, false });
		umap.insert({ s2, false });
		if (umap[s] && !umap[s2]) {
			umap[s2] = true;
			sum++;
		}
		else if (umap[s2] && !umap[s]) {
			umap[s] = true;
			sum++;
		}
	}
	cout << sum;
}