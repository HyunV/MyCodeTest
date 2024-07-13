#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int tc = 1; tc<=n; tc++)
	{		
		int cnt;
		cin >> cnt;
		vector<int> vec(cnt);
		
		while (cnt--)
			cin >> vec[cnt];
		
		sort(vec.begin(), vec.end());

		int maxNum = *(vec.end()-1), minNum = *(vec.begin()), largeGap = 0;

		for (int i = 0; i < vec.size() - 1; i++)
			if (vec[i + 1] - vec[i] > largeGap)
				largeGap = vec[i + 1] - vec[i];

		cout << "Class " << tc << '\n';
		cout << "Max " << maxNum << ", " 
			<< "Min " << minNum << ", " 
			<< "Largest gap " << largeGap << '\n';
	}
}