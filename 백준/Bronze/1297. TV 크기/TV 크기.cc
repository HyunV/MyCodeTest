#include <iostream>  
#include <cmath>
using namespace std;

int main() {
	int d, h, w;
	cin >> d >> h >> w;
	double r = sqrt(w * w + h * h);
	double width = d * w / r;
	double height = d * h / r;
	cout << (int)height << " " << (int)width;
}