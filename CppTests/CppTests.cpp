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
			Noun test1("Ягода", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Ягоды", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Ягоде", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Ягоду", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Ягодой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Ягоде", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Ягоды", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Ягод", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Ягодам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Ягоды", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Ягодами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Ягодах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Horse)
		{
			Noun test1("Лошадь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			Assert::AreEqual((std::string)"Лошади", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Лошади", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Лошадь", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Лошадью", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Лошади", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Лошади", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Лошадей", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Лошадям", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Лошадей", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Лошадями", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Лошадях", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Lamp)
		{
			Noun test1("Лампа", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Лампы", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Лампе", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Лампу", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Лампой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Лампе", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Лампы", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Ламп", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Лампам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Лампы", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Лампами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Лампах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Printer)
		{
			Noun test1("Принтер", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Принтера", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Принтеру", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Принтер", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Принтером", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Принтере", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Принтеры", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Принтеров", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Принтерам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Принтеры", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Принтерами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Принтерах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Book)
		{
			Noun test1("Книга", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Книги", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Книге", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Книгу", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Книгой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Книге", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Книги", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Книг", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Книгам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Книги", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Книгами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Книгах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Keyboard)
		{
			Noun test1("Клавиатура", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Клавиатуры", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Клавиатуре", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Клавиатуру", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Клавиатурой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Клавиатуре", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Клавиатуры", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Клавиатур", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Клавиатурам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Клавиатуры", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Клавиатурами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Клавиатурах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Mouse)
		{
			Noun test1("Мышь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			Assert::AreEqual((std::string)"Мыши", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Мыши", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Мышь", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Мышью", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Мыши", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Мыши", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Мышей", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Мышам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Мышей", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Мышами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Мышах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Cat)
		{
			Noun test1("Кот", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Animate);
			Assert::AreEqual((std::string)"Кота", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Коту", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Кота", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Котом", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Коте", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Коты", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Котов", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Котам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Котов", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Котами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Котах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Ball)
		{
			Noun test1("Мяч", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Мяча", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Мячу", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Мяч", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Мячом", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Мяче", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Мячи", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Мячей", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Мячам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Мячи", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Мячами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Мячах", test1.change_case(Cases::Prepositional));
		}
	};

	TEST_CLASS(Serializing)
	{
	public:
		TEST_METHOD(Noun_Serializing)
		{
			Noun test1("СловоСловоСловоСлово", Cases::Accusative, Number::Plural, Gender::Masculine, Animacy::Animate);
			Noun test2 = Noun::deserialize(test1.serialize());
			Assert::IsTrue(test1 == test2);
		}
	};
}
