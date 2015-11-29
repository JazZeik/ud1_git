#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double PI0, PI1, PI2, x0, x1, x2, y0, y1, y2, res;
	PI0 = 2 + sqrt(2);
	x0 = sqrt(2);
	x1 = (sqrt(x0) + (1/sqrt(x0))) / 2;
	y1 = pow(2,0.25);
	PI1 = PI0 * ((x1+1)/(y1+1));
	x2 = (sqrt(x1) + (1/sqrt(x1))) / 2;
	y2 = ((pow(2,0.25) * sqrt(x1)) + (1/sqrt(x1))) / (y1+1);
	PI2 = PI1 * ((x2+1)/(y2+1));
	cout << PI0 << endl;
	cout << PI1 << endl;
	cout << PI2 << endl;
}
