#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	deque<int> deq(n);
	
	for (int i = 0; i < n; i++) {
		deq[i] = i + 1;
	}

	// 1. 맨 앞의 카드 버리기
	// 2. 맨 앞의 카드 맨 뒤에 놓기
	while (1) {
		cout << deq.front() << ' ';
		deq.pop_front();

		if (deq.empty())
			break;

		deq.push_back(deq.front());
		deq.pop_front();
	}
}