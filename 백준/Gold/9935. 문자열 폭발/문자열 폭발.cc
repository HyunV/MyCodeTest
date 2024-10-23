#include <iostream>
#include <string>

using namespace std;

/*
폭발하는 문자열이 주어진다.

모두 폭발하면 FRULA 출력

폭발 문자열 중복되는 문자가 없다. AABB 이런거 없는듯

프로세스

1. 문자열 for문을 돌린다.
2. 각 문자를 스택에 적재한다.
3. 문구가 완성되면 폭발문자 길이만큼 스택을 감소한다.
  3.1 ★ 추가 스택의 top이 폭발하는 문자의 끝자락과 일치하면 문자열을 비교한다.

폭발문자 횟수 cnt를 증가시킨다.
한 사이클을 돌면 폭발문자열이 없어질때까지 반복한다.

문자열 사이즈가 폭발문자열보다 작거나,
0이거나,
폭발문자열이 없다면

반복을 종료한다.

남은 문자열을 출력한다.

## 시간초과남
*/

int main()
{
	string s, c4;
	cin >> s;
	cin >> c4;	

	string answer = "";
	int sSize = s.size();
	int c4Size = c4.size();

	for (int i = 0; i < sSize; i++)
	{
		answer += s[i];

		//answer가 폭발길이만큼 존재하고 끝부분이 일치 시 비교해보기
		int answerSize = answer.size();
		if (answerSize >= c4Size && answer.back() == c4.back())
		{
			int startNum = answerSize - c4Size;
			bool check = true;
			for (int i = startNum; i < answerSize; i++)
			{
				if (answer[i] != c4[i - startNum])
				{
					check = false;
					break;
				}
			}

			//문자열 폭발
			if (check)
			{
				int num = c4Size;
				while (num--)
					answer.pop_back();
			}
		}
	}
	cout << (answer == "" ? "FRULA" : answer);
}