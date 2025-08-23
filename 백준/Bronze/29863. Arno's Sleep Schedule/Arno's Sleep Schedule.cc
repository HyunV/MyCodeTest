#include <iostream>

using namespace std;

int main()
{
   int n, m;
   cin >> n >> m;

   int sum;

   if(n > 10)
      sum = (24-n)+m;
   else
      sum = m - n;
   
   cout << sum;
}