#include <iostream>

using namespace std;

int main()
{
	int n, w, h, l;
	cin >> n >> w>> h >> l;

	int answer = (w/l) * (h/l);
	cout << ((n< answer) ? n : answer);
}