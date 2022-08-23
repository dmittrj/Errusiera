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
		if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
		}
		else if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
		}
		else if (word.substr(word.size() - 2, 2) == "��") {

		}
		else if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
		}
		break;
	case Cases::Instrumental:
		if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
			word = word + '�';
		}
		else if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
			word = word + '�';
		}
		else if (word.substr(word.size() - 2, 2) == "��") {
			word[word.size() - 1] = '�';
			word = word + "���";
		}
		else if (word[word.size() - 1] == '�') {
			word[word.size() - 1] = '�';
			word = word + '�';
		}
		else {
			word = word + "��";
		}
		break;
	case Cases::Prepositional:
		if (word.substr(word.size() - 2, 2) == "��") {
			word[word.size() - 1] = '�';
		}
		else if (word[word.size() - 1] == '�') {
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
			word = word + "�";
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