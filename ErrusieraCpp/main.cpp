#include <iostream>
#include "Errusiera.h"

int main() {

	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	//These are some examples of using Errusiera

	//Example 1. Enter your name
	std::cout << "Введите ваше имя > ";
	std::string my_name1;
	std::cin >> my_name1;
	Noun E_my_name_1(my_name1, Cases::Nominative, Number::Singular);
	E_my_name_1.change_case(Cases::Dative);
	my_name1 = E_my_name_1.to_string();
	std::cout << my_name1 << " нравится Errusiera" << std::endl;


	//Example 2. Wedding
	std::cout << "Введите имя мужа > ";
	std::string husband_name2;
	std::cin >> husband_name2;
	std::cout << "Введите имя жены > ";
	std::string wife_name2;
	std::cin >> wife_name2;
	Noun E_husband_name2(husband_name2, Cases::Nominative, Number::Singular);
	Noun E_wife_name2(wife_name2, Cases::Nominative, Number::Singular);
	std::cout << E_husband_name2.to_string() << " женат на " << E_wife_name2.change_case(Cases::Prepositional) << std::endl;
	std::cout << E_wife_name2.change_case(Cases::Nominative) << " замужем за " << E_husband_name2.change_case(Cases::Instrumental) << std::endl;


	//Example 3. Time
	std::cout << "Введите время в формате ЧЧ:ММ > ";
	std::string time3;
	std::cin >> time3;
	std::string hours3 = time3.substr(0, 2);
	std::string minutes3 = time3.substr(3, 2);
	Noun E_hours3("час", Cases::Nominative, Number::Singular);
	Noun E_minutes3("минута", Cases::Nominative, Number::Singular);
	E_hours3.change_case(Cases::Genetive);
	E_minutes3.change_case(Cases::Genetive);
}
