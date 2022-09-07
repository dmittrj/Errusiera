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
	/// <para>RUS: Нет падежа или неизвестен</para>
	/// <para>ENG: No case or case is unknown</para>
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
	/// <para>RUS: Нет числа или неизвестно</para>
	/// <para>ENG: No number or number is unknown</para>
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
	/// Род неизвестен
	/// </summary>
	None,
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

/// <summary>
/// Одушевлённость
/// </summary>
enum class Animacy {
	/// <summary>
	/// Неизвестно
	/// </summary>
	None,
	/// <summary>
	/// Одушевлённое
	/// </summary>
	Animate,
	/// <summary>
	/// Неодушевлённое
	/// </summary>
	Inanimate
};

bool pattern(std::string str_to_compare, std::string _pattern, std::string& changed_string, bool _eraser_mode);

bool pattern(std::string str_to_compare, std::string _pattern, std::string& changed_string);

bool pattern(std::string str_to_compare, std::string _pattern);

int char_code(std::string _internal_code);

int char_code(const char* _internal_code);

class Adjective;

/// <summary>
/// Имя существительное
/// </summary>
class Noun
{
	friend class Adjective;
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
	/// /// <param name="noun_gender">| Род</param>
	/// /// <param name="noun_animacy">| Одушевленность</param>
	Noun(std::string word_noun_only, Cases noun_case, Number noun_number, Gender noun_gender, Animacy noun_animacy);

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
	/// <returns>Падеж существительного</returns>
	Cases detect_case();

	/// <summary>
	/// <para>RUS: Определяет род, если он не был задан вручную</para>
	/// <para>ENG: Determines the case if it was not set manually</para>
	/// </summary>
	/// <returns>Род существительного</returns>
	Gender detect_gender();

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
	/// <param name="_serialized_string">| Строка формате JSON</param>
	/// <returns>Объект класса Noun</returns>
	static Noun deserialize(std::string _serialized_string);

	/// <summary>
	/// <para>RUS: Трансформирует существительное в прилагательное</para>
	/// <para>ENG: Transform noun to adjective</para> 
	/// </summary>
	/// <param name="_case">| Падеж</param>
	/// <param name="_number">| Число</param>
	/// <param name="_gender">| Род</param>
	/// <returns>Прилагательное с заданными параметрами</returns>
	Adjective build_adjective(Cases _case, Number _number, Gender _gender);

	bool operator==(Noun _noun);

	static bool yo;
private:
	Cases word_case;
	Number word_number;
	Gender word_gender;
	Animacy word_animacy;
	std::string word_default = "";
	std::string to_default();
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

	std::string operator+(Noun _noun);
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



class Phrase
{
public:

private:

};


class Word
{
public:
	std::string word;
	Word(std::string russian_word);



private:

};

#endif // !ERRUSIERA_H