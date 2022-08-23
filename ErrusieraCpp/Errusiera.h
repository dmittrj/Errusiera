#pragma once
#include <iostream>

#ifndef ERRUSIERA_H
#define ERRUSIERA_H

enum class Cases
{
	None, Nominative, Genetive, Dative, Accusative, Instrumental, Prepositional
};

enum class Number 
{
	None, Singular, Paucal, Plural
};

class Noun
{
public:
	std::string word;
	Noun(std::string word_noun_only);
	Noun(std::string word_noun_only, Cases noun_case, Number noun_number);
	~Noun();
	/// <summary>
	/// <para>RUS: Меняет падеж имени существительного</para>
	/// <para>ENG: The function changes the case of the noun</para>
	/// </summary>
	/// <param name="case_to">| Падеж</param>
	void change_case(Cases case_to);

	/// <summary>
	/// <para>RUS: Определяет падеж, если он не был задан вручную</para>
	/// <para>ENG: Determines the case if it was not set manually</para>
	/// </summary>
	/// <returns>Case of the noun</returns>
	Cases detect_case();

	std::string to_string();
private:
	Cases word_case;
	Number word_number;

	void to_nominative();
};

class Word
{
public:
	std::string word;
	Word(std::string russian_word);



private:

};


#endif // !ERRUSIERA_H
