#include <string>
#include <vector>
#include <list>
#include <unordered_set>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    
    unordered_set<string> uSet;
    list<string> li;
    
    for(string &s : cities)
    {
        //소문자 변환
        for(char &c : s)
            c |= 32;
        
        uSet.insert(s).second ? answer+=5 :answer+=1;
        
        list<string>::iterator iter = li.begin();
        list<string>::iterator iterEnd = li.end();
        
        //중복된 값을 맨 뒤로 보내기 위해 존재한다면 제거
        for(; iter != iterEnd; iter++)
        {
            if(*iter == s)
            {
                li.erase(iter);
                break;
            }      
        }

        li.push_back(s);
        
        if(li.size() > cacheSize)
        {
            uSet.erase(li.front());
            li.pop_front();
        }   
    }
    
    return answer;
}