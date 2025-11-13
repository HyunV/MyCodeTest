#include <iostream>
using namespace std;
int main() {
   
    double n, m, cnt;
    cin >> n;
    cnt = n;

    while (true)
    {
        cin >> m;
        if (m == 999)
            break;

        printf("%.2f\n", m - cnt);        
        cnt = m;
    }
}
