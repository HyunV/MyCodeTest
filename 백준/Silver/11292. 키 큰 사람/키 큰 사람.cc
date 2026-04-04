#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n;
	
	while (1) {
		cin >> n;
		if (n == 0)
			break;
		vector<string> vec;
		float maxTall = 0;
		while (n--) {
			string name; 
			float tall;

			cin >> name >> tall;
			if (tall > maxTall) {
				vec.clear();
				vec.push_back(name);
				maxTall = tall;
			}
			else if (tall == maxTall) {
				vec.push_back(name);
			}
		}
		for (string& s : vec) {
			cout << s << ' ';
		}
		cout << '\n';
	}
}