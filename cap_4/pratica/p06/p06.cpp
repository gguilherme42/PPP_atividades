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



void print_doubles(double n, double max, double minor) {
	
	cout << "-------------------------" << endl;
	cout << "    valor atual: " << n << endl;
	if (n <= minor) {
		cout << "   - Menor valor até o momento " << endl;
	}

	if (n >= max) {
		cout << "   - Maior valor até o momento " << endl;
	}
	cout << "-------------------------" << endl;

}

int main(){
	double a = 0.0;
	double high_value = 0.0;
	double min_value = 0.0;
	string c = "";
	
	int i = 1;
	while (i > 0) {
		cout << "Digite um número: " << endl;
		cin >> c;

		if (c == "|") break;
		a = stof(c);

		if (i == 1) {
			min_value = a;
			high_value = a;
		}

		min_value = minor_value(a, min_value);
		high_value = max_value(a, high_value);
		
		print_doubles(a, high_value, min_value);

		++i;
	}
}
