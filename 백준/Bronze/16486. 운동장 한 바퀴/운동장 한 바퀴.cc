#include <math.h>
#include <iostream>
using namespace std;

int main(){
    double pi = 3.141592;
    double radius;
    double square;
    cin >> square >> radius;
    printf("%.6f", (radius * pi + square) * 2);
}