#include <string>
#include <unordered_map>
#include <unordered_set>
#define ARR_SIZE 11
#define DIGIT_SPACE 1000
using namespace std;

int solution(string dirs) {
    
    pair<int, int> start = {ARR_SIZE/2, ARR_SIZE/2};
    unordered_map<char, pair<int, int>> oper = 
    {{'U', {-1, 0}}, {'D', {1, 0}},
     {'R', {0, 1}}, {'L', {0, -1}}};
    
    unordered_set<int> uSet;
    
    for(char c : dirs)
    {
        int nxtX = start.first + oper[c].first;
        int nxtY = start.second + oper[c].second;
        
        if(nxtX < 0 || nxtY < 0 
           || nxtX > ARR_SIZE-1 || nxtY > ARR_SIZE-1)
            continue;
        
        int from = start.first * ARR_SIZE + start.second;
        int to = nxtX * ARR_SIZE + nxtY;
        uSet.insert({from*DIGIT_SPACE+to});
        uSet.insert({to*DIGIT_SPACE+from});
        start = {nxtX, nxtY};
    }
    
    return uSet.size()/2;
}