#include <iostream>

using namespace std;

int main()
{
   int n, m, a, b;
   //N명의 팀
   //보유중인 M개 의자
   //구매해야 하는 의자
   //운송비
   cin >> n >> m >> a >> b;

   int cost = 0;
   if ((n * 3) - m > 0)
   {
      cost += (n * 3 - m) * a;
      cost += b;
   }

   cout << cost;
}