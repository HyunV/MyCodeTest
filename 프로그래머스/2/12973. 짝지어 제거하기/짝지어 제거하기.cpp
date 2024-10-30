#include<string>
#include <stack>

using namespace std;

int solution(string s)
{
    stack<char> stack;
    for(char c : s)
        (!stack.empty() && stack.top() == c) ? stack.pop() : stack.push(c);           

    return stack.empty() ? 1 : 0;
}