#include <iostream>

using namespace std;

int main()
{
	int T;
	int V, E;
	cin >> T;

	//꼭짓점의 수  - 모서리의 수 + 면의 수 = 2;

	/* V - E + N = 2
	   N = 2 - V + E;
	*/
	while(T--)
	{
		cin >> V >> E;

		cout << 2 - V + E << '\n';
	}	
}