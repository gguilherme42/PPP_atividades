#include <iostream>
using namespace std;

int main(){
	double miles = 0;
	double km = 0;
	
	cout << "Milhas: " << endl;
	cin >> miles;
	
	if (miles < 0) miles *= -1; // turn negativa to positive

	km = miles * 1609;

	cout << miles << " milha(s) correspondem à " << km << " km" << endl;
}
