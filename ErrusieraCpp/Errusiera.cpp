#include "Errusiera.h"

// Errusiera 1.0.0-beta4
// Dmitry Balabanov | github.com/dmittrj/Errusiera


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
	if (word_nominative != "") {
		word = word_nominative;
	}
}

std::string Noun::change_case(Cases case_to) {
	if (case_to == word_case) { return word; }
	to_nominative();
	if (pattern(word, "[ ]011")) {
		std::cout << "Okay";
	}
	switch (case_to)
	{
	case Cases::Genetive:
		if (pattern(word, "[ ]011")) {
			word[word.size() - 1] = (char)char_code("033");
		}
		else if (word[word.size() - 1] == (char)-32) {
			word[word.size() - 1] = (char)-5;
		}
		else if (word.substr(word.size() - 2, 2) == "мя") {
			word[word.size() - 1] = 'е';
			word = word + "ни";
		}
		else if (word[word.size() - 1] == 'я') {
			word[word.size() - 1] = 'и';
		}
		else if (word[word.size() - 1] == 'ь') {
			if (word[word.size() - 2] == 'ж' || word[word.size() - 2] == 'ш') {
				word[word.size() - 1] = 'и';
			}
			else {
				word[word.size() - 1] = 'я';
			}
		}
		else {
			word = word + "а";
		}
		break;
	case Cases::Dative:
		if (word[word.size() - 1] == (char)-23) {
			word[word.size() - 1] = (char)-2;
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
		else if (word[word.size() - 1] == 'ь') {
			if (word[word.size() - 2] == 'ж' || word[word.size() - 2] == 'ш') {
				word[word.size() - 1] = 'и';
			}
			else {
				word[word.size() - 1] = 'ю';
			}
		}
		else {
			word = word + "у";
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
		else if (word[word.size() - 1] == 'ь') {
			if (word[word.size() - 2] == 'ж' || word[word.size() - 2] == 'ш') {

			}
			else {
				word[word.size() - 1] = 'я';
			}
		}
		break;
	case Cases::Instrumental:
		if (word[word.size() - 1] == 'й') {
			word[word.size() - 1] = 'е';
			word = word + "м";
		}
		else if (word[word.size() - 1] == 'а') {
			word[word.size() - 1] = 'о';
			word = word + "й";
		}
		else if (word.substr(word.size() - 2, 2) == "мя") {
			word[word.size() - 1] = 'е';
			word = word + "нем";
		}
		else if (word[word.size() - 1] == 'я') {
			word[word.size() - 1] = 'е';
			word = word + "й";
		}
		else if (word[word.size() - 1] == 'ь') {
			if (word[word.size() - 2] == 'ж' || word[word.size() - 2] == 'ш') {
				word = word + "ю";
			} else if (word[word.size() - 2] == 'р' || word[word.size() - 2] == 'л' || word[word.size() - 2] == 'с') {
				word[word.size() - 1] = 'е';
				word = word + "м";
			}
			else {
				word[word.size() - 1] = 'ё';
				word = word + "м";
			}
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
	word_case = case_to;
	return word;
}

std::string Noun::change_number(Number number_to) {
	if (number_to == word_number) { return word; }
	return word;
}

Cases Noun::detect_case() {
	if (word_case != Cases::None) { return word_case; }
}

std::string Noun::change_word(Cases case_to, Number number_to) {
	change_case(case_to);
	change_number(number_to);
	return word;
}

std::string Noun::to_string() {
	return word;
}

int char_code(std::string _internal_code) {
	if (_internal_code == "011") return -23;
	if (_internal_code == "033") return -1;
	return 0;
}

int char_code(const char* _internal_code) {
	std::string _temp = _internal_code;
	return char_code(_temp);
}

bool pattern(std::string str_to_compare, std::string _pattern) {
	if (_pattern == "") {
		if (str_to_compare == "") {
			return true;
		}
		else {
			return false;
		}
	}
	char _triplet[4] = {};
	_triplet[0] = _pattern[0];
	_triplet[1] = _pattern[1];
	_triplet[2] = _pattern[2];
	_triplet[3] = '\0';
	if (!strcmp(_triplet, "[ ]")) {
		// Any number of letters
		int _str_length = str_to_compare.size();
		for (int i = _str_length; i >= 0; i--)
		{
			if (pattern(str_to_compare.substr(i), _pattern.substr(3))) {
				return true;
			}
		}
	} 
	else if (((int)str_to_compare[0] == char_code(_triplet)) && pattern(str_to_compare.substr(1), _pattern.substr(3))) {
		return true;
	}
	return false;
}

Word::Word(std::string russian_word) {
	word = russian_word;
}
