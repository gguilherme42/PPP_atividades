#include <iostream>
#include <string>
using namespace std;


int minor_value(int a, int b) {
	if (a > b) return b;
	return a;
}

int max_value(int a, int b){
	if (a > b) return a;
	return b;
}


void print_ints(int n, int m) {
	cout << "-------------------------" << endl;
	cout << "    O menor valor é: " << minor_value(n, m) << endl;
	cout << "    O maior valor é: " << max_value(n,m) << endl;
	cout << "-------------------------" << endl;
}

int main(){
	int a = 0;
	int b = 0;
	string c = "";

	while (true) {
		cout << "Digite o 1º número: " << endl;
		cin >> c;

		if (c == "|") break;
		a = stoi(c);

		cout << "Digite o 2º número: " << endl;
		cin >> c;

		if (c == "|") break;
		b = stoi(c);
		
		print_ints(a,b);

	}
}
