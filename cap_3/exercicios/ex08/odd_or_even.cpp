#include <iostream>
using namespace std;


string odd_or_even(int n) {
	if (n % 2 == 0) return "par";
	return "ímpar";
}


int main(){
	int number = 0;

	cout << "Informe um número: " << endl;
	cin >> number;

	cout << "O número " << number << " é " << odd_or_even(number) << endl;

}
