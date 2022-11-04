#include <iostream>
using namespace std;

int main(){
	double pennie = 0;
	double niquel = 0;
	double half_dollar = 0;
	double quarto = 0;
	double dime = 0;
	double cents = 0;
	double dollar = 0;
	
	cout << "Quantos pennies você tem?" << endl;
	cin >> pennie;

	cout << "Quantos níquels você tem?" << endl;
	cin >> niquel;
	
	cout << "Quantos dimes você tem?" << endl;
	cin >> dime;
	
	cout << "Quantos quartos você tem?" << endl;
	cin >> quarto;

	cout << "Quantos meio-dollars você tem?" << endl;
	cin >> half_dollar;

	cents = pennie + (niquel * 5) + (dime * 10) + (quarto * 25) + (half_dollar * 50);
	dollar = cents / 100;

	cout << "Você tem " << pennie << " pênis KKKKKKKKK" << endl;
	cout << "Você tem " << niquel << " níquels" << endl;
	cout << "Você tem " << dime << " dimes" << endl;
	cout << "Você tem " << quarto << " quartos" << endl;
	cout << "Você tem " << half_dollar << " meio-dólar" << endl;
	cout << "    O valor total de suas moedas é " << cents << " centavos" << endl;
	cout << "Que representa U$ " << dollar << endl;

}
