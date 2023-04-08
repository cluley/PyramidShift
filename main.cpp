#include "pyramid.h"

int main(int argc, char** argv) {
	const int a_size = 6;
	int alpha[a_size]{ 1, 3, 6, 5, 9, 8 };

	const int b_size = 8;
	int bravo[b_size]{ 94, 67, 18, 44, 55, 12, 6, 42 };

	const int c_size = 10;
	int charlie[c_size]{ 16, 11, 9, 10, 5, 6, 8, 1, 2, 4 };



	/*Pyramid alpha_P(alpha, a_size);

	alpha_P.print_pyramid();
	cout << "Вы находитесь здесь: ";
	alpha_P.print_root();
	string input = "_";
	do {
		cout << "Введите команду: ";
		cin >> input;

		if (input == "up") {
			alpha_P.print_parent();
		}
		else if (input == "left") {
			alpha_P.print_left();
		}
		else if (input == "right") {
			alpha_P.print_right();
		}
		else {
			cout << "Неизветсная команда!" << endl;
		}
	} while (input != "exit");*/

	/*Pyramid bravo_P(bravo, b_size);



	bravo_P.print_pyramid();
	cout << "Вы находитесь здесь: ";
	bravo_P.print_root();
	string input = "_";
	do {
		cout << "Введите команду: ";
		cin >> input;

		if (input == "up") {
			bravo_P.print_parent();
		}
		else if (input == "left") {
			bravo_P.print_left();
		}
		else if (input == "right") {
			bravo_P.print_right();
		}
		else {
			cout << "Неизветсная команда!" << endl;
		}
	} while (input != "exit");*/



	Pyramid charlie_P(charlie, c_size);

	charlie_P.print_pyramid();
	cout << "Вы находитесь здесь: ";
	charlie_P.print_root();
	string input = "_";
	do {
		cout << "Введите команду: ";
		cin >> input;

		if (input == "up") {
			charlie_P.print_parent();
		}
		else if (input == "left") {
			charlie_P.print_left();
		}
		else if (input == "right") {
			charlie_P.print_right();
		}
		else {
			cout << "Неизветсная команда!" << endl;
		}
	} while (input != "exit");

	return 0;
}