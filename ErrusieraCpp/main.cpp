#include <iostream>
#include "Errusiera.h"

int main() {

	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	//This are some examples of using Errusiera

	//Example 1. Enter your name
	std::cout << "Введите ваше имя > ";
	std::string my_name1;
	std::cin >> my_name1;
	Noun E_my_name_1(my_name1, Cases::Nominative, Number::Singular);
	E_my_name_1.change_case(Cases::Dative);
	my_name1 = E_my_name_1.to_string();
	std::cout << my_name1 << " нравится Errusiera";
}