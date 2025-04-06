#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, s2;

	cin >> s >> s2;
	string s3 = "";
	int size = s.size();
	for (int i = 0; i < size; i++)
	{
		s3 += max(s[i], s2[i]);
	}
	cout << s3;
} 