#include <iostream>
using namespace std;


double aritimetic_operation(string operation, double a, double b){
	if (operation == "+") return a + b;
	if (operation == "-") return a - b;
	if (operation == "*") return a * b;
	if (operation == "/") return a / b;

}

int main(){
	string in_operation = "";
	double a = 0;
	double b = 0;

	cout << "Operação [+,-,*,/]: " << endl;
	cin >> in_operation;

	cout << "Operando: " << endl;
	cin >> a;
	cout << "Operação: " << endl;
	cin >> b;

	cout << "Resultado de " << a << " " << in_operation << " " << b << " é: " << aritimetic_operation(in_operation, a, b) << endl;
}
