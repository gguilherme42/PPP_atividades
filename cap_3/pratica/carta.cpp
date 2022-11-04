#include <iostream>
using namespace std;


void print_letter(string first_name, int age, string friends_name, char friends_sex){
	
	cout << "\n\n\n\n\n";
	cout << "    Prezado " << first_name << "," << endl << endl
		<< "    Como você vai? Eu estou bem. Sinto sua falta." << endl
		<< "    Você viu o " << friends_name << " recentemente?" << endl;

	if (friends_sex == 'm' or friends_sex == 'M') {
		cout << "    Se você encontrar o " << friends_name << " por favor peça para ele me telefonar." << endl;
	} else if (friends_sex == 'f' or friends_sex == 'F') {
		cout << "    Se você encontrar a " << friends_name << " por favor peça para ela me telefonar." << endl;
	}

	cout << endl << "    Soube que você fez aniversário há pouco e agora tem " << age << " anos." << endl;

	if (age < 12){
		cout << "    No próximo ano você terá " << age + 1 << " anos." << endl;
	} else if (age == 17){
		cout << "    No próximo ano você poderá votar." << endl;
	} else if (age > 70) {
		cout << "    Espero que esteja aproveitando a aposentadoria." << endl;
	}

	cout << endl << endl << "    Atenciosamente," << endl << "    Josiley." << endl;
}


int main(){
	string first_name = "";
	string friends_name = "";
	char friends_sex = 0;
	int age = 0;

	cout << "Informe o nome do destinatário: ";
	cin >> first_name;

	cout << "Idade do destinatário: ";
	cin >> age;

	cout << "Informa o nome do amigo: ";
	cin >> friends_name;

	cout << "Sexo do amigo [f/m]: ";
	cin >> friends_sex;



	print_letter(first_name, age, friends_name, friends_sex);
}
