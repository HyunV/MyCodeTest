#include <iostream>
#include <iomanip> // 소수점 조정을 위해 필요
using namespace std;

int main() {
    double base, height, area;
    cin >> base;
    cin >> height;

    // 삼각형 넓이 계산
    area = (base * height) / 2;
    cout << fixed << setprecision(1);
    cout <<  area << endl;
}