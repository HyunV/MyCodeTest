#include <iostream>
#include <vector>
using namespace std;

int arr[100001];

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> numArr(n);
    for (int i = 0; i < n; i++)
        cin >> numArr[i];

    int start = 0, end = 0, answer = 0;

    while (end < n) {
        if (arr[numArr[end]] < k) {
            arr[numArr[end]]++;
            end++;
        }
        else {
            arr[numArr[start]]--;
            start++;
        }
        answer = max(answer, end - start);
    }

    cout << answer << "\n";
    return 0;
}
