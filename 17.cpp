#include <iostream>
using namespace std;

int main (){
	double a,b,suma,resta,multi,divi;
	cout << "Introduzca primer número: ";
	cin >> a;
	cout << "Introduzca segundo número: ";
	cin >> b;
	suma = a + b;
	resta = a - b;
	multi = a * b;
	divi = a / b;
	cout << "La suma de los números es: " << suma << endl;
	cout << "La resta de los números es: " << resta << endl;
	cout << "La multiplicación de los números es: " << multi << endl;
	cout << "La división de los números es: " << divi << endl;
}
