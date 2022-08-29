#pragma once
#include <iostream>

#ifndef ERRUSIERA_H
#define ERRUSIERA_H

/// <summary>
/// Падежи
/// </summary>
enum class Cases
{
	/// <summary>
	/// <para>RUS: Нет падежа или неизвестен. Не используйте сами этот падеж</para>
	/// <para>ENG: No case or case is unknown. Please do not use it by your own</para>
	/// </summary>
	None,
	/// <summary>
	/// Именительный падеж
	/// </summary>
	Nominative,
	/// <summary>
	/// Родительный падеж
	/// </summary>
	Genetive,
	/// <summary>
	/// Дательный падеж
	/// </summary>
	Dative,
	/// <summary>
	/// Винительный падеж
	/// </summary>
	Accusative,
	/// <summary>
	/// Творительный падеж
	/// </summary>
	Instrumental,
	/// <summary>
	/// Предложный падеж
	/// </summary>
	Prepositional
};

/// <summary>
/// Числа
/// </summary>
enum class Number
{
	/// <summary>
	/// <para>RUS: Нет числа или неизвестно. Не используйте сами этот параметр</para>
	/// <para>ENG: No number or number is unknown. Please do not use it by your own</para>
	/// </summary>
	None,
	/// <summary>
	/// Единственное число
	/// </summary>
	Singular,
	/// <summary>
	/// Паукальное (двойственное) число
	/// </summary>
	Paucal,
	/// <summary>
	/// Множественное число
	/// </summary>
	Plural
};

/// <summary>
/// Рода
/// </summary>
enum class Gender
{
	/// <summary>
	/// Мужской род
	/// </summary>
	Masculine,
	/// <summary>
	/// Женский род
	/// </summary>
	Feminine,
	/// <summary>
	/// Средний род
	/// </summary>
	Neuter
};

bool pattern(std::string str_to_compare, std::string _pattern, std::string& changed_string, bool _eraser_mode);

bool pattern(std::string str_to_compare, std::string _pattern, std::string& changed_string);

bool pattern(std::string str_to_compare, std::string _pattern);

int char_code(std::string _internal_code);

int char_code(const char* _internal_code);

/// <summary>
/// Имя существительное
/// </summary>
class Noun
{
public:
	/// <summary>
	/// Слово
	/// </summary>
	std::string word;

	/// <summary>
	/// <para>RUS: Конструктор с параметром строки. После создания требуется вызвать detect_params()</para>
	/// <para>ENG: Constructor with string parameter only. Calling detect_params() requires</para>
	/// </summary>
	/// <param name="word_noun_only">| Слово</param>
	Noun(std::string word_noun_only);

	/// <summary>
	/// <para>RUS: Конструктор со всеми параметрами. После объявления можно пользоваться</para>
	/// <para>ENG: Constructor with all parameters. You can use all functions after declaration</para>
	/// </summary>
	/// <param name="word_noun_only">| Слово</param>
	/// <param name="noun_case">| Падеж</param>
	/// <param name="noun_number">| Число</param>
	Noun(std::string word_noun_only, Cases noun_case, Number noun_number);

	~Noun();

	/// <summary>
	/// <para>RUS: Меняет падеж имени существительного</para>
	/// <para>ENG: The function changes the case of the noun</para>
	/// </summary>
	/// <param name="case_to">| Падеж</param>
	/// <returns>Слово в заказанном падеже</returns>
	std::string change_case(Cases case_to);

	/// <summary>
	/// <para>RUS: Меняет число имени существительного</para>
	/// <para>ENG: The function changes the number of the noun</para>
	/// </summary>
	/// <param name="number_to">| Число</param>
	/// <returns>Слово в заказанном числе</returns>
	std::string change_number(Number number_to);

	/// <summary>
	/// <para>RUS: Определяет падеж, если он не был задан вручную</para>
	/// <para>ENG: Determines the case if it was not set manually</para>
	/// </summary>
	/// <returns>Case of the noun</returns>
	Cases detect_case();

	/// <summary>
	/// <para>RUS: Меняет все параметры имени существительного</para>
	/// <para>ENG: The function changes all parameters of the noun</para>
	/// </summary>
	/// <param name="case_to">| Падеж</param>
	/// <param name="number_to">| Число</param>
	/// <returns>Изменённое слово</returns>
	std::string change_word(Cases case_to, Number number_to);

	/// <summary>
	/// <para>RUS: Склоняет существительное</para>
	/// <para>ENG: Conjugates the noun</para>
	/// </summary>
	/// <param name="case_to">| Падеж</param>
	/// <param name="number_to">| Число</param>
	/// <returns>Изменённое слово</returns>
	std::string conjugate(Cases case_to, Number number_to);

	/// <summary>
	/// <para>RUS: Привести класс к строке, т.е. возвращает слово</para>
	/// <para>ENG: Convert class to string</para>
	/// </summary>
	/// <returns>Слово</returns>
	std::string to_string();

	/// <summary>
	/// <para>RUS: Сериализует объект класса Noun в формате JSON</para>
	/// <para>ENG: JSON serializing</para> 
	/// </summary>
	/// <returns>Сериализованная строка</returns>
	std::string serialize();

	/// <summary>
	/// <para>RUS: Десериализует строку формата JSON в объект класса Noun</para>
	/// <para>ENG: JSON deserializing</para> 
	/// </summary>
	/// <returns>Объект класса Noun</returns>
	static Noun deserialize(std::string _serialized_string);
private:
	Cases word_case;
	Number word_number;
	std::string word_nominative = "";

	void to_nominative();
};

/// <summary>
/// Имя прилагательное
/// </summary>
class Adjective
{
public:
	/// <summary>
	/// Слово
	/// </summary>
	std::string word;
	Adjective(std::string word_adj_only, Cases adj_case, Number adj_number, Gender adj_gender);
	~Adjective();

	/// <summary>
	/// <para>RUS: Меняет падеж имени прилагательного</para>
	/// <para>ENG: The function changes the case of the adjective</para>
	/// </summary>
	/// <param name="case_to">| Падеж</param>
	/// <returns>Слово в заказанном падеже</returns>
	std::string change_case(Cases case_to);

	/// <summary>
	/// <para>RUS: Меняет число имени прилагательного</para>
	/// <para>ENG: The function changes the number of the adjective</para>
	/// </summary>
	/// <param name="number_to">| Число</param>
	/// <returns>Слово в заказанном числе</returns>
	std::string change_number(Number number_to);

	/// <summary>
	/// <para>RUS: Меняет род имени прилагательного</para>
	/// <para>ENG: The function changes the gender of the adjective</para>
	/// </summary>
	/// <param name="gender_to">| Род</param>
	/// <returns>Слово в заказанном роде</returns>
	std::string change_gender(Gender gender_to);

	/// <summary>
	/// <para>RUS: Меняет все параметры имени прилагательного</para>
	/// <para>ENG: The function changes all parameters of the adjective</para>
	/// </summary>
	/// <param name="case_to">| Падеж</param>
	/// <param name="number_to">| Число</param>
	/// <param name="gender_to">| Род</param>
	/// <returns>Изменённое слово</returns>
	std::string change_word(Cases case_to, Number number_to, Gender gender_to);

	/// <summary>
	/// <para>RUS: Привести класс к строке, т.е. возвращает слово</para>
	/// <para>ENG: Convert class to string</para>
	/// </summary>
	/// <returns>Слово</returns>
	std::string to_string();

private:
	Cases word_case;
	Number word_number;
	Gender word_gender;
	std::string word_default = "";

	void to_default();
};

class Numeral
{
public:
	/// <summary>
	/// Слово
	/// </summary>
	std::string word;
	Numeral(std::string word_num_only, Cases num_case, Number num_number, Gender num_gender);

	Numeral(int number);

	~Numeral()
	{
	}

	/// <summary>
	/// <para>RUS: Привести класс к строке, т.е. возвращает слово</para>
	/// <para>ENG: Convert class to string</para>
	/// </summary>
	/// <returns>Слово</returns>
	std::string to_string();
private:
	static std::string num_to_str(int _number, Cases _case, Gender _gender, Number _gnumber);
};


class Word
{
public:
	std::string word;
	Word(std::string russian_word);



private:

};

#endif // !ERRUSIERA_H