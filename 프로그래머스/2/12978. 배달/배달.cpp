#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

void dijkstra(int startNode, vector<vector<pair<int, int>>>& graph, vector<int>& dist) 
{
    int answer = 0;

    int size = graph.size();

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    dist[startNode] = 0;
    pq.push({ 0, startNode });

    while (!pq.empty())
    {
        int curDist = pq.top().first;
        int curNode = pq.top().second;

        pq.pop();

        //현재 거리가 더 멀다면 패스
        if (curDist > dist[curNode])
            continue;

        for (auto edge : graph[curNode])
        {
            int nextNode = edge.first;
            int nextWeight = edge.second;

            if (dist[curNode] + nextWeight < dist[nextNode])
            {
                dist[nextNode] = dist[curNode] + nextWeight;
                pq.push({ dist[nextNode], nextNode });
            }
        }
    }
}

int solution(int N, vector<vector<int>>road, int K) {
    int answer = 0;
    //노드의 개수 N, road 에 u, v, w , 기준 거리 K

    vector<vector<pair<int, int>>> graph(N+1);

    //그래프에 간선 입력받기

    for (int i = 0; i<road.size(); i++)
    {
        graph[road[i][0]].push_back({ road[i][1], road[i][2] });
        graph[road[i][1]].push_back({ road[i][0], road[i][2] });
    }

    int startNode = 1;

    vector<int> distance(N+1, 2147483647);

    dijkstra(startNode, graph, distance);
    for (int i = 1; i <= N; i++)
    {
        if (distance[i] <= K)
            answer++;
    }

    return answer;
}