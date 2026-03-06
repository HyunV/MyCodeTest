#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {
	string s;
	while (true) {
		cin >> s;
		if (s == "#")
			break;

		deque<char> deq;
		for (char c : s)
			deq.push_back(c);

		int size = deq.size();
		while (size--) {
			if (deq.front() == 'a' || deq.front() == 'e' || deq.front() == 'i' || deq.front() == 'o' || deq.front() == 'u') {
				break;
			}
			else {
				deq.push_back(deq.front());
				deq.pop_front();
			}
		}
		
		string answer = "";
		for (char c : deq)
			answer += c;

		cout << answer + "ay" << '\n';
	}
}