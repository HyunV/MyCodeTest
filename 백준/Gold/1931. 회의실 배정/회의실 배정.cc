#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);

    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
    }

    // 종료 시간을 기준으로 오름차순 정렬 (종료 시간이 같으면 시작 시간 기준 정렬)
    sort(vec.begin(), vec.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) return a.first < b.first;
        return a.second < b.second;
    });

    int answer = 0;
    int lastEndTime = 0; // 현재 회의실에서 가장 최근에 끝난 회의의 종료 시간

    for (int i = 0; i < n; i++) {
        if (lastEndTime <= vec[i].first) { // 이전 회의 종료 시간보다 새로운 회의 시작 시간이 같거나 크면 배정 가능
            lastEndTime = vec[i].second;
            answer++;
        }
    }

    cout << answer;
}