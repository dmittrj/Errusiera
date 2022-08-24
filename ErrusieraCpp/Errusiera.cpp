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
	switch (case_to)
	{
	case Cases::Genetive:
		if (pattern(word, "[ ]011")) {
			pattern(word, "[ ]!--011--!!++033++!", word);
			word[word.size() - 1] = (char)char_code("033");
		}
		else if (pattern(word, "[ ]001")) {
			pattern(word, "[ ]!--001--!!++029++!", word);
		}
		else if (pattern(word, "[ ]014033")) {
			pattern(word, "[ ]014!--033--!!++006015010++!", word);
		}
		else if (pattern(word, "[ ]033")) {
			pattern(word, "[ ]!--033--!!++010++!", word);
		}
		else if (pattern(word, "[ ]008030")) {
			pattern(word, "[ ]008!--030--!!++010++!", word);
		}
		else if (pattern(word, "[ ]026030")) {
			pattern(word, "[ ]026!--030--!!++010++!", word);
		}
		else if (pattern(word, "[ ]030")) {
			pattern(word, "[ ]!--030--!!++033++!", word);
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
	if (_internal_code == "001") return -32;
	if (_internal_code == "002") return -31;
	if (_internal_code == "003") return -30;
	if (_internal_code == "004") return -29;
	if (_internal_code == "005") return -28;
	if (_internal_code == "006") return -27;
	if (_internal_code == "007") return -72;
	if (_internal_code == "008") return -26;
	if (_internal_code == "009") return -25;
	if (_internal_code == "010") return -24;
	if (_internal_code == "011") return -23;
	if (_internal_code == "012") return -22;
	if (_internal_code == "013") return -21;
	if (_internal_code == "014") return -20;
	if (_internal_code == "015") return -19;
	if (_internal_code == "016") return -18; 
	if (_internal_code == "017") return -17;
	if (_internal_code == "018") return -16;
	if (_internal_code == "019") return -15;
	if (_internal_code == "020") return -14;
	if (_internal_code == "021") return -13;
	if (_internal_code == "022") return -12;
	if (_internal_code == "023") return -11;
	if (_internal_code == "024") return -10;
	if (_internal_code == "025") return -9;
	if (_internal_code == "026") return -8;
	if (_internal_code == "027") return -7;
	if (_internal_code == "028") return -6;
	if (_internal_code == "029") return -5;
	if (_internal_code == "030") return -4;
	if (_internal_code == "031") return -3;
	if (_internal_code == "032") return -2;
	if (_internal_code == "033") return -1;
	return 0;
}

int char_code(const char* _internal_code) {
	std::string _temp = _internal_code;
	return char_code(_temp);
}

bool pattern(std::string str_to_compare, std::string _pattern, std::string& changed_string, bool _eraser_mode) {
	if (_pattern == "") {
		if (str_to_compare == "") {
			return true;
		}
		else {
			return false;
		}
	}
	std::string _new_string = "";
	char _triplet[4] = {};
	_triplet[0] = _pattern[0];
	_triplet[1] = _pattern[1];
	_triplet[2] = _pattern[2];
	_triplet[3] = '\0';
	std::string _new_temp_string = "";
	if (!strcmp(_triplet, "[ ]")) {
		// Any number of letters
		int _str_length = str_to_compare.size();
		for (int i = _str_length; i >= 0; i--)
		{
			if (pattern(str_to_compare.substr(i), _pattern.substr(3), _new_temp_string, _eraser_mode)) {
				changed_string = str_to_compare.substr(0, i) + _new_temp_string;
				return true;
			}
		}
	}
	else if (!strcmp(_triplet, "!--")) {
		return pattern(str_to_compare, _pattern.substr(3), changed_string, true);
	}
	else if (!strcmp(_triplet, "--!")) {
		return pattern(str_to_compare, _pattern.substr(3), changed_string, false);
	}
	else if (!strcmp(_triplet, "!++")) {
		int _counter = 3;
		while (true) {
			_triplet[0] = _pattern[_counter];
			_triplet[1] = _pattern[_counter + 1];
			_triplet[2] = _pattern[_counter + 2];
			if (!strcmp(_triplet, "++!")) {
				bool _tmp_add = pattern(str_to_compare, _pattern.substr(_counter + 3), changed_string, _eraser_mode);
				changed_string = _new_temp_string + changed_string;
				return _tmp_add;
			}
			else {
				_new_temp_string += (char)char_code(_triplet);
				_counter += 3;
			}
		}
		//return pattern(str_to_compare, _pattern.substr(3), changed_string, true);
	}
	else if (((int)str_to_compare[0] == char_code(_triplet)) && pattern(str_to_compare.substr(1), _pattern.substr(3), _new_temp_string, _eraser_mode)) {
		if (_eraser_mode) {
			changed_string = _new_temp_string;
		}
		else {
			changed_string = str_to_compare[0] + _new_temp_string;
		}
		return true;
	}
	return false;
}

bool pattern(std::string str_to_compare, std::string _pattern, std::string& changed_string) {
	bool _trash = false;
	return pattern(str_to_compare, _pattern, changed_string, _trash);
}

bool pattern(std::string str_to_compare, std::string _pattern) {
	std::string _trash = "";
	return pattern(str_to_compare, _pattern, _trash);
}


Word::Word(std::string russian_word) {
	word = russian_word;
}
