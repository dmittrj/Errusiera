#include "Errusiera.h"

Noun::Noun(std::string word_noun_only) {
	word = word_noun_only;
}

Noun::Noun(std::string word_noun_only, Cases noun_case, Number noun_number) {
	word = word_noun_only;
	word_case = noun_case;
	word_number = noun_number;
}

Noun::~Noun() {

}

void Noun::to_nominative() {

}

void Noun::change_case(Cases case_to) {
	if (case_to == word_case) { return; }
	to_nominative();
	switch (case_to)
	{
	case Cases::Genetive:
		break;
	case Cases::Dative:
		if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
		} 
		else if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
		}
		else if (word.substr(word.size() - 2, 2) == "��") {
			word[word.size() - 1] = '�';
			word = word + "��";
		}
		else if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
		}
		else {
			word = word + '�';
		}
		break;
	case Cases::Accusative:
		break;
	case Cases::Instrumental:
		break;
	case Cases::Prepositional:
		break;
	default:
		break;
	}
}

std::string Noun::to_string() {
	return word;
}