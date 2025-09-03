#include <iostream>

using namespace std;

int main()
{
	int t;
	string a, b;
	
	cin >> t;
	while(t--){
		cin >> a>> b;
		
		int size = a.size(); 
		bool check = false;
		for(int i = 0; i < size; ++i) {
			if(a[i] != b[i]) {
				cout << "ERROR" << '\n';
				check = true;
				break;
			}
		}

		if(!check) {
			cout << "OK" << '\n';
		}

	}
}