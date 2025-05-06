#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	cout << to_string(n + m).size();
}