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
		if (word[word.size() - 1] == 'й') {
			word[word.size() - 1] = 'ю';
		} 
		else if (word[word.size() - 1] == 'а') {
			word[word.size() - 1] = 'е';
		}
		else if (word.substr(word.size() - 2, 2) == "мя") {
			word[word.size() - 1] = 'е';
			word = word + "ни";
		}
		else if (word[word.size() - 1] == 'я') {
			word[word.size() - 1] = 'е';
		}
		else {
			word = word + 'у';
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