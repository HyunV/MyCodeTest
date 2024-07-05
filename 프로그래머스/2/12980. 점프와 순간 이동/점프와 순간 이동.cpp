#include <iostream>
#include <vector>
using namespace std;
/*
DP같음
1일때 1 2일때 /2해보면서 계산해보기
*/

int solution(int n)
{
    int ans = 0;
    
    while(n > 0)
    {
        if(n % 2 == 1)
            ans++;
        
        n /= 2;
    }
    

    return ans;
}