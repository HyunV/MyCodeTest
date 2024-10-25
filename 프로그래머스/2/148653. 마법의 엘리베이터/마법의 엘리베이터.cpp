#include <string>
#include <vector>
#include <iostream>
/*
1. 0층이 가장 아래
2. 층이 음수가 되면 작동하지 않음

최소한으로 이동하라는 점에서 그리디인거같기도하고
DP같기도 하고

그리디로 해보기
이동범위는 +-10^c

- 풀이
1의자리부터 판단
5 미만이면 빼주기
5 이상이면 더해주기 앞자리 1 더해주기

5이면 그냥 5번
*/
using namespace std;

int solution(int storey) {
    int answer = 0;

    while (storey > 0) {
        int num = storey % 10;  // 현재 자리의 숫자
        storey /= 10;            // 다음 자릿수로 이동

        if (num < 5) {
            answer += num;       // 5 미만일 때는 그대로 더함
        }
        else if (num > 5) {
            answer += 10 - num;  // 5 초과일 때는 올림 처리
            storey++;            // 다음 자리로 올림
        }
        else {  // num == 5일 때
            answer += num;         // 5일 때는 다음 자리와 상관없이 항상 올림
            if (storey % 10 >= 5)
                storey++;
        }
    }

    return answer;
}