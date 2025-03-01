#include <iostream>

using namespace std;

int main()
{
	float w, h;
	cin >> w >> h;

	float bmi = w / (h * h);

	if (bmi > 25.f)
		cout << "Overweight";
	else if (bmi >= 18.5f && bmi <= 25.f)
		cout << "Normal weight";
	else if (bmi < 18.5f)
		cout << "Underweight";

}