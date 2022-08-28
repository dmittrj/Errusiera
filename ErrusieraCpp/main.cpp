#include <iostream>
#include <string>
#include "Errusiera.h"

int main() {

	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	//These are some examples of using Errusiera

	//Example 1. Enter your name
	std::cout << "\302\342\345\344\350\362\345 \342\340\370\345 \350\354\377 > ";
	std::string my_name1;
	std::cin >> my_name1;
	Noun E_my_name_1(my_name1, Cases::Nominative, Number::Singular);
	E_my_name_1.change_case(Cases::Dative);
	my_name1 = E_my_name_1.to_string();
	std::cout << my_name1 << " \355\360\340\342\350\362\361\377 Errusiera\n" << std::endl;


	//Example 2. Wedding
	std::cout << "\302\342\345\344\350\362\345 \350\354\377 \354\363\346\340 > ";
	std::string husband_name2;
	std::cin >> husband_name2;
	std::cout << "\302\342\345\344\350\362\345 \350\354\377 \346\345\355\373 > ";
	std::string wife_name2;
	std::cin >> wife_name2;
	Noun E_husband_name2(husband_name2, Cases::Nominative, Number::Singular);
	Noun E_wife_name2(wife_name2, Cases::Nominative, Number::Singular);
	std::cout << E_husband_name2.to_string() << " \346\345\355\340\362 \355\340 " << E_wife_name2.change_case(Cases::Prepositional) << std::endl;
	std::cout << E_wife_name2.change_case(Cases::Nominative) << " \347\340\354\363\346\345\354 \347\340 " << E_husband_name2.change_case(Cases::Instrumental) << "\n" << std::endl;


	//Example 3. Time
	std::cout << "\302\342\345\344\350\362\345 \342\360\345\354\377 \342 \364\356\360\354\340\362\345 \327\327:\314\314 > ";
	std::string time3;
	std::cin >> time3;
	int hours3 = std::stoi(time3.substr(0, 2));
	int minutes3 = std::stoi(time3.substr(3, 2));
	Numeral E_numh3(hours3);
	Numeral E_numm3(minutes3);
	E_numh3.to_string();
	Noun E_hours3("час", Cases::Nominative, Number::Singular);
	Noun E_minutes3("минута", Cases::Nominative, Number::Singular);
	E_hours3.change_case(Cases::Genetive);
	E_minutes3.change_case(Cases::Genetive);
	if (hours3 >= 10 && hours3 <= 20) E_hours3.change_number(Number::Plural);
	else if (hours3 % 10 == 1) E_hours3.change_word(Cases::Nominative, Number::Singular);
	else if (hours3 % 10 > 4 || hours3 % 10 == 0) E_hours3.change_number(Number::Plural);
	else E_hours3.change_number(Number::Singular);
	if (minutes3 >= 10 && minutes3 <= 20) E_minutes3.change_number(Number::Plural);
	else if (minutes3 % 10 == 1) E_minutes3.change_word(Cases::Nominative, Number::Singular);
	else if (minutes3 % 10 > 4 || minutes3 % 10 == 0) E_minutes3.change_number(Number::Plural);
	else E_minutes3.change_number(Number::Singular);
	std::cout << "Время: " << hours3 << " " << E_hours3.to_string() << " " 
		<< minutes3 << " " << E_minutes3.to_string();
}