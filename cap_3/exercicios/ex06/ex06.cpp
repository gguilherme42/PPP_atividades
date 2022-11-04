#include <iostream>
using namespace std;


void print_numbers(int n[3]){
	int len = 3;
	for(int i = 0; i < len; ++i) {
		if (i == len - 1) {
			cout << n[i];
		} else {
			cout << n[i] << ", ";
		}
	}
	cout << endl;

}

void order_array(int result[3]){
	int len = 3;
	int cup = 0;
	bool change = true;

	while(change){
		change = false;

		for(int i = 0; i < len - 1; ++i){
			if (result[i] > result[i + 1]){
				cup = result[i + 1];
				result[i + 1] = result[i];
				result[i] = cup;

				change = true;
			}
		}
	}

}


int main(){
	int numbers[3] = {0, 0, 0};

	cout << "Digite o 1º valor: " << endl;
	cin >> numbers[0];

	cout << "Digite o 2º valor: " << endl;
	cin >> numbers[1];

	cout << "Digite o 3º valor: " << endl;
	cin >> numbers[2];
	
	order_array(numbers);
	print_numbers(numbers);
}
