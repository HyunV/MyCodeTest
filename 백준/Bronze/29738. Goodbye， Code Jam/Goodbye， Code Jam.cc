#include <iostream>

using namespace std;

int main()
{
       int n, m;
       cin >> n;
       for (int i = 1; i <= n; i++)
       {
           cin >> m;
           if (m <= 25)
               cout << "Case #" << i << ": World Finals\n";
           else if (m <= 1000)
               cout << "Case #" << i << ": Round 3\n";
           else if (m <= 4500)
               cout << "Case #" << i << ": Round 2\n";
           else
               cout << "Case #" << i << ": Round 1\n";
        }
}