#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
	int n;
	unordered_map<string, char> umap;

	cin >> n;

	char c;
	string s;
	while (n--)	{
		cin >> c >> s;
		umap.insert({ s, c });
	}

	cin >> s;
	int size = s.size();

	string answer = "";
	for (int i = 0; i < size; i += 4) {
		string token = s.substr(i, 4);
		
		unordered_map<string, char>::iterator find = umap.find(token);

		if (find != umap.end()) {
			answer += find->second;
		}
		else {
			answer += "?";
		}
	}

	cout << answer;
}
