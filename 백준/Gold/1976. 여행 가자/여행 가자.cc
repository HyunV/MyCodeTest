#include <iostream>
#include <utility>
using namespace std;

/*
- 입력
	1. 도시의 수 N (~200)
	2. 여행 계획하는 도시의 수 M (~1000)
	3. N개만큼 도시 연결된 정보 입력받기
	4. 여행 계획 동선 입력받기

- 풀이
	인접행렬 써도 될거같음
	dfs 써서 방문해보기

*/

int N, M;

bool adjMatrix[201][201];
int course[1001];

bool dfs(int start, int end, bool isVisited[])
{
	if (start == end)
		return true;
	
	isVisited[start] = true;

	for (int i = 1; i <= N; i++)
		if (adjMatrix[start][i] && !isVisited[i])
			if (dfs(i, end, isVisited))
				return true;

	return false;
}

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= N; j++)
			cin >> adjMatrix[i][j];

	for (int i = 0; i < M; i++)
		cin >> course[i];
	
	bool answer = true;
	for (int i = 1; i < M; i++)
	{
		bool isVisited[201];
		fill(isVisited, isVisited + 201, false);

		answer = dfs(course[i - 1], course[i], isVisited);

		if (!answer)
			break;
	}
	cout << (answer ? "YES" : "NO");
}