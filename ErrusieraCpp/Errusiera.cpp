#include "Errusiera.h"

// Errusiera 1.0.7-beta1
// Dmitry Balabanov | github.com/dmittrj/Errusiera

bool Noun::yo = true;

Noun::Noun(std::string word_noun_only) {
	word = word_noun_only;
}

Noun::Noun(std::string word_noun_only, Cases noun_case, Number noun_number, Gender noun_gender, Animacy noun_animacy) {
	word = word_noun_only;
	word_case = noun_case;
	word_number = noun_number;
	word_gender = noun_gender;
	word_animacy = noun_animacy;

	if (word_case == Cases::Nominative && word_number == Number::Singular) {
		word_default = word;
	}
}

Noun::~Noun() {

}

std::string Noun::to_default() {
	if (word_default != "") {
		return word_default;
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
	std::string _word = conjugate(case_to, number_to);
	this->word = _word;
	word_case = case_to;
	word_number = number_to;
	return _word;
}

std::string Noun::to_string() {
	return word;
}

std::string Noun::conjugate(Cases case_to, Number number_to) {
	if (case_to == word_case && number_to == word_number) { return word; }
	std::string _word = to_default();
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
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++033++!", _word);
				}
				else if (pattern(_word, "[ ]012001")) {
					//ка
					pattern(_word, "[ ]012!--001--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]004001")) {
					//га
					pattern(_word, "[ ]004!--001--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]!--001--!!++029++!", _word);
				}
				else if (pattern(_word, "[ ]014033")) {
					pattern(_word, "[ ]014!--033--!!++006015010++!", _word);
				}
				else if (pattern(_word, "[ ]033")) {
					pattern(_word, "[ ]!--033--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]008030")) {
					pattern(_word, "[ ]008!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]026030")) {
					pattern(_word, "[ ]026!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]005030")) {
					//дь -> ди
					pattern(_word, "[ ]005!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]030")) {
					pattern(_word, "[ ]!--030--!!++033++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льца
					pattern(_word, "[ ]013!--006024--!!++030024001++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					//ец -> ца
					pattern(_word, "[ ]!--006024--!!++024001++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> а
					pattern(_word, "[ ]!--016--!!++001++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					//е -> я
					pattern(_word, "[ ]!--006--!!++033++!", _word);
				}
				else {
					pattern(_word, "[_]!++001++!", _word);
				}
				break;
			case Cases::Dative:
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++032++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]!--001--!!++006++!", _word);
				}
				else if (pattern(_word, "[ ]014033")) {
					pattern(_word, "[ ]014!--033--!!++006015010++!", _word);
				}
				else if (pattern(_word, "[ ]033")) {
					pattern(_word, "[ ]!--033--!!++006++!", _word);
				}
				else if (pattern(_word, "[ ]008030")) {
					pattern(_word, "[ ]008!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]026030")) {
					pattern(_word, "[ ]026!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]005030")) {
					//дь -> ди
					pattern(_word, "[ ]005!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]030")) {
					pattern(_word, "[ ]!--030--!!++032++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льцу
					pattern(_word, "[ ]013!--006024--!!++030024021++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					pattern(_word, "[ ]!--006024--!!++024021++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> у
					pattern(_word, "[ ]!--016--!!++021++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					//е -> ю
					pattern(_word, "[ ]!--006--!!++032++!", _word);
				}
				else {
					pattern(_word, "[_]!++021++!", _word);
				}
				break;
			case Cases::Accusative:
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++033++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]!--001--!!++021++!", _word);
				}
				else if (pattern(_word, "[ ]033")) {
					pattern(_word, "[ ]!--033--!!++032++!", _word);
				}
				else if (pattern(_word, "[ ]005030")) {
					//дь -> дь

				}
				else if (pattern(_word, "[ ]026030")) {
					//шь -> шь
				}
				else if (pattern(_word, "[ ]030")) {
					pattern(_word, "[ ]!--030--!!++033++!", _word);
				}
				else if (pattern(_word, "[ ]006024") && word_animacy == Animacy::Animate) {
					pattern(_word, "[ ]!--006024--!!++024001++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					
				}
				else {

					if (word_animacy == Animacy::Animate) {
						pattern(_word, "[ ]!++001++!", _word);
					}
				}
				break;
			case Cases::Instrumental:
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++006014++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]!--001--!!++016011++!", _word);
				}
				else if (pattern(_word, "[ ]014033")) {
					pattern(_word, "[ ]014!--033--!!++006015006014++!", _word);
				}
				else if (pattern(_word, "[ ]033")) {
					pattern(_word, "[ ]!--033--!!++006011++!", _word);
				}
				else if (pattern(_word, "[ ]008030")) {
					pattern(_word, "[ ]008030!++032++!", _word);
				}
				else if (pattern(_word, "[ ]026030")) {
					pattern(_word, "[ ]026030!++032++!", _word);
				}
				else if (pattern(_word, "[ ]018030")) {
					pattern(_word, "[ ]018!--030--!!++006014++!", _word);
				}
				else if (pattern(_word, "[ ]013030")) {
					pattern(_word, "[ ]013!--030--!!++006014++!", _word);
				}
				else if (pattern(_word, "[ ]019030")) {
					pattern(_word, "[ ]019!--030--!!++006014++!", _word);
				}
				else if (pattern(_word, "[ ]005030")) {
					//дь -> дью
					pattern(_word, "[ ]005030!++032++!", _word);
				}
				else if (pattern(_word, "[ ]030")) {
					pattern(_word, "[ ]!--030--!!++007014++!", _word);
				}
				else if (pattern(_word, "002016018006024")) {
					//борец -> борцом
					pattern(_word, "002016018!--006024--!!++024016014++!", _word);
				}
				else if (pattern(_word, "[ ]016015006024")) {
					//гонец -> гонцом
					pattern(_word, "[ ]016015!--006024--!!++024016014++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льцем
					pattern(_word, "[ ]013!--006024--!!++030024006014++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					pattern(_word, "[ ]!--006024--!!++024006014++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> ом
					pattern(_word, "[ ]!++014++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					//е -> ем
					pattern(_word, "[_]!++014++!", _word);
				}
				else {
					pattern(_word, "[_]!++016014++!", _word);
				}
				break;
			case Cases::Prepositional:
				if (pattern(_word, "[ ]010011")) {
					pattern(_word, "[ ]010!--011--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++006++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]!--001--!!++006++!", _word);
				}
				else if (pattern(_word, "[ ]014033")) {
					pattern(_word, "[ ]014!--033--!!++006015010++!", _word);
				}
				else if (pattern(_word, "[ ]010033")) {
					pattern(_word, "[ ]010!--033--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]005030")) {
					//дь -> ди
					pattern(_word, "[ ]005!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]026030")) {
					//шь -> ши
					pattern(_word, "[ ]026!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]033")) {
					pattern(_word, "[ ]!--033--!!++006++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льце
					pattern(_word, "[ ]013!--006024--!!++030024006++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					pattern(_word, "[ ]!--006024--!!++024006++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> е
					pattern(_word, "[ ]!--016--!!++006++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					//е -> и
					pattern(_word, "[ ]!--006--!!++010++!", _word);
				}
				else {
					pattern(_word, "[_]!++006++!", _word);
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
			_Siera_NominativeCase:
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++010++!", _word);
				}
				else if (pattern(_word, "019020021013")) {
					//стул -> стулья
					pattern(_word, "[ ]!++030033++!", _word);
				}
				else if (pattern(_word, "[ ]012001")) {
					//ка
					pattern(_word, "[ ]012!--001--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]004001")) {
					//га
					pattern(_word, "[ ]004!--001--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]!--001--!!++029++!", _word);
				}
				else if (pattern(_word, "[ ]033")) {
					pattern(_word, "[ ]!--033--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]016012")) {
					pattern(_word, "[ ]!--016012--!!++012010++!", _word);
				}
				else if (pattern(_word, "[ ]006012")) {
					pattern(_word, "[ ]!--006012--!!++012010++!", _word);
				}
				else if (pattern(_word, "[ ]012")) {
					pattern(_word, "[ ]!++010++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					pattern(_word, "[ ]!--006--!!++033++!", _word);
				}
				else if (pattern(_word, "[ ]007")) {
					pattern(_word, "[ ]!--007--!!++033++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льцы
					pattern(_word, "[ ]013!--006024--!!++030024029++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					pattern(_word, "[ ]!--006024--!!++024029++!", _word);
				}
				else if (pattern(_word, "[ ]030")) {
					//ь -> и
					pattern(_word, "[ ]!--030--!!++010++!", _word);
				}
				else if (pattern(_word, "[ ]025")) {
					//ч -> чи
					pattern(_word, "[ ]025!++010++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> а
					pattern(_word, "[ ]!--016--!!++001++!", _word);
				}
				else if (pattern(_word, "[ ]026")) {
					//ш -> ши
					pattern(_word, "[_]!++010++!", _word);
				}
				else {
					pattern(_word, "[_]!++029++!", _word);
				}
				break;
			case Cases::Genetive:
				_Siera_GenetiveCase:
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++006003++!", _word);
				}
				else if (pattern(_word, "019020021013")) {
					//стул -> стульев
					pattern(_word, "[ ]!++030006003++!", _word);
				}
				else if (pattern(_word, "[ ]012001")) {
					//ка
					pattern(_word, "[ ]!--012001--!!++006012++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]!--001--!", _word);
				}
				else if (pattern(_word, "[ ]016012")) {
					pattern(_word, "[ ]!--016012--!!++012016003++!", _word);
				}
				else if (pattern(_word, "[ ]006012")) {
					pattern(_word, "[ ]!--006012--!!++012016003++!", _word);
				}
				else if (pattern(_word, "[ ]012")) {
					pattern(_word, "[ ]!++016003++!", _word);
				}
				else if (pattern(_word, "[ ]010006")) {
					//ие -> ий
					pattern(_word, "[ ]010!--006--!!++011++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					pattern(_word, "[ ]!++003++!", _word);
				}
				else if (pattern(_word, "002016018006024")) {
					//борец -> борцов
					pattern(_word, "002016018!--006024--!!++024016003++!", _word);
				}
				else if (pattern(_word, "[ ]016015006024")) {
					//гонец -> гонцов
					pattern(_word, "[ ]016015!--006024--!!++024016003++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льцев
					pattern(_word, "[ ]013!--006024--!!++030024006003++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					pattern(_word, "[ ]!--006024--!!++024006003++!", _word);
				}
				else if (pattern(_word, "[ ]030")) {
					//ь -> ей
					pattern(_word, "[ ]!--030--!!++006011++!", _word);
				}
				else if (pattern(_word, "[ ]025")) {
					//ч -> чей
					pattern(_word, "[ ]025!++006011++!", _word);
				}
				else if (pattern(_word, "[ ]015016")) {
					//но -> он
					pattern(_word, "[ ]!--015016--!!++016015++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> _
					pattern(_word, "[ ]!--016--!", _word);
				}
				else if (pattern(_word, "[ ]026")) {
					//ш -> шей
					pattern(_word, "[_]!++006011++!", _word);
				}
				else {
					pattern(_word, "[_]!++016003++!", _word);
				}
				break;
			case Cases::Dative:
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++033014++!", _word);
				}
				else if (pattern(_word, "019020021013")) {
					//стул -> стульям
					pattern(_word, "[ ]!++030033014++!", _word);
				}
				else if (pattern(_word, "[ ]012001")) {
					pattern(_word, "[ ]012001!++014++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]001!++014++!", _word);
				}
				else if (pattern(_word, "[ ]016012")) {
					pattern(_word, "[ ]!--016012--!!++012001014++!", _word);
				}
				else if (pattern(_word, "[ ]006012")) {
					pattern(_word, "[ ]!--006012--!!++012001014++!", _word);
				}
				else if (pattern(_word, "[ ]012")) {
					pattern(_word, "[ ]!++001014++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					pattern(_word, "[ ]!--006--!!++033014++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льцам
					pattern(_word, "[ ]013!--006024--!!++030024001014++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					pattern(_word, "[ ]!--006024--!!++024001014++!", _word);
				}
				else if (pattern(_word, "[ ]026030")) {
					//шь -> шам
					pattern(_word, "[ ]026!--030--!!++001014++!", _word);
				}
				else if (pattern(_word, "[ ]030")) {
					//ь -> ям
					pattern(_word, "[ ]!--030--!!++033014++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> ам
					pattern(_word, "[ ]!--016--!!++001014++!", _word);
				}
				else {
					pattern(_word, "[_]!++001014++!", _word);
				}
				break;
			case Cases::Accusative:
				switch (word_animacy)
				{
				case Animacy::None:
					throw std::exception("Unknown form (please call detect_animacy())");
					break;
				case Animacy::Animate:
					goto _Siera_GenetiveCase;
					break;
				case Animacy::Inanimate:
					goto _Siera_NominativeCase;
					break;
				default:
					throw std::exception("Unknown form (please call detect_animacy())");
					break;
				}
				break;
			case Cases::Instrumental:
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++033014010++!", _word);
				}
				else if (pattern(_word, "019020021013")) {
					//стул -> стульями
					pattern(_word, "[ ]!++030033014010++!", _word);
				}
				else if (pattern(_word, "[ ]012001")) {
					pattern(_word, "[ ]012001!++014010++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]001!++014010++!", _word);
				}
				else if (pattern(_word, "[ ]016012")) {
					pattern(_word, "[ ]!--016012--!!++012001014010++!", _word);
				}
				else if (pattern(_word, "[ ]006012")) {
					pattern(_word, "[ ]!--006012--!!++012001014010++!", _word);
				}
				else if (pattern(_word, "[ ]012")) {
					pattern(_word, "[ ]!++001014010++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					pattern(_word, "[ ]!--006--!!++033014010++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льцами
					pattern(_word, "[ ]013!--006024--!!++030024001014010++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					pattern(_word, "[ ]!--006024--!!++024001014010++!", _word);
				}
				else if (pattern(_word, "[ ]026030")) {
					//шь -> шами
					pattern(_word, "[ ]026!--030--!!++001014010++!", _word);
				}
				else if (pattern(_word, "[ ]030")) {
					//ь -> ями
					pattern(_word, "[ ]!--030--!!++033014010++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> ами
					pattern(_word, "[ ]!--016--!!++001014010++!", _word);
				}
				else {
					pattern(_word, "[_]!++001014010++!", _word);
				}
				break;
			case Cases::Prepositional:
				if (pattern(_word, "[ ]011")) {
					pattern(_word, "[ ]!--011--!!++033023++!", _word);
				}
				else if (pattern(_word, "019020021013")) {
					//стул -> стульях
					pattern(_word, "[ ]!++030033023++!", _word);
				}
				else if (pattern(_word, "[ ]012001")) {
					pattern(_word, "[ ]012001!++023++!", _word);
				}
				else if (pattern(_word, "[ ]016012")) {
					pattern(_word, "[ ]!--016012--!!++012001023++!", _word);
				}
				else if (pattern(_word, "[ ]006012")) {
					pattern(_word, "[ ]!--006012--!!++012001023++!", _word);
				}
				else if (pattern(_word, "[ ]012")) {
					pattern(_word, "[ ]!++001023++!", _word);
				}
				else if (pattern(_word, "[ ]006")) {
					pattern(_word, "[ ]!--006--!!++033023++!", _word);
				}
				else if (pattern(_word, "[ ]013006024")) {
					//лец -> льцах
					pattern(_word, "[ ]013!--006024--!!++030024001023++!", _word);
				}
				else if (pattern(_word, "[ ]006024")) {
					pattern(_word, "[ ]!--006024--!!++024001023++!", _word);
				}
				else if (pattern(_word, "[ ]001")) {
					pattern(_word, "[ ]!++023++!", _word);
				}
				else if (pattern(_word, "[ ]026030")) {
					//шь -> шах
					pattern(_word, "[ ]026!--030--!!++001023++!", _word);
				}
				else if (pattern(_word, "[ ]030")) {
					//ь -> ях
					pattern(_word, "[ ]!--030--!!++033023++!", _word);
				}
				else if (pattern(_word, "[ ]016")) {
					//о -> ах
					pattern(_word, "[ ]!--016--!!++001023++!", _word);
				}
				else {
					pattern(_word, "[_]!++001023++!", _word);
				}
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
		return (std::string)"[Alert] " + _exception.what() + "\n";
	}
	return _word;
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
	_serialized += "\",\"word_gender\":\"";
	switch (word_gender)
	{
	case Gender::None:
		_serialized += "None";
		break;
	case Gender::Feminine:
		_serialized += "Feminine";
		break;
	case Gender::Masculine:
		_serialized += "Masculine";
		break;
	case Gender::Neuter:
		_serialized += "Neuter";
		break;
	default:
		_serialized += "None";
		break;
	}
	_serialized += "\",\"word_animacy\":\"";
	switch (word_animacy)
	{
	case Animacy::None:
		_serialized += "None";
		break;
	case Animacy::Animate:
		_serialized += "Animate";
		break;
	case Animacy::Inanimate:
		_serialized += "Inanimate";
		break;
	default:
		_serialized += "None";
		break;
	}
	_serialized += "\",\"word_nominative\":\"" + word_default + "\"";
	_serialized += "}";
	return _serialized;
}

Gender Noun::detect_gender() {
	std::string _old_word = word;
	to_default();
	if (pattern(word, "[]001") || pattern(word, "[]033") || pattern(word, "[]030")) {
		word = _old_word;
		return Gender::Feminine;
	} 
	else if (pattern(word, "[]016") || pattern(word, "[]006")) {
		word = _old_word;
		return Gender::Neuter;
	}
	else {
		word = _old_word;
		return Gender::Masculine;
	}
}

Noun Noun::deserialize(std::string _serialized_string) {
	std::string _reading_str = _serialized_string;
	std::string _word = "";
	std::string _word_nominative = "";
	Cases _case = Cases::None;
	Number _number = Number::None;
	Gender _gender = Gender::None;
	Animacy _animacy = Animacy::None;
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

		//Number
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

		//Gender
		if (_reading_str.size() < 17) throw std::invalid_argument("Not a JSON format");
		if (_reading_str.substr(0, 17) != "\",\"word_gender\":\"") throw std::invalid_argument("Not a JSON format");
		_reading_str = _reading_str.substr(17);

		if (_reading_str.size() < 4) {
			throw std::invalid_argument("\'word_gender\' argument is not recognized properly");
		}
		std::string _gender_string = _reading_str.substr(0, 4);
		if (_gender_string == "None") {
			_reading_str = _reading_str.substr(4);
			_gender = Gender::None;
		}
		else if (_gender_string == "Masc") {
			if (_reading_str.size() >= 9 && _reading_str.substr(0, 9) == "Masculine") {
				_reading_str = _reading_str.substr(9);
				_gender = Gender::Masculine;
			}
			else {
				throw std::invalid_argument("\'word_gender\' argument is not recognized properly");
			}
		}
		else if (_gender_string == "Femi") {
			if (_reading_str.size() >= 8 && _reading_str.substr(0, 8) == "Feminine") {
				_reading_str = _reading_str.substr(8);
				_gender = Gender::Feminine;
			}
			else {
				throw std::invalid_argument("\'word_gender\' argument is not recognized properly");
			}
		}
		else if (_gender_string == "Neut") {
			if (_reading_str.size() >= 6 && _reading_str.substr(0, 6) == "Neuter") {
				_reading_str = _reading_str.substr(6);
				_gender = Gender::Neuter;
			}
			else {
				throw std::invalid_argument("\'word_gender\' argument is not recognized properly");
			}
		}
		else {
			throw std::invalid_argument("\'word_gender\' argument is not recognized properly");
		}


		//Animacy
		if (_reading_str.size() < 18) throw std::invalid_argument("Not a JSON format");
		if (_reading_str.substr(0, 18) != "\",\"word_animacy\":\"") throw std::invalid_argument("Not a JSON format");
		_reading_str = _reading_str.substr(18);

		if (_reading_str.size() < 4) {
			throw std::invalid_argument("\'word_animacy\' argument is not recognized properly");
		}
		std::string _animacy_string = _reading_str.substr(0, 4);
		if (_animacy_string == "None") {
			_reading_str = _reading_str.substr(4);
			_animacy = Animacy::None;
		}
		else if (_animacy_string == "Anim") {
			if (_reading_str.size() >= 7 && _reading_str.substr(0, 7) == "Animate") {
				_reading_str = _reading_str.substr(7);
				_animacy = Animacy::Animate;
			}
			else {
				throw std::invalid_argument("\'word_animacy\' argument is not recognized properly");
			}
		}
		else if (_animacy_string == "Inan") {
			if (_reading_str.size() >= 9 && _reading_str.substr(0, 9) == "Inanimate") {
				_reading_str = _reading_str.substr(9);
				_animacy = Animacy::Inanimate;
			}
			else {
				throw std::invalid_argument("\'word_animacy\' argument is not recognized properly");
			}
		}
		else {
			throw std::invalid_argument("\'word_animacy\' argument is not recognized properly");
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

		Noun _return_noun(_word, _case, _number,_gender, _animacy);
		_return_noun.word_default = _word_nominative;
		return _return_noun;
	} 
	catch (std::invalid_argument const& _exception) {
		return (std::string)"[Alert] " + _exception.what();
		Noun _exception_no_word("");
		return _exception_no_word;
	}
	Noun _return_no_word("");
	return _return_no_word;
}

Adjective Noun::build_adjective(Cases _case, Number _number, Gender _gender) {
	std::string _word = to_default();
	if (pattern(_word, "[ ]008001")) {
		//жа
		pattern(_word, "[_]!++015029011++!", _word);
	}
	else if (pattern(_word, "[ ]022001")) {
		//фа
		pattern(_word, "[ ]022!--001--!!++016003029011++!", _word);
	}
	else if (pattern(_word, "[ ]001")) {
		//а
		pattern(_word, "[ ]!--001--!!++015029011++!", _word);
	}
	Adjective _adjective(_word, Cases::Nominative, Number::Singular, Gender::Masculine);
	_adjective.change_word(_case, _number, _gender);
	return _adjective;
}

bool Noun::operator==(Noun _noun) {
	if (word != _noun.word) return false;
	if (word_animacy != _noun.word_animacy) return false;
	if (word_case != _noun.word_case) return false;
	if (word_default != _noun.word_default) return false;
	if (word_gender != _noun.word_gender) return false;
	if (word_number != _noun.word_number) return false;
	return true;
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

Adjective::~Adjective() {

}

std::string Adjective::to_string() {
	return word;
}

void Adjective::to_default() {

}

std::string Adjective::change_case(Cases case_to) {
	return change_word(case_to, word_number, word_gender);
}

std::string Adjective::change_number(Number number_to) {
	return change_word(word_case, number_to, word_gender);
}

std::string Adjective::change_gender(Gender gender_to) {
	return change_word(word_case, word_number, gender_to);
}

std::string Adjective::change_word(Cases case_to, Number number_to, Gender gender_to) {
	to_default();
	if (case_to == word_case && number_to == word_number && gender_to == word_gender) {
		return word;
	}
	try {
		switch (number_to)
		{
		case Number::None:
			throw std::exception("Number of the word is undefind. Please call detect_number()");
			break;
		case Number::Singular:
			switch (case_to)
			{
			case Cases::None:
				throw std::exception("Case of the word is undefind. Please call detect_case()");
				break;
			case Cases::Nominative:
				break;
			case Cases::Genetive:
				if (pattern(word, "[ ]029011")) {
					pattern(word, "[ ]!--029011--!!++016004016++!", word);
				} 
				else if (pattern(word, "[ ]016011")) {
					pattern(word, "[ ]016!--011--!!++004016++!", word);
				}
				else if (pattern(word, "[ ]010011")) {
					pattern(word, "[ ]!--010011--!!++006004016++!", word);
				}
				else if (pattern(word, "[ ]001033")) {
					pattern(word, "[ ]!--001033--!!++016011++!", word);
				}
				else if (pattern(word, "[ ]033033")) {
					pattern(word, "[ ]!--033033--!!++006011++!", word);
				}
				else if (pattern(word, "[ ]016006")) {
					pattern(word, "[ ]016!--006--!!++004016++!", word);
				}
				else if (pattern(word, "[ ]006006")) {
					pattern(word, "[ ]006!--006--!!++004016++!", word);
				}
				break;
			case Cases::Dative:
				if (pattern(word, "[ ]029011")) {
					pattern(word, "[ ]!--029011--!!++016014021++!", word);
				}
				else if (pattern(word, "[ ]016011")) {
					pattern(word, "[ ]016!--011--!!++016014021++!", word);
				}
				else if (pattern(word, "[ ]010011")) {
					pattern(word, "[ ]!--010011--!!++006014021++!", word);
				}
				else if (pattern(word, "[ ]001033")) {
					pattern(word, "[ ]!--001033--!!++016011++!", word);
				}
				else if (pattern(word, "[ ]033033")) {
					pattern(word, "[ ]!--033033--!!++006011++!", word);
				}
				else if (pattern(word, "[ ]016006")) {
					pattern(word, "[ ]016!--006--!!++014021++!", word);
				}
				else if (pattern(word, "[ ]006006")) {
					pattern(word, "[ ]006!--006--!!++014021++!", word);
				}
				break;
			case Cases::Accusative:
				break;
			case Cases::Instrumental:
				if (pattern(word, "[ ]029011")) {
					pattern(word, "[ ]!--029011--!!++029014++!", word);
				}
				else if (pattern(word, "[ ]016011")) {
					pattern(word, "[ ]016!--011--!!++029014++!", word);
				}
				else if (pattern(word, "[ ]010011")) {
					pattern(word, "[ ]!--010011--!!++010014++!", word);
				}
				else if (pattern(word, "[ ]001033")) {
					pattern(word, "[ ]!--001033--!!++016011++!", word);
				}
				else if (pattern(word, "[ ]033033")) {
					pattern(word, "[ ]!--033033--!!++006011++!", word);
				}
				else if (pattern(word, "[ ]016006")) {
					pattern(word, "[ ]!--016006--!!++029014++!", word);
				}
				else if (pattern(word, "[ ]006006")) {
					pattern(word, "[ ]!--006006--!!++010014++!", word);
				}
				break;
			case Cases::Prepositional:
				if (pattern(word, "[ ]029011")) {
					pattern(word, "[ ]!--029011--!!++016014++!", word);
				}
				else if (pattern(word, "[ ]016011")) {
					pattern(word, "[ ]016!--011--!!++016014++!", word);
				}
				else if (pattern(word, "[ ]010011")) {
					pattern(word, "[ ]!--010011--!!++006014++!", word);
				}
				else if (pattern(word, "[ ]001033")) {
					pattern(word, "[ ]!--001033--!!++016011++!", word);
				}
				else if (pattern(word, "[ ]033033")) {
					pattern(word, "[ ]!--033033--!!++006011++!", word);
				}
				else if (pattern(word, "[ ]016006")) {
					pattern(word, "[ ]016!--006--!!++014++!", word);
				}
				else if (pattern(word, "[ ]006006")) {
					pattern(word, "[ ]006!--006--!!++014++!", word);
				}
				break;
			default:
				break;
			}
			break;
		case Number::Plural:
			switch (case_to)
			{
			case Cases::None:
				throw std::exception("Case of the word is undefind. Please call detect_case()");
				break;
			case Cases::Nominative:
				break;
			case Cases::Genetive:
				if (pattern(word, "[ ]029006")) {
					pattern(word, "[ ]!--029006--!!++029023++!", word);
				}
				else if (pattern(word, "[ ]010006")) {
					pattern(word, "[ ]!--010006--!!++010023++!", word);
				}
				break;
			case Cases::Dative:
				if (pattern(word, "[ ]029006")) {
					pattern(word, "[ ]!--029006--!!++029014++!", word);
				}
				else if (pattern(word, "[ ]010006")) {
					pattern(word, "[ ]!--010006--!!++010014++!", word);
				}
				break;
			case Cases::Accusative:
				break;
			case Cases::Instrumental:
				if (pattern(word, "[ ]029006")) {
					pattern(word, "[ ]!--029006--!!++029014010++!", word);
				}
				else if (pattern(word, "[ ]010006")) {
					pattern(word, "[ ]!--010006--!!++010014010++!", word);
				}
				break;
			case Cases::Prepositional:
				if (pattern(word, "[ ]029006")) {
					pattern(word, "[ ]!--029006--!!++029023++!", word);
				}
				else if (pattern(word, "[ ]010006")) {
					pattern(word, "[ ]!--010006--!!++010023++!", word);
				}
				break;
			default:
				break;
			}
			break;
		default:
			break;
		}
	}
	catch (std::exception& _exception) {
		return (std::string)"[Alert] " + _exception.what() + "\n";
	}
	return word;
}

std::string Adjective::operator+(Noun _noun) {
	change_word(_noun.word_case, _noun.word_number, _noun.detect_gender());
	return word + " " + _noun.word;
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
			_numstr += "сто";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Instrumental:
		case Cases::Prepositional:
			_numstr += "ста";
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
			_numstr += "двести";
			break;
		case Cases::Genetive:
			_numstr += "двухсот";
			break;
		case Cases::Dative:
			_numstr += "двумстам";
			break;
		case Cases::Instrumental:
			_numstr += "двумястами";
			break;
		case Cases::Prepositional:
			_numstr += "двухстах";
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
			_numstr += "триста";
			break;
		case Cases::Genetive:
			_numstr += "трёхсот";
			break;
		case Cases::Dative:
			_numstr += "трёмстам";
			break;
		case Cases::Instrumental:
			_numstr += "тремястами";
			break;
		case Cases::Prepositional:
			_numstr += "трёхстах";
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
			_numstr += "четыреста";
			break;
		case Cases::Genetive:
			_numstr += "четырёхсот";
			break;
		case Cases::Dative:
			_numstr += "четырёмстам";
			break;
		case Cases::Instrumental:
			_numstr += "четырьмястами";
			break;
		case Cases::Prepositional:
			_numstr += "четырёхстах";
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
			_numstr += "пятьсот";
			break;
		case Cases::Genetive:
			_numstr += "пятисот";
			break;
		case Cases::Dative:
			_numstr += "пятистам";
			break;
		case Cases::Instrumental:
			_numstr += "пятьюстами";
			break;
		case Cases::Prepositional:
			_numstr += "пятистах";
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
			_numstr += "шестьсот";
			break;
		case Cases::Genetive:
			_numstr += "шестисот";
			break;
		case Cases::Dative:
			_numstr += "шестистам";
			break;
		case Cases::Instrumental:
			_numstr += "шестьюстами";
			break;
		case Cases::Prepositional:
			_numstr += "шестистах";
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
			_numstr += "семьсот";
			break;
		case Cases::Genetive:
			_numstr += "семисот";
			break;
		case Cases::Dative:
			_numstr += "семистам";
			break;
		case Cases::Instrumental:
			_numstr += "семьюстами";
			break;
		case Cases::Prepositional:
			_numstr += "семистах";
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
			_numstr += "восемьсот";
			break;
		case Cases::Genetive:
			_numstr += "восьмисот";
			break;
		case Cases::Dative:
			_numstr += "восьмистам";
			break;
		case Cases::Instrumental:
			_numstr += "восемьюстами";
			break;
		case Cases::Prepositional:
			_numstr += "восьмистах";
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
			_numstr += "девятьсот";
			break;
		case Cases::Genetive:
			_numstr += "девятисот";
			break;
		case Cases::Dative:
			_numstr += "девятистам";
			break;
		case Cases::Instrumental:
			_numstr += "девятьюстами";
			break;
		case Cases::Prepositional:
			_numstr += "девятистах";
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
		_numstr += "сто";
		break;
	case 2:
		switch (_case)
		{
		case Cases::Nominative:
		case Cases::Accusative:
			_numstr += "двадцать";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "двадцати";
			break;
		case Cases::Instrumental:
			_numstr += "двадцатью";
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
			_numstr += "тридцать";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "тридцати";
			break;
		case Cases::Instrumental:
			_numstr += "тридцатью";
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
			_numstr += "сорок";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
		case Cases::Instrumental:
			_numstr += "сорока";
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
			_numstr += "пятьдесят";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "пятидесяти";
			break;
		case Cases::Instrumental:
			_numstr += "пятьюдесятью";
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
			_numstr += "шестьдесят";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "шестидесяти";
			break;
		case Cases::Instrumental:
			_numstr += "шестьюдесятью";
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
			_numstr += "семьдесят";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "семидесяти";
			break;
		case Cases::Instrumental:
			_numstr += "семьюдесятью";
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
			_numstr += "восемьдесят";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "восьмидесяти";
			break;
		case Cases::Instrumental:
			_numstr += "восемьюдесятью";
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
			_numstr += "девяносто";
			break;
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
		case Cases::Instrumental:
			_numstr += "девяноста";
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
				_numstr += "одни";
			}
			else {
				switch (_gender)
				{
				case Gender::Masculine:
					_numstr += "один";
					break;
				case Gender::Feminine:
					_numstr += "одна";
					break;
				case Gender::Neuter:
					_numstr += "одно";
					break;
				default:
					break;
				}
			}
			break;
		case Cases::Accusative:
			if (_gnumber == Number::Plural) {
				_numstr += "одних";
			}
			else {
				switch (_gender)
				{
				case Gender::Masculine:
					_numstr += "один";
					break;
				case Gender::Feminine:
					_numstr += "одну";
					break;
				case Gender::Neuter:
					_numstr += "одно";
					break;
				default:
					break;
				}
			}
		case Cases::Genetive:
		case Cases::Dative:
		case Cases::Prepositional:
			_numstr += "двадцати";
			break;
		case Cases::Instrumental:
			_numstr += "двадцатью";
			break;
		default:
			break;
		}
		break;
	case 2:
		_numstr += "два";
		break;
	case 3:
		_numstr += "три";
		break;
	case 4:
		_numstr += "четыре";
		break;
	case 5:
		_numstr += "пять";
		break;
	case 6:
		_numstr += "шесть";
		break;
	case 7:
		_numstr += "семь";
		break;
	case 8:
		_numstr += "восемь";
		break;
	case 9:
		_numstr += "девять";
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