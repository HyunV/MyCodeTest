#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

int main()
{
	unordered_set<string> uSet;
	int N, M;
	cin >> N >> M;

	string s;
	while (N--)
	{
		cin >> s;
		uSet.insert(s);
	}

	int answer = 0;
	while (M--)
	{
		cin >> s;
		if (uSet.find(s) != uSet.end())
			answer++;
	}

	cout << answer;
}