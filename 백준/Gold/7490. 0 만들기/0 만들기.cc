#include <iostream>
#include <vector>
#include <string>
using namespace std;

const char oper[3] = {' ', '+', '-'};
vector<char> operInput;

//중복순열
void duplePerm(int cnt, int maxOper)
{
	if (cnt == maxOper)
	{
		//연산해보기
		vector<char> problem((maxOper+1)*2-1);
			
		for (int i = 0; i < problem.size(); i += 2)
			problem[i] = ((i / 2) + 1) +'0';
			
		for (int i = 1; i < problem.size(); i += 2)
			problem[i] = operInput[i/2];

		//수식 계산하기
		int sum = 0;

		string s = "";
		char nextOper = '+';
		for (char c : problem)
		{
			if (c == ' ')
				continue;

			if (c == '+' || c == '-')
			{
				switch (nextOper)
				{
				case '+':
					sum += stoi(s);
					break;
				case '-':
					sum -= stoi(s);
					break;
				}
				nextOper = c;
				s = "";
			}
			else
				s += c;
		}

		nextOper == '+' ? sum += stoi(s) : sum -= stoi(s);

		if (!sum)
		{
			for (char c : problem)
				cout << c;

			cout << '\n';
		}
		
		return;
	}

	for (int i = 0; i < 3; i++)
	{
		operInput.push_back(oper[i]);
		duplePerm(cnt + 1, maxOper);
		operInput.pop_back();
	}

}

int main()
{
	int n, m;

	cin >> n;
	while (n--)
	{
		cin >> m;
		operInput.resize(0);
		duplePerm(0, m-1); //숫자가 m개면 연산자는 m-1개
		cout << '\n';
	}
}