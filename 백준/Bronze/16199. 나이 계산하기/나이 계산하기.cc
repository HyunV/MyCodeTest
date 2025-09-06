#include<iostream>

using namespace std;

int main() {
	int y1, m1, d1, y2, m2, d2, y3, y4, y5;

	cin>>y1>>m1>>d1>>y2>>m2>>d2;
    
	if (m1 < m2)
		y3 = y2 - y1;
	else if (m1 == m2 && d1 <= d2)
		y3 = y2 - y1;
	else
		y3 = y2 - y1 - 1;

    	y4 = y2 - y1 + 1;

	    y5 = y2 - y1;

	cout<<y3<<'\n'<<y4<<'\n'<<y5;
}