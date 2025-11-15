#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cin.tie(0); 
    ios::sync_with_stdio(0);    

    string s; 
    cin >> s;    
    while (s.size() % 3 != 0) {
        s = '0' + s;
    }
    
    for (int i = 0; i < s.size(); i += 3) {
        int num = (s[i] - '0') * 4 + (s[i + 1] - '0') * 2 + (s[i + 2] - '0') * 1;
        cout << num;
    }    
}