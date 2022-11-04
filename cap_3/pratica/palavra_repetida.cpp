#include <iostream>
using namespace std;

int main(){
	string last_word = "";
	string current_word;
	
	while (cin >> current_word){
		if (last_word == current_word)
			cout << "palavra repetida: " << current_word << endl;
		last_word = current_word;
	}
	return 0;
}
