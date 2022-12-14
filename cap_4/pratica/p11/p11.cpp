#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <algorithm>
using namespace std;


int minor_value(double a, double b) {
	if (a > b) return b;
	return a;
}

int max_value(double a, double b){
	if (a > b) return a;
	return b;
}



void print_doubles(double n, double max, double minor, char u) {
	
	cout << "-------------------------" << endl;
	cout << "    valor atual: " << n <<  " " << u << endl;
	if (n <= minor) {
		cout << "   - Menor valor até o momento " << endl;
	}

	if (n >= max) {
		cout << "   - Maior valor até o momento " << endl;
	}
	cout << "-------------------------" << endl;

}



void print_all_numbers(vector<double> n) {
	cout << "    Os valores são: " << endl;
	cout << "    ";

	sort(n.begin(), n.end());
	for(int i=0; i < n.size(); i++) {
		if (i < (n.size() - 1)) {
			cout << n[i] << ", ";
		} else {
			cout << n[i] << endl;
		}
	}

}



char get_unity(){
	char result = 'm';
	while (true){
		cout << "    c → cm | p → pol | f → ft " << endl << endl;
		cout << "Digite a unidade (m/f/c/p). Default = m: " << endl;
		cin >> result;

		switch (result){
			case 'm': case 'f': case 'c': case 'p':
				return result;
			default:
				cout << "Ilegal" << endl;
				break;
		
		}
	}


}

double convert_to_metter(double n, char unity) {
	double result = n;
	
	switch (unity) {
		case 'c': 
			result *= 100;
			return result;
		case 'p':
			result = (result * 2.54) * 100;
			return result;
		case 'f':
			result = ((result * 12) * 2.54) * 100;
			return result;
		case 'm':
			return result;
		default:
			break;
	}

	return result;

}

int main(){
	const double cm_by_pol = 2.54;
	const double cm_by_m = 100;
	const double ft_by_pol = 12;

	double number = 0.0;
	double high_value = 0.0;
	double min_value = 0.0;
	double sum = 0.0;
	vector<double> all_numbers(1);
	char unity = 'm';

	string c = "";
	
	int i = 1;
	while (i > 0) {
		cout << "Digite um número: " << endl;
		cin >> c;
		
		if (c == "|") break;
		number = stof(c);

		unity = get_unity();

		sum += number;
		switch (unity) {
			case 'c': 
				number *= cm_by_m;
				break;
			case 'p':
				number = (number/cm_by_m)/cm_by_pol;
				break;
			case 'f':
				number = ((number/cm_by_m)/cm_by_pol) * ft_by_pol;
				break;
			case 'm':
				break;
			default:
				break;
		}
		
		all_numbers.push_back(convert_to_metter(number, unity));

		if (i == 1) {
			min_value = number;
			high_value = number;
		}

		min_value = minor_value(number, min_value);
		high_value = max_value(number, high_value);
		
		print_doubles(number, high_value, min_value, unity);
		
		++i;
	}

	cout << "    Soma: " << sum << "m" << " | maior número: " << high_value << " | menor número: " << min_value << endl;

	print_all_numbers(all_numbers);
}
