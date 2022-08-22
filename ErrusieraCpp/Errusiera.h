#pragma once
#include <iostream>

#ifndef ERRUSIERA_H
#define ERRUSIERA_H

enum class Cases
{
	Nominative, Genetive, Dative, Accusative, Instrumental, Prepositional
};

enum class Number 
{
	Singular, Paucal, Plural
};

class Noun
{
public:
	std::string word;
	Noun(std::string word_noun_only);
	Noun(std::string word_noun_only, Cases noun_case, Number noun_number);
	~Noun();

	void change_case(Cases case_to);

	std::string to_string();
private:
	Cases word_case;
	Number word_number;

	void to_nominative();
};


#endif // !ERRUSIERA_H
