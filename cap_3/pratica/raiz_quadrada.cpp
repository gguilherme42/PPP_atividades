#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double number;
	cout << "Insira um número real: ";
	cin >> number;
	cout << "n == " << number << endl
		 << "n + 1 == " << number + 1 << endl
		 << "triplo de n == " << number * 3 << endl
		 << "dobro de n == " << number * 2 << endl
		 << "n ao quadrado == " << number * number << endl
		 << "metade de n == " << number / 2 << endl
		 << "raiz quadrada de n == " << sqrt(number) << endl;

	return 0;

}
