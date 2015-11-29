#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double a,b,c;
	double x1;
	double x2;
	cout << "Introduzca el valor de la primera variable: ";
	cin >> a;
	cout << "Introduzca el valor de la primera variable: ";
	cin >> b;
	cout << "Introduzca el valor de la primera variable: ";
	cin >> c;
	x1=(-b+(sqrt(b*b-4*a*c)))/(2*a);
	x2=(-b-(sqrt(b*b-4*a*c)))/(2*a);
	cout << "Según la expresión ax2+bx+c=0 x=" << x1 << " x=" << x2 << endl;
}
