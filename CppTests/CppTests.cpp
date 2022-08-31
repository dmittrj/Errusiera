#include "pch.h"
#include "CppUnitTest.h"
#include <Windows.h>
#include "../ErrusieraCpp/Errusiera.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppTests
{
	TEST_CLASS(NounConjugation)
	{
	public:
		TEST_METHOD(Noun_Berry)
		{
			Noun test1("ягода", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"ягоды", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"ягоде", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"ягоду", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"ягодой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"ягоде", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"ягоды", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"ягод", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"ягодам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"ягоды", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"ягодами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"ягодах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Horse)
		{
			Noun test1("Ћошадь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			Assert::AreEqual((std::string)"Ћошади", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Ћошади", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Ћошадь", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Ћошадью", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Ћошади", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Ћошади", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Ћошадей", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Ћошад€м", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Ћошадей", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Ћошад€ми", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Ћошад€х", test1.change_case(Cases::Prepositional));
		}
	};

	TEST_CLASS(Serializing)
	{
	public:
		TEST_METHOD(Noun_Serializing)
		{
			Noun test1("—лово—лово—лово—лово", Cases::Accusative, Number::Plural, Gender::Masculine, Animacy::Animate);
			Noun test2 = Noun::deserialize(test1.serialize());
			Assert::IsTrue(test1 == test2);
		}
	};
}
