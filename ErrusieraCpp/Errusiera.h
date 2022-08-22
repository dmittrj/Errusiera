#pragma once
#include <iostream>

#ifndef ERRUSIERA_H
#define ERRUSIERA_H

enum class Cases
{
	Nominative, Genetive, Dative, Accusative, Instrumental, Prepositional
};

class Noun
{
public:
	std::string word;
	Cases word_case;
	Noun(std::string word_noun_only);
	Noun(std::string word_noun_only, Cases noun_case);
	~Noun();
private:

};


#endif // !ERRUSIERA_H
