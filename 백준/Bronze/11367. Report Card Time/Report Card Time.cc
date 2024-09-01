#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	
	int n, m;
	string s;
	string grade;
	cin >> n;
	while (n--)
	{
		cin >> s;
		cin >> m;

		if (m >= 97 && m <= 100)
			grade = "A+";
		else if (m >= 90 && m <= 96)
			grade = "A";
		else if (m >= 87 && m <= 89)
			grade = "B+";
		else if (m >= 80 && m <= 86)
			grade = "B";
		else if (m >= 77 && m <= 79)
			grade = "C+";
		else if (m >= 70 && m <= 76)
			grade = "C";
		else if (m >= 67 && m <= 69)
			grade = "D+";
		else if (m >= 60 && m <= 66)
			grade = "D";
		else if (m >= 0 && m <= 59)
			grade = "F";

		cout << s << " " << grade << '\n';
	}

}