#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
/*

회원 대상 1가지 상품 할인, 하루에 하나만 구매 가능

따라서 원하는 제품과 수량이 할인날과 10일 연속으로 일치하는 경우에 회원가입할예정

이중 for문으로 될거같은데
*/
bool checkFood(unordered_map<string, int>& want, unordered_map<string, int>& discount)
{
    for(auto myWant : want)
    {
        if(myWant.second != discount[myWant.first])
            return false;
    }
    
    return true;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    unordered_map<string, int> umap;
    
    int size = want.size();
    for(int i = 0; i<size; i++)
        umap.insert({want[i], number[i]});
    
    size = discount.size();
    string startFood;
    for(int i = 0; i<size; i++)
    {
        if(i+10 > size)
            break;
        
        startFood = discount[i];
        unordered_map<string, int> shopMap;
        for(int j =i; j<i+10; j++)
            if(!shopMap.insert({discount[j], 1}).second)
                shopMap[discount[j]]++;            
        
        if(checkFood(umap, shopMap))
            answer++;
        
    }
    
    return answer;
}