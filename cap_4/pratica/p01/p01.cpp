#include <iostream>
#include <string>
using namespace std;

void print_ints(int n, int m) {
	cout << "-------------------------" << endl;
	cout << "    1º número: " << n << endl;
	cout << "    2º número: " << m << endl;
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
