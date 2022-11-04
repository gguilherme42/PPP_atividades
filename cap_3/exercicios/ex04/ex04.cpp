#include <iostream>
using namespace std;

int my_sum(int a, int b) {
	return a + b;
}

int max_value(int a, int b){
	if (a > b) return a;
	return b;
}

int min_value(int a, int b){
	if (a < b) return a;
	return b;
}

int difference(int a, int b){
	return max_value(a, b) - min_value(a, b);
}


double average(int a, int b){
	return my_sum(a, b)/2;
}


int main(){
	int val1 = 0;
	int val2 = 0;
	
	cout << "Informe o 1º valor: " << endl;
	cin >> val1;
	
	cout << "Informe o 2º valor: " << endl;
	cin >> val2;

	cout << "    1º valor: " << val1 << "     2º valor: " << val2 << endl;
	cout << "    - soma: " << my_sum(val1, val2) << endl;
	cout << "    - maior: " << max_value(val1, val2) << endl;
	cout << "    - menor: " << min_value(val1, val2) << endl;
	cout << "    - diferença: " << difference(val1, val2) << endl;
        cout << "    - média: " << average(val1, val2) << endl;	

}
