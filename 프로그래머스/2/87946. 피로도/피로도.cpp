#include <string>
#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

int maxCnt = 0;
vector<bool> isVisited;
int g_size;

void dfs(int k, int cnt, vector<vector<int>>& dungeons)
{
    maxCnt = max(cnt, maxCnt);

    for (int i = 0; i < g_size; i++)
    {
        if (k >= dungeons[i][0] && isVisited[i] == false)
        {
            isVisited[i] = true;
            dfs(k - dungeons[i][1], cnt+1, dungeons);
            isVisited[i] = false;
        }
    }
}

int solution(int k, vector<vector<int>> dungeons) {

    g_size = dungeons.size();
    isVisited.resize(g_size);
    dfs(k, 0, dungeons);

    return maxCnt;
}

int main()
{
    int k = 80;
    vector<vector<int>> dungeons = {{80,20},{50,40},{30,10}};
    cout << solution(k, dungeons);
}