#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

int solution(vector<int> elements) {
    
    unordered_set<int> sets;
    
    int size = elements.size();
    
    for(int k = 0; k<size; k++)
    {        
        //1칸씩, 2칸씩, 3칸씩
        for(int i = 1; i<=size; i++)
        {
            int sum = 0;
            for(int j = 0; j<i; j++)
            {
                sum += elements[(k+j) % size];
            }
            sets.insert(sum);
        }
    }
    return sets.size();
}