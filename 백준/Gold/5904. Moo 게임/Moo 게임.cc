#include <iostream>
#include <string>
#include <vector>

#define MAX_LENGTH 1'000'000'001
#define ll long long
using namespace std;

//S(K+1) 할 때 int 초과해서 오버플로되서 벡터에 길이가 들어갈 수 있으니 longlong
vector<ll> mooLength;

//S(k)의 길이 반환
//점화식 : 이전 길이 + [m + o + 2] + 이전 길이
//총 길이 = 이전길이 x2 + k+3(moo)
//S(k-1) * 2 + k+3 
void calcLength(int k)
{
	mooLength.push_back(mooLength[k - 1] * 2 + k + 3);
}

char recursive(int k, int n)
{
	//기저조건 : k가 0이면 S(0) = 3 이므로 'moo'이고 첫 번째 글자를 제외한 나머지는 o다.
	if (k == 0) 
		return (n == 1 ? 'm' : 'o');

	ll lrMooSize = mooLength[k - 1];
	ll midMooSize = k + 3;

	//왼쪽 중간 오른쪽 에 있는지 판별하기

	//왼쪽 길이 내에 있을 때
	if (n <= lrMooSize)
	{	
		return recursive(k - 1, n);
	}
	else if (n <= lrMooSize + midMooSize)// 중간 길이 범위 내에 있을 때
	{
		//N이 왼쪽 길이의 길이 + 1 이라면 그 단어는 m이다.
		return (n == lrMooSize + 1) ? 'm' : 'o';
	}
	else if (n <= lrMooSize * 2 + midMooSize) // 끝 길이 범위 내에 있을 때
	{
		// S(k-1), k+3 의 길이만큼 빼주고 그 문장을 재귀한다.
		return recursive(k - 1, n - lrMooSize - midMooSize);
	}
}

int main()
{			
	int n;
	cin >> n;
		
	//1. S(k)의 길이를 배열에 저장하기 일단 S(1)은 moo라서 3이니까 넣어둠
	mooLength.push_back(3);

	//N의 길이까지 반복
	int k = 1;
	while (mooLength.back() < n)
		calcLength(k++);
	
	//2. N이 어떤 그룹에 속하는지 분할정복해서 찾기		
	cout << recursive(k-1, n);
}