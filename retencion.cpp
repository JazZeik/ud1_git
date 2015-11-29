#include <iostream>
using namespace std;

int main() {
	const double IRPF=0.18;
	double retencion;
	double salario_bruto;
	cout << "introduzca salario bruto: ";
	cin >> salario_bruto;
	retencion = salario_bruto * IRPF;
	cout << "IRPF = 0.18";
	cout << "\nRetención a aplicar: " << retencion;
	cout << "\nSalario neto: " << salario_bruto - retencion << endl;
}
