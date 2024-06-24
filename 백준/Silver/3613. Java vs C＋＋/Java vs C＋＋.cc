#include <iostream>
#include <string>
using namespace std;

/*
Java 변수 규칙 : 첫 글자 소문자 다음 단어부터는 대문자로 쓴다.
C 변수 규칙 : 대문자 가 _소문자로 바뀐다.

이 조건을 만족하지 않는다면 error를 출력한다.

- 에러 기준
	1. 맨 첫글자가 소문자가 아니면 에러
	2. 맨 뒤 문자가 _이면 에러
	3. _다음 소문자가 아니라면 에러
	4. 대문자와 _가 섞여있으면 에러

*/
int checkStr(string& s)
{
	if (s == "")
		return -1;

	//error : 0, java : 1, c : 2

	int size = s.size() - 1;
	int underBar = 0, bigChar = 0;

	for (int i = 0; i <= size; i++)
	{
		//1. 첫 문자가 소문자가 아닐 때 에러
		if (i == 0 && !(s[0] >= 'a' && s[0] <= 'z'))
			return 0;

		if (s[i] == '_')
		{
			//2. 맨 마지막에 언더바가 있으면 에러
			if (i == size)
				return 0;
			else if (!(s[i + 1] >= 'a' && s[i + 1] <= 'z')) //언더바 다음 소문자가 아니라면 에러
				return 0;

			underBar++;
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
			bigChar++;

		//언더바와 대문자가 공존하면 안됨
		if (underBar && bigChar)
			return 0;
	}

	//c++타입
	if (underBar)
		return 2;
	else if (bigChar)
		return 1;

	if (underBar == 0 && bigChar == 0)
		return -1;
}

int main()
{
	string s;

	cin >> s;

	int strType = checkStr(s);

	int size = s.size();

	string answer = "";

	switch (strType)
	{
	//잘못된 문자
	case -1:
		answer = s;
		break;

	case 0:
		cout << "Error!";
		break;

	//java 언어 -> c++ 대문자 -> 언더바 +소문자
	case 1:

		for (int i = 0; i < size; i++)
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				answer += '_';
				answer += s[i] ^ 32;
			}				
			else
				answer += s[i];
		}

		break;
	//c++ -> java
	case 2:

		for (int i = 0; i < size; i++)
		{
			if (s[i] == '_')
			{
				answer += s[i+1] ^ 32;
				i++;
			}			
			else
				answer += s[i];
		}

		break;
	}

	if (strType)
		cout << answer;

}