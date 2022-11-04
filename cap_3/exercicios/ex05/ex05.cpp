#include <iostream>
using namespace std;

double  my_sum(double a, double b) {
	return a + b;
}

double max_value(double a, double b){
	if (a > b) return a;
	return b;
}

double min_value(double a, double b){
	if (a < b) return a;
	return b;
}

double difference(double a, double b){
	return max_value(a, b) - min_value(a, b);
}


double average(double a, double b){
	return my_sum(a,b)/2;
}


int main(){
	double val1 = 0;
	double val2 = 0;
	
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
