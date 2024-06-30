#include <iostream>

#include <string>
#include <vector>

using namespace std;

vector<int> input;
const vector<int> togle = { 1, -1 };
int N;
int answer = 0;

//중복순열

void duplePerm(int dep, vector<int>& numbers, int target)
{
    if (dep == N)
    {
        //연산해보기
        int sum = 0;        
        for (int i = 0; i <numbers.size(); i++)
            sum += numbers[i] * input[i];           

        if (sum == target)
            answer++;

        return;
    }

    for (int i = 0; i < 2; i++)
    {
        input.push_back(togle[i]);
        duplePerm(dep + 1, numbers, target);
        input.pop_back();
    }
}

int solution(vector<int> numbers, int target) {

    N = numbers.size();
    duplePerm(0, numbers, target);

    return answer;
}

int main()
{
    vector<int> vec = { 4,1,2,1};
    int target = 4;

    cout << solution(vec, target);
}