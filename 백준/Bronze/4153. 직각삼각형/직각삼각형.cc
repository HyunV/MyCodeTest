#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	while (1)
	{
		vector<int> v(3);
		for (int i = 0; i < 3; i++)
			cin >> v[i];

		if (!v[0] && !v[1] && !v[2])
			break;

		sort(v.begin(), v.end());

		bool answer = ((v[0] * v[0]) + (v[1] * v[1]) == (v[2] * v[2]));
		
		cout << (answer ? "right" : "wrong") << '\n';
	}
}