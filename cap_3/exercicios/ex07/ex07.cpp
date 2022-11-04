#include <iostream>
using namespace std;


void print_strings(string n[3]){
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

void order_array(string result[3]){
	int len = 3;
	string cup = "";
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
	string words[3] = {"","", ""};

	cout << "Digite a 1º palavra: " << endl;
	cin >> words[0];

	cout << "Digite a 2º palavra: " << endl;
	cin >> words[1];

	cout << "Digite o 3º palavra: " << endl;
	cin >> words[2];
	
	order_array(words);
	print_strings(words);
}
