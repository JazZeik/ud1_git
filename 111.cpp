#include <iostream>
using namespace std;

int main (){
	double teo, pra, pro, res;
	cout << "Introduzca las tres notas del alumno: ";
	cin >> teo >> pra >> pro;
	res = (teo*0.7)+(pra*0.2)+(pro*0.1);
	cout << "La nota total del alumno es: " << res << endl;
}
