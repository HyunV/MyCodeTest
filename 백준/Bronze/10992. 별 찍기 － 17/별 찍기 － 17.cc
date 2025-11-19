#include<iostream>
using namespace std;

int main()
{
   int n;
   cin >> n;

   for (int i = 1; i < n; i++) { 
      for (int j = 1; j <= n - i; j++) {
         cout << " ";
      }
      cout << "*";
      for (int k = 0; k < 2 * (i - 1) - 1; k++) {
         cout << " ";
      }
      if (i > 1) 
         cout << "*";

      cout << '\n';
   }
   for (int i = 1; i <= 2 * n - 1; i++) {
           cout << "*";
   }
}