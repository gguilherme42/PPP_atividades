#include <iostream>
using namespace std;


int square(int n){
	int result = 0;
	for (int i =0; i < n; ++i){
		result += n;
	}
	
	return result;

}

int main(){
	int number = 0;
	cout << "Digite um número: " << endl;
	cin >> number;

	cout << "O quadrado do número " << number << " é: " << square(number) << endl;

}
