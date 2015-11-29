#include <iostream>
#include <cmath>
using namespace std;

int main (){
	double x1, x2, x3, m, d;
	cout << "Introduzca el valor de x1: ";
	cin >> x1;
	cout << "Introduzca el valor de x2: ";
	cin >> x2;
	cout << "Introduzca el valor de x3: ";
	cin >> x3;
	m = (x1+x2+x3)/3;
	d = sqrt((((x1*x1)-(2*x1*m)+(m*m))+((x2*x2)-(2*x2*m)+(m*m))+((x3*x3)-(2*x3*m)+(m*m)))/3);
	cout << "La media de esos valores es: " << m << "\nLa desviación típica es: " << d << endl;
}
