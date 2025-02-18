#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
	stack<int> stack;

	int n, m;
	cin >> n;

	vector<int> vec(n);

	for(int i = 0; i<n; i++)
		cin >> vec[i];

	int idx = 1;
	for (int i : vec)
	{
		if (i != idx)
		{
			while (!stack.empty())
			{
				if (stack.top() == idx)
				{
					idx++;
					stack.pop();
				}
				else
					break;
			}
			stack.push(i);
		}
		else
			idx++;
	}

	while (!stack.empty())
	{
		if (stack.top() == idx)
		{
			idx++;
			stack.pop();
		}
		else
			break;
	}

	cout << (stack.empty() ? "Nice" : "Sad");
}