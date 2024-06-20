#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>

#include <iostream>

using namespace std;
/*
문제 조건

이름 중복 없음, 소문자로만 시간순 정렬 아님

00:00 ~23:59 까지 시간
*과제가 끝나는 시간과 새로운 과제가 시작되는 시간이 같으면 진행중인 과제는 끝난걸로 침

*/

bool compare(vector<string> o1, vector<string> o2)
{
    //시간대별 오름차순 정렬
    return o1[1] < o2[1];
}

void updateTime(string& time)
{
    time[4]++;
    if (time[4] > '9') //1분
    {
        time[4] = '0';
        time[3]++;
        
        if (time[3] > '5') //10분대
        {
            time[3] = '0';
            time[1]++;
            if (time[1] > '9')
            {
                time[1] = '0';
                time[0]++;
            }

            string times = time.substr(0, 2);

            if (times == "24")
            {
                time[0] = '0';
                time[1] = '0';
            }
        }
    }
    //cout << time << '\n';
}

vector<string> solution(vector<vector<string>> plans) {
    vector<string> answer;

    sort(plans.begin(), plans.end(), compare);

    string currentTime = plans[0][1];
    stack<pair<string, int>> stack;

    int idx = 0;

    //과목명, 과제 수행시간 추가
    stack.push({ plans[idx][0], stoi(plans[idx][2])});

    idx++;

    while (1)
    {
        //과제 시간에 잉여 시간대가 생기면 스택이 비어버리게 되므로 다음 과제 시간대로 넘어간다. 
        bool isBreak = false;
        if (stack.empty())
        {
            if (idx < plans.size())
            {
                stack.push({ plans[idx][0], stoi(plans[idx][2]) });
                currentTime = plans[idx][1];
                idx++;
            }
            else
                break;
        }

        updateTime(currentTime);

        //과제 수행이 끝나면 스택에서 제거한다.
        if (!(--(stack.top().second)))
        {
            answer.push_back(stack.top().first);
            stack.pop();
        }

        //시간이 겹치는 과제, 새로운 과제가 생기면 스택에 추가한다.
        if (idx < plans.size() && plans[idx][1] == currentTime)
        {
            stack.push({ plans[idx][0], stoi(plans[idx][2]) });
            idx++;
        }
    }

    return answer;
}

int main()
{
    vector<vector<string>> plans =
    { {"korean", "11:40", "10"},{"english", "12:10", "20"}};

    vector<string> answer = solution(plans);
}