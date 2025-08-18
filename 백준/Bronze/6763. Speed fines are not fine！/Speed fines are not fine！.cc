#include <iostream>
using namespace std;

int main(){
	int a, b, res;

	cin >> a >> b;
	res = a - b;
	if(res >= 0)
		cout << "Congratulations, you are within the speed limit!";
	else{
		cout << "You are speeding and your fine is $";	
	if(1 <= -res && -res <= 20) 
		cout << 100;
	else if(21 <= -res && -res <= 30) 
		cout << 270;
	else if(-res >= 31) 
		cout << 500;

	cout << ".";
	}
}