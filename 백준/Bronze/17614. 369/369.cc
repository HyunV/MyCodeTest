#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int answer = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        string s = to_string(i);
        for (char c : s) {
            if (c == '3' || c == '6' || c == '9') 
                answer++;
        }
    }
    cout << answer;
}