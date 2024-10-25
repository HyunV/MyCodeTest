#include <iostream>

#include <string>
#include <vector>
#include <unordered_map>
#include <math.h>
#include <algorithm>

using namespace std;

unordered_map<string, int> uMap;
vector<pair<int, int>> mostOrder;
void comb(int n, int r, int start, string& order, string& s, int& orderNum)
{
    if (s.size() == r)
    {       
        if (!uMap.insert({ s, 1 }).second)
            uMap[s]++;

        orderNum = max(orderNum, uMap[s]);
        return;
    }

    for (int i = start; i < n; i++)
    {
        s += order[i];
        comb(n, r, i + 1, order, s, orderNum);
        s.pop_back();
    }
}

vector<string> solution(vector<string> orders, vector<int> course) {
    vector<string> answer;
    
    for (int i : course)
    {
        mostOrder.push_back({ i, 0 });
    }
    for (string s : orders)
    {        
        sort(s.begin(), s.end());
        int size = s.size();        
        int i = 0;
        for (int r : course)
        {
            string str = "";
            comb(size, r, 0, s, str, mostOrder[i].second);
            i++;
        }        
    }

    for (auto s : uMap)
    {
        int size = s.first.size();
        if (s.second > 1)
        {
            for (auto i : mostOrder)
            {
                if (i.first == size)
                {
                    if(i.second == s.second)
                        answer.push_back(s.first);
                }
            }            
        }            
    }

    sort(answer.begin(), answer.end());
    return answer;
}

int main()
{
    vector<string> orders = { "XYZ", "XWY", "WXA" };
    vector<int> course = { 2, 3, 4 };

    vector<string> answer = solution(orders, course);    

    for (string s : answer)
    {
        cout << s<< '\n';
    }
}