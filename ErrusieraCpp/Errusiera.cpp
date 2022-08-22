#include "Errusiera.h"

Noun::Noun(std::string word_noun_only) {
	word = word_noun_only;
}

Noun::Noun(std::string word_noun_only, Cases noun_case) {
	word = word_noun_only;
	word_case = noun_case;
}