#include <iostream>
#include <string>
#include <vector>
using namespace std;

void updateTime(vector<int>& vec)
{
	vec[2]++;
	if (vec[2] == 60)
	{
		vec[2] = 0;
		vec[1]++;
		if (vec[1] == 60)
		{
			vec[1] = 0;
			vec[0]++;
			if (vec[0] == 24)
				vec[0] = 0;
		}
	}
}

int main()
{
	string currentTime;
	string missionTime;

	cin >> currentTime >> missionTime;

	vector<int> v1;
	v1.push_back(stoi(currentTime.substr(0, 2)));
	v1.push_back(stoi(currentTime.substr(3, 5)));
	v1.push_back(stoi(currentTime.substr(6, 8)));

	vector<int> v2;
	v2.push_back(stoi(missionTime.substr(0, 2)));
	v2.push_back(stoi(missionTime.substr(3, 5)));
	v2.push_back(stoi(missionTime.substr(6, 8)));

	vector<int> v3(3);

	while (true)
	{
		updateTime(v3);
		updateTime(v1);

		if (v1[0] == v2[0] 
			&& v1[1] == v2[1] 
			&& v1[2] == v2[2])
			break;
	}

	string answer = "";
	for (int i = 0; i < 3; i++)
	{
		string s = to_string(v3[i]);
		if (s.size() == 1)
			s.insert(s.begin(), '0');

		answer += s;
		answer += ':';
	}

	cout << answer.substr(0, answer.size() - 1);
}