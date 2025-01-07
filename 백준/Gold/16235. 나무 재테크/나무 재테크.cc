#include <iostream>
#include <vector>
#include <deque>
using namespace std;

struct Tree {
    int age;
};

int N, M, K;
int A[10][10]; // 겨울에 추가되는 양분
int nutrients[10][10]; // 현재 땅의 양분
deque<int> trees[10][10]; // 각 칸의 나무들

// 8방향 이동
int dx[8] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int dy[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void spring_and_summer() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int dead_nutrients = 0;
            deque<int> alive_trees;

            for (int age : trees[i][j]) {
                if (nutrients[i][j] >= age) {
                    nutrients[i][j] -= age; // 양분 먹음
                    alive_trees.push_back(age + 1); // 나무 성장
                }
                else {
                    dead_nutrients += age / 2; // 죽은 나무 처리
                }
            }
            trees[i][j] = alive_trees; // 살아남은 나무 갱신
            nutrients[i][j] += dead_nutrients; // 죽은 나무 양분 추가
        }
    }
}

void autumn() {
    vector<pair<int, int>> new_trees;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int age : trees[i][j]) {
                if (age % 5 == 0) { // 번식 조건
                    for (int d = 0; d < 8; d++) {
                        int nx = i + dx[d];
                        int ny = j + dy[d];
                        if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
                            trees[nx][ny].push_front(1); // 번식된 나무 추가
                        }
                    }
                }
            }
        }
    }
}

void winter() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            nutrients[i][j] += A[i][j]; // 겨울 양분 추가
        }
    }
}

int main() {
    cin >> N >> M >> K;

    // 겨울에 추가되는 양분 입력
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
            nutrients[i][j] = 5; // 초기 양분
        }
    }

    // 나무 정보 입력
    for (int i = 0; i < M; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        trees[x - 1][y - 1].push_back(z);
    }

    // K년 동안 시뮬레이션
    for (int year = 0; year < K; year++) {
        spring_and_summer();
        autumn();
        winter();
    }

    // 결과 계산
    int total_trees = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            total_trees += trees[i][j].size();
        }
    }

    cout << total_trees << endl;

    return 0;
}