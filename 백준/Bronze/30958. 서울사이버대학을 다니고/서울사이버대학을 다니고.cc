#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    
    string s;
    int alpha[26] = { 0 };
    int maxNum = 0;

    getline(cin, s);
    getline(cin, s);

    for (char c : s) {
        if (c == ' ')
            continue;

        alpha[c - 'a']++;
        maxNum = max(maxNum, alpha[c - 'a']);
    }
    cout << maxNum;
}