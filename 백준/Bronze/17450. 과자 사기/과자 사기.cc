#include <iostream>
#include <math.h>
using namespace std;

int main() {
    char snack[] = { 'S', 'N', 'U' };
    char res;
    float efficiency[3];
    float maxNum;
    float price, weight;
    for (int i = 0; i < 3; i++) {
        cin >> price >> weight;
        price *= 10;
        weight *= 10;
        if (price >= 5000) 
            price -= 500;

        efficiency[i] = weight / price;
        maxNum = max(maxNum, efficiency[i]);
    }

    for (int i = 0; i < 3; i++) {
        if (maxNum == efficiency[i]) {
            res = snack[i];
            break;
        }
    }

    cout << res;
}