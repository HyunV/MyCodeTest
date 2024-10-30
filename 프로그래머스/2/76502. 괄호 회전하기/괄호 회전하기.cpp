#include <string>
#include <vector>
#include <deque>
#include <stack>

using namespace std;

bool CheckStr(deque<char>& deq)
{
    if(deq.size() % 2 == 1)
        return false;
    
    stack<char> stack;
    
    for(char c : deq)
    {
        if(stack.empty())
        {
            if(c == ']' || c== ')' || c== '}')
                return false;
            
            stack.push(c);
        }
        else
        {
            if(stack.top() == '[' && c == ']')
                stack.pop();
            else if(stack.top() == '(' && c == ')')
                stack.pop();
            else if (stack.top() == '{' && c == '}')
                stack.pop();
            else
                stack.push(c);
        }
    }        
    return stack.empty() ? true : false;
}

int solution(string s) {
    
    int answer = 0;
    
    deque<char> deq;
        
    for(char c : s)
        deq.push_back(c);
    
    int size = s.size();
    if(CheckStr(deq))
        answer++;
        
    for(int i = 1; i<size; i++)
    {        
        deq.push_back(deq.front());
        deq.pop_front();
        
        if(CheckStr(deq))
            answer++;        
    }
        
    return answer;
}