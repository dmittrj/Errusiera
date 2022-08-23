#include "Errusiera.h"

Noun::Noun(std::string word_noun_only) {
	word = word_noun_only;
}

Noun::Noun(std::string word_noun_only, Cases noun_case, Number noun_number) {
	word = word_noun_only;
	word_case = noun_case;
	word_number = noun_number;

	if (word_case == Cases::Nominative) word_nominative = word;
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
		if (word[word.size() - 1] == 'й') {
			word[word.size() - 1] = 'я';
		}
		else if (word[word.size() - 1] == 'а') {
			word[word.size() - 1] = 'ы';
		}
		else if (word.substr(word.size() - 2, 2) == "мя") {
			word[word.size() - 1] = 'е';
			word = word + "ни";
		}
		else if (word[word.size() - 1] == 'я') {
			word[word.size() - 1] = 'и';
		}
		else {
			word = word + 'а';
		}
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
		if (word[word.size() - 1] == 'й') {
			word[word.size() - 1] = 'я';
		}
		else if (word[word.size() - 1] == 'а') {
			word[word.size() - 1] = 'у';
		}
		else if (word.substr(word.size() - 2, 2) == "мя") {

		}
		else if (word[word.size() - 1] == 'я') {
			word[word.size() - 1] = 'ю';
		}
		break;
	case Cases::Instrumental:
		if (word[word.size() - 1] == 'й') {
			word[word.size() - 1] = 'е';
			word = word + 'м';
		}
		else if (word[word.size() - 1] == 'а') {
			word[word.size() - 1] = 'о';
			word = word + 'й';
		}
		else if (word.substr(word.size() - 2, 2) == "мя") {
			word[word.size() - 1] = 'е';
			word = word + "нем";
		}
		else if (word[word.size() - 1] == 'я') {
			word[word.size() - 1] = 'е';
			word = word + 'й';
		}
		else {
			word = word + "ом";
		}
		break;
	case Cases::Prepositional:
		if (word.substr(word.size() - 2, 2) == "ий") {
			word[word.size() - 1] = 'и';
		}
		else if (word[word.size() - 1] == 'й') {
			word[word.size() - 1] = 'е';
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
			word = word + "е";
		}
		break;
	default:
		break;
	}
}

Cases Noun::detect_case() {
	if (word_case != Cases::None) { return word_case; }
}

std::string Noun::to_string() {
	return word;
}

Word::Word(std::string russian_word) {
	word = russian_word;
}