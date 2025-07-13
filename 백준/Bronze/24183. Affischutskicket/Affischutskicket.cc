#include <iostream>
using namespace std;
int main()
{
  double n, m, k, a, b, c;
  cin >> n >>m >> k;
  a = 229 * 324 * n * 2;
  b = 297 * 420 * m * 2;
  c = 210 * 297 * k;
  
  printf("%.6f", (a + b + c) * 0.000001);
}