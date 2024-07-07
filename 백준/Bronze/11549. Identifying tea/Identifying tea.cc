#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n , m;
	cin >> n;
	
	int answer = 0;


	for(int i = 0; i<5; i++)
	{
		cin >> m;
		if(m == n)
			answer++;
	}
	
	cout << answer;
}