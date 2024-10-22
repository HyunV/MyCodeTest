#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int DFS(int start, vector<int>& card, vector<bool>& isVisited, int depth)
{
    if (isVisited[start-1])
        return depth;

    isVisited[start-1] = true;
    return DFS(card[start-1], card, isVisited, depth + 1);
}

int solution(vector<int> cards) {
    int answer = 0;

    int size = cards.size();

    vector<bool> isVisited(size, false);
    vector<int> answerVec;
    for (int i = 0; i < size; i++)
    {
        int num = DFS(cards[i], cards, isVisited, 0);
        if (num)
            answerVec.push_back(num);
    }

    sort(answerVec.begin(), answerVec.end(), greater<int>());

    if (answerVec.size() < 2)
        answer = 0;
    else
        answer = answerVec[0] * answerVec[1];

    return answer;
}