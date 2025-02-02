#include <iostream>
#include <stack>
#include <vector>
using namespace std;

enum class Eoper {
	NONE,
	PUSH,
	POP,
	SIZE,
	ISEMPTY,
	TOP
};

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> stk;
	vector<int> vec;
	int n, oper, m;

	cin >> n;
	while (n--)
	{
		cin >> oper;

		switch ((Eoper)oper)
		{
		case Eoper::PUSH:
			cin >> m;
			stk.push(m);
			break;
		case Eoper::POP:

			vec.push_back(stk.empty() ? -1 : (int)stk.top());
			
			if(!stk.empty())
				stk.pop();
			break;
		case Eoper::SIZE:
			vec.push_back(stk.size());;
			break;
		case Eoper::ISEMPTY:
			vec.push_back((int)stk.empty());
			break;
		case Eoper::TOP:
			vec.push_back(stk.empty() ? -1 : stk.top());
			break;
		}
	}

	for (int i : vec)
		cout << i << '\n';
}