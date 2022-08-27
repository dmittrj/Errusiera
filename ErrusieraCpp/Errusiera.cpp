#include "Errusiera.h"
#include <utility>
#include <algorithm>

// Errusiera 1.0.1-alpha5
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
	return change_word(case_to, word_number);
}

std::string Noun::change_number(Number number_to) {
	return change_word(word_case, number_to);
}

Cases Noun::detect_case() {
	if (word_case != Cases::None) { return word_case; }
}

std::string Noun::change_word(Cases case_to, Number number_to) {
	if (case_to == word_case && number_to == word_number) { return word; }
	to_nominative();
	try {
		switch (number_to)
		{
		case Number::None:
			throw std::exception("Number of the word is undefind. Please call detect_number()");
			break;
		case Number::Singular:
			switch (case_to)
			{
			case Cases::Nominative:
				break;
			case Cases::Genetive:
				if (pattern(word, "[ ]011")) {
					pattern(word, "[ ]!--011--!!++033++!", word);
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
					pattern(word, "[_]!++001++!", word);
				}
				break;
			case Cases::Dative:
				if (pattern(word, "[ ]011")) {
					pattern(word, "[ ]!--011--!!++032++!", word);
				}
				else if (pattern(word, "[ ]001")) {
					pattern(word, "[ ]!--001--!!++006++!", word);
				}
				else if (pattern(word, "[ ]014033")) {
					pattern(word, "[ ]014!--033--!!++006015010++!", word);
				}
				else if (pattern(word, "[ ]033")) {
					pattern(word, "[ ]!--033--!!++006++!", word);
				}
				else if (pattern(word, "[ ]008030")) {
					pattern(word, "[ ]008!--030--!!++010++!", word);
				}
				else if (pattern(word, "[ ]026030")) {
					pattern(word, "[ ]026!--030--!!++010++!", word);
				}
				else if (pattern(word, "[ ]030")) {
					pattern(word, "[ ]!--030--!!++032++!", word);
				}
				else {
					pattern(word, "[_]!++021++!", word);
				}
				break;
			case Cases::Accusative:
				if (pattern(word, "[ ]011")) {
					pattern(word, "[ ]!--011--!!++033++!", word);
				}
				else if (pattern(word, "[ ]001")) {
					pattern(word, "[ ]!--001--!!++021++!", word);
				}
				else if (pattern(word, "[ ]033")) {
					pattern(word, "[ ]!--033--!!++032++!", word);
				}
				else if (pattern(word, "[ ]008030")) {

				}
				else if (pattern(word, "[ ]026030")) {

				}
				else if (pattern(word, "[ ]030")) {
					pattern(word, "[ ]!--030--!!++033++!", word);
				}
				break;
			case Cases::Instrumental:
				if (pattern(word, "[ ]011")) {
					pattern(word, "[ ]!--011--!!++006014++!", word);
				}
				else if (pattern(word, "[ ]001")) {
					pattern(word, "[ ]!--001--!!++016011++!", word);
				}
				else if (pattern(word, "[ ]014033")) {
					pattern(word, "[ ]014!--033--!!++006015006014++!", word);
				}
				else if (pattern(word, "[ ]033")) {
					pattern(word, "[ ]!--033--!!++006011++!", word);
				}
				else if (pattern(word, "[ ]008030")) {
					pattern(word, "[ ]008030!++032++!", word);
				}
				else if (pattern(word, "[ ]026030")) {
					pattern(word, "[ ]026030!++032++!", word);
				}
				else if (pattern(word, "[ ]018030")) {
					pattern(word, "[ ]018!--030--!!++006014++!", word);
				}
				else if (pattern(word, "[ ]013030")) {
					pattern(word, "[ ]013!--030--!!++006014++!", word);
				}
				else if (pattern(word, "[ ]019030")) {
					pattern(word, "[ ]019!--030--!!++006014++!", word);
				}
				else if (pattern(word, "[ ]030")) {
					pattern(word, "[ ]!--030--!!++007014++!", word);
				}
				else {
					pattern(word, "[_]!++016014++!", word);
				}
				break;
			case Cases::Prepositional:
				if (pattern(word, "[ ]010011")) {
					pattern(word, "[ ]010!--011--!!++010++!", word);
				}
				else if (pattern(word, "[ ]011")) {
					pattern(word, "[ ]!--011--!!++006++!", word);
				}
				else if (pattern(word, "[ ]001")) {
					pattern(word, "[ ]!--001--!!++006++!", word);
				}
				else if (pattern(word, "[ ]014033")) {
					pattern(word, "[ ]014!--033--!!++006015010++!", word);
				}
				else if (pattern(word, "[ ]033")) {
					pattern(word, "[ ]!--033--!!++006++!", word);
				}
				else {
					pattern(word, "[_]!++006++!", word);
				}
				break;
			default:
				throw std::exception("Case of the word is undefind. Please call detect_case()");
				break;
			}
			break;
		case Number::Paucal:
			break;
		case Number::Plural:
			switch (case_to)
			{
			case Cases::None:
				throw std::exception("Case of the word is undefind. Please call detect_case()");
				break;
			case Cases::Nominative:
				if (pattern(word, "[ ]011")) {
					pattern(word, "[ ]!--011--!!++010++!", word);
				}
				else if (pattern(word, "[ ]012001")) {
					pattern(word, "[ ]012!--001--!!++010++!", word);
				}
				else if (pattern(word, "[ ]001")) {
					pattern(word, "[ ]!--001--!!++029++!", word);
				}
				else if (pattern(word, "[ ]033")) {
					pattern(word, "[ ]!--033--!!++010++!", word);
				}
				else if (pattern(word, "[ ]016012")) {
					pattern(word, "[ ]!--016012--!!++012010++!", word);
				}
				else if (pattern(word, "[ ]006012")) {
					pattern(word, "[ ]!--006012--!!++012010++!", word);
				}
				else if (pattern(word, "[ ]012")) {
					pattern(word, "[ ]!++010++!", word);
				}
				else if (pattern(word, "[ ]006")) {
					pattern(word, "[ ]!--006--!!++033++!", word);
				}
				else if (pattern(word, "[ ]007")) {
					pattern(word, "[ ]!--007--!!++033++!", word);
				}
				else {
					pattern(word, "[_]!++029++!", word);
				}
				break;
			case Cases::Genetive:
				if (pattern(word, "[ ]011")) {
					pattern(word, "[ ]!--011--!!++006003++!", word);
				}
				else if (pattern(word, "[ ]012001")) {
					pattern(word, "[ ]!--012001--!!++016012++!", word);
				}
				else if (pattern(word, "[ ]001")) {
					pattern(word, "[ ]!--001--!", word);
				}
				else if (pattern(word, "[ ]016012")) {
					pattern(word, "[ ]!--016012--!!++012016003++!", word);
				}
				else if (pattern(word, "[ ]006012")) {
					pattern(word, "[ ]!--006012--!!++012016003++!", word);
				}
				else if (pattern(word, "[ ]012")) {
					pattern(word, "[ ]!++016003++!", word);
				}
				else if (pattern(word, "[ ]006")) {
					pattern(word, "[ ]!++003++!", word);
				}
				else {
					pattern(word, "[_]!++016003++!", word);
				}
				break;
			case Cases::Dative:
				if (pattern(word, "[ ]011")) {
					pattern(word, "[ ]!--011--!!++033014++!", word);
				}
				else if (pattern(word, "[ ]012001")) {
					pattern(word, "[ ]!--012001--!!++016012++!", word);
				}
				else if (pattern(word, "[ ]001")) {
					pattern(word, "[ ]!--001--!", word);
				}
				else if (pattern(word, "[ ]016012")) {
					pattern(word, "[ ]!--016012--!!++012016003++!", word);
				}
				else if (pattern(word, "[ ]006012")) {
					pattern(word, "[ ]!--006012--!!++012016003++!", word);
				}
				else if (pattern(word, "[ ]012")) {
					pattern(word, "[ ]!++016003++!", word);
				}
				else if (pattern(word, "[ ]006")) {
					pattern(word, "[ ]!++003++!", word);
				}
				else {
					pattern(word, "[_]!++016003++!", word);
				}
				break;
			case Cases::Accusative:
				break;
			case Cases::Instrumental:
				break;
			case Cases::Prepositional:
				break;
			default:
				throw std::exception("Case of the word is undefind. Please call detect_case()");
				break;
			}
			break;
		default:
			throw std::exception("Number of the word is undefind. Please call detect_number()");
			break;
		}
	}
	catch (std::exception& _exception) {
		std::cout << "[Alert] " << _exception.what() << "\n";
	}
	
	word_case = case_to;
	word_number = number_to;
	return word;
}

std::string Noun::to_string() {
	return word;
}

std::string Noun::serialize() {
	std::string _serialized = (std::string)"{" +
		"\"word\":\"" + this->word + "\"," +
		"\"word_case\":\"";
	switch (word_case)
	{
	case Cases::None:
		_serialized += "None";
		break;
	case Cases::Nominative:
		_serialized += "Nominative";
		break;
	case Cases::Genetive:
		_serialized += "Genetive";
		break;
	case Cases::Dative:
		_serialized += "Dative";
		break;
	case Cases::Accusative:
		_serialized += "Accusative";
		break;
	case Cases::Instrumental:
		_serialized += "Instrumental";
		break;
	case Cases::Prepositional:
		_serialized += "Prepositional";
		break;
	default:
		_serialized += "None";
		break;
	}
	_serialized += "\",\"word_number\":\"";
	switch (word_number)
	{
	case Number::None:
		_serialized += "None";
		break;
	case Number::Singular:
		_serialized += "Singular";
		break;
	case Number::Paucal:
		_serialized += "Paucal";
		break;
	case Number::Plural:
		_serialized += "Plural";
		break;
	default:
		_serialized += "None";
		break;
	}
	_serialized += "\",\"word_nominative\":\"" + word_nominative + "\"";
	_serialized += "}";
	return _serialized;
}

Noun Noun::deserialize(std::string _serialized_string) {
	std::string _reading_str = _serialized_string;
	std::string _word = "";
	std::string _word_nominative = "";
	Cases _case = Cases::None;
	Number _number = Number::None;
	try {
		if (_reading_str.size() < 9) throw std::invalid_argument("Not a JSON format");
		if (_serialized_string.substr(0, 9) != "{\"word\":\"") throw std::invalid_argument("Not a JSON format");
		_reading_str = _reading_str.substr(9);
		while (true)
		{
			if (_reading_str.size() == 0) {
				throw std::invalid_argument("\'word\' argument is not recognized properly");
			}
			else {
				if (_reading_str[0] == (char)34) {
					_reading_str = _reading_str.substr(1);
					break;
				}
				else {
					_word += _reading_str[0];
					_reading_str = _reading_str.substr(1);
				}
			}
		}

		if (_reading_str.size() < 14) throw std::invalid_argument("Not a JSON format");
		if (_reading_str.substr(0, 14) != ",\"word_case\":\"") throw std::invalid_argument("Not a JSON format");
		_reading_str = _reading_str.substr(14);

		if (_reading_str.size() < 4) {
			throw std::invalid_argument("\'word_case\' argument is not recognized properly");
		}
		std::string _case_string = _reading_str.substr(0, 4);
		if (_case_string == "None") {
			_reading_str = _reading_str.substr(4);
			_case = Cases::None;
		} 
		else if (_case_string == "Nomi") {
			if (_reading_str.size() >= 10 && _reading_str.substr(0, 10) == "Nominative") {
				_reading_str = _reading_str.substr(10);
				_case = Cases::Nominative;
			}
			else {
				throw std::invalid_argument("\'word_case\' argument is not recognized properly");
			}
		}
		else if (_case_string == "Gene") {
			if (_reading_str.size() >= 8 && _reading_str.substr(0, 8) == "Genetive") {
				_reading_str = _reading_str.substr(8);
				_case = Cases::Genetive;
			}
			else {
				throw std::invalid_argument("\'word_case\' argument is not recognized properly");
			}
		}
		else if (_case_string == "Dati") {
			if (_reading_str.size() >= 6 && _reading_str.substr(0, 6) == "Dative") {
				_reading_str = _reading_str.substr(6);
				_case = Cases::Dative;
			}
			else {
				throw std::invalid_argument("\'word_case\' argument is not recognized properly");
			}
		}
		else if (_case_string == "Accu") {
			if (_reading_str.size() >= 10 && _reading_str.substr(0, 10) == "Accusative") {
				_reading_str = _reading_str.substr(10);
				_case = Cases::Accusative;
			}
			else {
				throw std::invalid_argument("\'word_case\' argument is not recognized properly");
			}
		}
		else if (_case_string == "Inst") {
			if (_reading_str.size() >= 12 && _reading_str.substr(0, 12) == "Instrumental") {
				_reading_str = _reading_str.substr(12);
				_case = Cases::Instrumental;
			}
			else {
				throw std::invalid_argument("\'word_case\' argument is not recognized properly");
			}
		}
		else if (_case_string == "Prep") {
			if (_reading_str.size() >= 13 && _reading_str.substr(0, 13) == "Prepositional") {
				_reading_str = _reading_str.substr(13);
				_case = Cases::Prepositional;
			}
			else {
				throw std::invalid_argument("\'word_case\' argument is not recognized properly");
			}
		}
		else {
			throw std::invalid_argument("\'word_case\' argument is not recognized properly");
		}

		if (_reading_str.size() < 17) throw std::invalid_argument("Not a JSON format");
		if (_reading_str.substr(0, 17) != "\",\"word_number\":\"") throw std::invalid_argument("Not a JSON format");
		_reading_str = _reading_str.substr(17);

		if (_reading_str.size() < 4) {
			throw std::invalid_argument("\'word_number\' argument is not recognized properly");
		}
		std::string _number_string = _reading_str.substr(0, 4);
		if (_number_string == "None") {
			_reading_str = _reading_str.substr(4);
			_number = Number::None;
		}
		else if (_number_string == "Sing") {
			if (_reading_str.size() >= 8 && _reading_str.substr(0, 8) == "Singular") {
				_reading_str = _reading_str.substr(8);
				_number = Number::Singular;
			}
			else {
				throw std::invalid_argument("\'word_number\' argument is not recognized properly");
			}
		}
		else if (_number_string == "Pauc") {
			if (_reading_str.size() >= 6 && _reading_str.substr(0, 6) == "Paucal") {
				_reading_str = _reading_str.substr(6);
				_number = Number::Paucal;
			}
			else {
				throw std::invalid_argument("\'word_number\' argument is not recognized properly");
			}
		}
		else if (_number_string == "Plur") {
			if (_reading_str.size() >= 6 && _reading_str.substr(0, 6) == "Plural") {
				_reading_str = _reading_str.substr(6);
				_number = Number::Plural;
			}
			else {
				throw std::invalid_argument("\'word_number\' argument is not recognized properly");
			}
		}
		else {
			throw std::invalid_argument("\'word_number\' argument is not recognized properly");
		}

		if (_reading_str.size() < 21) throw std::invalid_argument("Not a JSON format");
		if (_reading_str.substr(0, 21) != "\",\"word_nominative\":\"") throw std::invalid_argument("Not a JSON format");
		_reading_str = _reading_str.substr(21);
		while (true)
		{
			if (_reading_str.size() == 0) {
				throw std::invalid_argument("\'word_nominative\' argument is not recognized properly");
			}
			else {
				if (_reading_str[0] == (char)34) {
					_reading_str = _reading_str.substr(1);
					break;
				}
				else {
					_word_nominative += _reading_str[0];
					_reading_str = _reading_str.substr(1);
				}
			}
		}
		if (_reading_str.size() < 1) throw std::invalid_argument("Not a JSON format");
		if (_reading_str != "}") throw std::invalid_argument("Not a JSON format");

		Noun _return_noun(_word, _case, _number);
		_return_noun.word_nominative = _word_nominative;
		return _return_noun;
	} 
	catch (std::invalid_argument const& _exception) {
		std::cout << "[Alert] " << _exception.what() << std::endl;
		Noun _exception_no_word("");
		return _exception_no_word;
	}
	Noun _return_no_word("");
	return _return_no_word;
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
	else if (!strcmp(_triplet, "[_]")) {
		// All the rest letters
		int _str_length = str_to_compare.size();
		if (pattern(str_to_compare.substr(_str_length), _pattern.substr(3), _new_temp_string, _eraser_mode)) {
			changed_string = str_to_compare.substr(0, _str_length) + _new_temp_string;
			return true;
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

Adjective::Adjective(std::string word_adj_only, Cases adj_case, Number adj_number, Gender adj_gender) {
	word = word_adj_only;
	word_case = adj_case;
	word_number = adj_number;
	word_gender = adj_gender;
}

std::string Adjective::to_string() {
	return word;
}

void Adjective::to_nominative() {

}

std::string Adjective::change_case(Cases case_to) {
	if (case_to == word_case) { return word; }
	to_nominative();
	switch (case_to)
	{
	case Cases::Genetive:
		if (pattern(word, "[ ]011")) {
			pattern(word, "[ ]!--011--!!++033++!", word);
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
			pattern(word, "[_]!++001++!", word);
		}
		break;
	case Cases::Dative:
		if (pattern(word, "[ ]011")) {
			pattern(word, "[ ]!--011--!!++032++!", word);
		}
		else if (pattern(word, "[ ]001")) {
			pattern(word, "[ ]!--001--!!++006++!", word);
		}
		else if (pattern(word, "[ ]014033")) {
			pattern(word, "[ ]014!--033--!!++006015010++!", word);
		}
		else if (pattern(word, "[ ]033")) {
			pattern(word, "[ ]!--033--!!++006++!", word);
		}
		else if (pattern(word, "[ ]008030")) {
			pattern(word, "[ ]008!--030--!!++010++!", word);
		}
		else if (pattern(word, "[ ]026030")) {
			pattern(word, "[ ]026!--030--!!++010++!", word);
		}
		else if (pattern(word, "[ ]030")) {
			pattern(word, "[ ]!--030--!!++032++!", word);
		}
		else {
			pattern(word, "[_]!++021++!", word);
		}
		break;
	case Cases::Accusative:
		if (pattern(word, "[ ]011")) {
			pattern(word, "[ ]!--011--!!++033++!", word);
		}
		else if (pattern(word, "[ ]001")) {
			pattern(word, "[ ]!--001--!!++021++!", word);
		}
		else if (pattern(word, "[ ]033")) {
			pattern(word, "[ ]!--033--!!++032++!", word);
		}
		else if (pattern(word, "[ ]008030")) {

		}
		else if (pattern(word, "[ ]026030")) {

		}
		else if (pattern(word, "[ ]030")) {
			pattern(word, "[ ]!--030--!!++033++!", word);
		}
		break;
	case Cases::Instrumental:
		if (pattern(word, "[ ]011")) {
			pattern(word, "[ ]!--011--!!++006014++!", word);
		}
		else if (pattern(word, "[ ]001")) {
			pattern(word, "[ ]!--001--!!++016011++!", word);
		}
		else if (pattern(word, "[ ]014033")) {
			pattern(word, "[ ]014!--033--!!++006015006014++!", word);
		}
		else if (pattern(word, "[ ]033")) {
			pattern(word, "[ ]!--033--!!++006011++!", word);
		}
		else if (pattern(word, "[ ]008030")) {
			pattern(word, "[ ]008030!++032++!", word);
		}
		else if (pattern(word, "[ ]026030")) {
			pattern(word, "[ ]026030!++032++!", word);
		}
		else if (pattern(word, "[ ]018030")) {
			pattern(word, "[ ]018!--030--!!++006014++!", word);
		}
		else if (pattern(word, "[ ]013030")) {
			pattern(word, "[ ]013!--030--!!++006014++!", word);
		}
		else if (pattern(word, "[ ]019030")) {
			pattern(word, "[ ]019!--030--!!++006014++!", word);
		}
		else if (pattern(word, "[ ]030")) {
			pattern(word, "[ ]!--030--!!++007014++!", word);
		}
		else {
			pattern(word, "[_]!++016014++!", word);
		}
		break;
	case Cases::Prepositional:
		if (pattern(word, "[ ]010011")) {
			pattern(word, "[ ]010!--011--!!++010++!", word);
		}
		else if (pattern(word, "[ ]011")) {
			pattern(word, "[ ]!--011--!!++006++!", word);
		}
		else if (pattern(word, "[ ]001")) {
			pattern(word, "[ ]!--001--!!++006++!", word);
		}
		else if (pattern(word, "[ ]014033")) {
			pattern(word, "[ ]014!--033--!!++006015010++!", word);
		}
		else if (pattern(word, "[ ]033")) {
			pattern(word, "[ ]!--033--!!++006++!", word);
		}
		else {
			pattern(word, "[_]!++006++!", word);
		}
		break;
	default:
		break;
	}
	word_case = case_to;
	return word;
}

std::string Numeral::num_to_str(int _number, Cases _case, Gender _gender, Number _gnumber) {
	int _ones = _number % 10;
	int _tens = _number % 100 / 10;
	int _hundreds = _number / 100;
	std::string _numstr = "";
	switch (_hundreds)
	{
	case 1:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "���";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Instrumental:
		case Cases::Prepositional:
			_numstr += "���";
			break;
		default:
			break;
		}
		break;
	case 2:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "������";
			break;
		case Cases::Genetive:
			_numstr += "�������";
			break;
		case Cases::Dative:
			_numstr += "��������";
			break;
		case Cases::Instrumental:
			_numstr += "����������";
			break;
		case Cases::Prepositional:
			_numstr += "��������";
			break;
		default:
			break;
		}
		break;
	case 3:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "������";
			break;
		case Cases::Genetive:
			_numstr += "������";
			break;
		case Cases::Dative:
			_numstr += "�������";
			break;
		case Cases::Instrumental:
			_numstr += "����������";
			break;
		case Cases::Prepositional:
			_numstr += "�������";
			break;
		default:
			break;
		}
		break;
	case 4:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "���������";
			break;
		case Cases::Genetive:
			_numstr += "���������";
			break;
		case Cases::Dative:
			_numstr += "����������";
			break;
		case Cases::Instrumental:
			_numstr += "�������������";
			break;
		case Cases::Prepositional:
			_numstr += "����������";
			break;
		default:
			break;
		}
		break;
	case 5:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "�������";
			break;
		case Cases::Genetive:
			_numstr += "�������";
			break;
		case Cases::Dative:
			_numstr += "��������";
			break;
		case Cases::Instrumental:
			_numstr += "����������";
			break;
		case Cases::Prepositional:
			_numstr += "��������";
			break;
		default:
			break;
		}
		break;
	case 6:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "��������";
			break;
		case Cases::Genetive:
			_numstr += "��������";
			break;
		case Cases::Dative:
			_numstr += "���������";
			break;
		case Cases::Instrumental:
			_numstr += "�����������";
			break;
		case Cases::Prepositional:
			_numstr += "���������";
			break;
		default:
			break;
		}
		break;
	case 7:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "�������";
			break;
		case Cases::Genetive:
			_numstr += "�������";
			break;
		case Cases::Dative:
			_numstr += "��������";
			break;
		case Cases::Instrumental:
			_numstr += "����������";
			break;
		case Cases::Prepositional:
			_numstr += "��������";
			break;
		default:
			break;
		}
		break;
	case 8:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "���������";
			break;
		case Cases::Genetive:
			_numstr += "���������";
			break;
		case Cases::Dative:
			_numstr += "����������";
			break;
		case Cases::Instrumental:
			_numstr += "������������";
			break;
		case Cases::Prepositional:
			_numstr += "����������";
			break;
		default:
			break;
		}
		break;
	case 9:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "���������";
			break;
		case Cases::Genetive:
			_numstr += "���������";
			break;
		case Cases::Dative:
			_numstr += "����������";
			break;
		case Cases::Instrumental:
			_numstr += "������������";
			break;
		case Cases::Prepositional:
			_numstr += "����������";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	switch (_tens)
	{
	case 1:
		_numstr += "���";
		break;
	case 2:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "��������";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "��������";
			break;
		case Cases::Instrumental:
			_numstr += "���������";
			break;
		default:
			break;
		}
		break;
	case 3:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "��������";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "��������";
			break;
		case Cases::Instrumental:
			_numstr += "���������";
			break;
		default:
			break;
		}
		break;
	case 4:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "�����";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
		case Cases::Instrumental:
			_numstr += "������";
			break;
		default:
			break;
		}
		break;
	case 5:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "���������";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "����������";
			break;
		case Cases::Instrumental:
			_numstr += "������������";
			break;
		default:
			break;
		}
		break;
	case 6:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "����������";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "�����������";
			break;
		case Cases::Instrumental:
			_numstr += "�������������";
			break;
		default:
			break;
		}
		break;
	case 7:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "���������";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "����������";
			break;
		case Cases::Instrumental:
			_numstr += "������������";
			break;
		default:
			break;
		}
		break;
	case 8:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "�����������";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "������������";
			break;
		case Cases::Instrumental:
			_numstr += "��������������";
			break;
		default:
			break;
		}
		break;
	case 9:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "���������";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
		case Cases::Instrumental:
			_numstr += "���������";
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
	switch (_ones)
	{
	case 1:
		switch (_case)
		{
		case Cases::Nominative:
			if (_gnumber == Number::Plural) {
				_numstr += "����";
			}
			else {
				switch (_gender)
				{
				case Gender::Masculine:
					_numstr += "����";
					break;
				case Gender::Feminine:
					_numstr += "����";
					break;
				case Gender::Neuter:
					_numstr += "����";
					break;
				default:
					break;
				}
			}
			break;
		case Cases::Accusative:
			if (_gnumber == Number::Plural) {
				_numstr += "�����";
			}
			else {
				switch (_gender)
				{
				case Gender::Masculine:
					_numstr += "����";
					break;
				case Gender::Feminine:
					_numstr += "����";
					break;
				case Gender::Neuter:
					_numstr += "����";
					break;
				default:
					break;
				}
			}
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "��������";
			break;
		case Cases::Instrumental:
			_numstr += "���������";
			break;
		default:
			break;
		}
		break;
	case 2:
		_numstr += "���";
		break;
	case 3:
		_numstr += "���";
		break;
	case 4:
		_numstr += "������";
		break;
	case 5:
		_numstr += "����";
		break;
	case 6:
		_numstr += "�����";
		break;
	case 7:
		_numstr += "����";
		break;
	case 8:
		_numstr += "������";
		break;
	case 9:
		_numstr += "������";
		break;
	default:
		break;
	}
	return _numstr;
}

Numeral::Numeral(int number) {

}

std::string Numeral::to_string() {
	return word;
}

Word::Word(std::string russian_word) {
	word = russian_word;
}