#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

const int arr[3] = { 0, 1, 2 };

//i가 곡괭이, j가 광석
const int chart[3][3] = { {1, 1, 1}, {5,1,1}, {25,5,1} };

struct group
{
    int mineralCost;
    vector<int> mineralList;
};

bool compareDESC(group g1, group g2)
{
    return g1.mineralCost > g2.mineralCost;
}

int solution(vector<int> picks, vector<string> minerals) {
    int answer = 0;

    int pickCount = 0;
    for (int i : picks)
        pickCount += i;

    vector<group> mineralGroup;

    int sum = 0;
    vector<int> mineralCode;
    for (string s : minerals)
    {
        //곡괭이 최대 채굴을 초과하면
        if (mineralGroup.size() == pickCount)
            break;

        if (s == "diamond")
        {
            mineralCode.push_back(arr[0]);
            sum += 25;
        }
        else if (s == "iron")
        {
            mineralCode.push_back(arr[1]);
            sum += 5;
        }
        else if (s == "stone")
        {
            mineralCode.push_back(arr[2]);
            sum += 1;
        }
        if (mineralCode.size() == 5)
        {
            group g;
            g.mineralCost = sum;
            g.mineralList = mineralCode;

            sum = 0;
            mineralCode.clear();
            mineralGroup.push_back(g);
        }
    }
    if (mineralGroup.size() < pickCount)
    {
        group g;
        g.mineralCost = sum;
        g.mineralList = mineralCode;
        mineralGroup.push_back(g);
    }
    sort(mineralGroup.begin(), mineralGroup.end(), compareDESC);

    queue<int> q;
    for (int i = 0; i<3; i++)
    {
        while(picks[i])
        {
            q.push(arr[i]);
            picks[i]--;
        }
    }

    for (int i = 0; i < mineralGroup.size(); i++)
    {
        int pick = q.front();
        q.pop();

        vector<int> mineralCode = mineralGroup[i].mineralList;

        for (int j : mineralCode)
            answer += chart[pick][j];
    }
    return answer;
}

//int main()
//{
//    vector<int> picks = { 0, 1, 1 };
//    vector<string> minerals = { "diamond", "diamond", "diamond", "diamond", "diamond", "iron", "iron", "iron", "iron", "iron", "diamond" };
//
//    cout << solution(picks, minerals);
//}