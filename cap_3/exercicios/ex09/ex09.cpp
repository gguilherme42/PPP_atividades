#include <iostream>
using namespace std;


int print_digit(string digit){
	if (digit == "zero")   return 0;
	if (digit == "um")     return 1;
	if (digit == "dois")   return 2;
	if (digit == "três")   return 3;
	if (digit == "quatro") return 4;
	return -1;
}

int main(){
	string digit = "";

	cout << "Informe o dígito: ";
	cin >> digit;
	if (print_digit(digit) == -1) {
		cout << "Não é um número que eu conheço\n";
	} else {
		cout << print_digit(digit)  << endl;
	}

}
