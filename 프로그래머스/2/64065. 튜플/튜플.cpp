#include <iostream>

#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> arr[100001];

vector<int> solution(string s) {
    vector<int> answer;

    int size = s.size()-2;
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        if (s[i] == '{')
        {
            count++;
            vector<int> vec;
            i++;
            string num = "";
            while (true)
            {
                if (s[i] == '}')
                {
                    vec.push_back(stoi(num));
                    break;
                }

                if (s[i] == ',')
                {
                    vec.push_back(stoi(num));
                    num = "";
                    i++;
                    continue;
                }
                num += s[i];
                i++;
            }

            arr[vec.size()] = vec;
        }
    }

    //정답
    set<int> set;
    for (int i = 1; i <= count; i++)
        for (int num : arr[i])
            if (set.insert(num).second)
                answer.push_back(num);

    return answer;
}

int main()
{
    string s = "{{2},{2,1},{2,1,3},{2,1,3,4}}";
    vector<int> answer = solution(s);
    //for (int i : answer)
    //    cout << i << ' ';
}