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

	/// <summary>
	/// <para>RUS: ����������� � ���������� ������. ����� �������� ��������� ������� detect_params()</para>
	/// <para>ENG: Constructor with string parameter only. Calling detect_params() requires</para>
	/// </summary>
	/// <param name="word_noun_only">| �����</param>
	Noun(std::string word_noun_only);

	/// <summary>
	/// <para>RUS: ����������� �� ����� �����������. ����� ���������� ����� ������������</para>
	/// <para>ENG: Constructor with all parameters. You can use all functions after declaration</para>
	/// </summary>
	/// <param name="word_noun_only">| �����</param>
	/// <param name="noun_case">| �����</param>
	/// <param name="noun_number">| �����</param>
	Noun(std::string word_noun_only, Cases noun_case, Number noun_number);
	
	~Noun();

	/// <summary>
	/// <para>RUS: ������ ����� ����� ����������������</para>
	/// <para>ENG: The function changes the case of the noun</para>
	/// </summary>
	/// <param name="case_to">| �����</param>
	/// <returns>����� � ���������� ������</returns>
	std::string change_case(Cases case_to);

	/// <summary>
	/// <para>RUS: ������ ����� ����� ����������������</para>
	/// <para>ENG: The function changes the number of the noun</para>
	/// </summary>
	/// <param name="number_to">| �����</param>
	/// <returns>����� � ���������� �����</returns>
	std::string change_number(Number number_to);

	/// <summary>
	/// <para>RUS: ���������� �����, ���� �� �� ��� ����� �������</para>
	/// <para>ENG: Determines the case if it was not set manually</para>
	/// </summary>
	/// <returns>Case of the noun</returns>
	Cases detect_case();

	std::string to_string();
private:
	Cases word_case;
	Number word_number;
	std::string word_nominative = "";

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
