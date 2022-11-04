#include <iostream>
#include <string>
using namespace std;


int minor_value(double a, double b) {
	if (a > b) return b;
	return a;
}

int max_value(double a, double b){
	if (a > b) return a;
	return b;
}


void print_min_and_max(double n, double m) {
	const double limit = 10000000/100;
	const double higher = max_value(n, m);
	const double lesser = minor_value(n, m);

	bool almost_equal = (higher - lesser) < limit;

	cout << "-------------------------" << endl;
	cout << "    O menor valor é: " << lesser << endl;
	cout << "    O maior valor é: " << higher << endl;
	if (almost_equal){
		cout << "    Os números são quase iguais " << endl;
	}

	cout << "-------------------------" << endl;
}

void print_equal(){
	cout << "-------------------------" << endl;
	cout << "    Os valores são iguais" << endl;
	cout << "-------------------------" << endl;
}


void print_doubles(double n, double m) {
	if (n == m) {
		print_equal();
	}else {
		print_min_and_max(n, m);
	}

}

int main(){
	double a = 0.0;
	double b = 0.0;
	string c = "";

	while (true) {
		cout << "Digite o 1º número: " << endl;
		cin >> c;

		if (c == "|") break;
		a = stof(c);

		cout << "Digite o 2º número: " << endl;
		cin >> c;

		if (c == "|") break;
		b = stof(c);
		
		print_doubles(a,b);

	}
}
