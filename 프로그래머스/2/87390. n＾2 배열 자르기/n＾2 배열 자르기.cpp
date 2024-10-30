#include <string>
#include <vector>

using namespace std;
/*
n은 10,000,000

*/

vector<int> solution(int n, long long left, long long right) {    
    
    vector<int> answer(right-left+1);
    //처음부터 1차원배열로 쓴다
    
    int row, col, num;    
    for(long long i =left; i<=right; i++)
    {
        row = i / n;
        col = i % n;        
        num = (row > col) ? row : col;
        
        answer[i-left] = num+1;
    }
        
    return answer;
}