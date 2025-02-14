#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	cout << "Gnomes:\n";
	while (n--)
	{

		vector<int> vec(3);
		cin >> vec[0] >> vec[1] >> vec[2];
		vector<int> sortVec = vec;
		vector<int> sortVec2 = vec;
		sort(sortVec.begin(), sortVec.end(), greater<int>());
		sort(sortVec2.begin(), sortVec2.end(), less<int>());

		bool b = false;
		for (int i = 0; i < 3; i++)
		{
			if ((vec[i] != sortVec[i]) && (vec[i] != sortVec2[i]))
			{
				b = true;
				break;
			}
		}

		cout << (b ? "Unordered" : "Ordered") << '\n';
	}
}