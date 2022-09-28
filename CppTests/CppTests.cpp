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
			noun test1("Ягода", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
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
			noun test1("Лошадь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
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
			noun test1("Лампа", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
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
			noun test1("Принтер", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
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
			noun test1("Книга", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
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
			noun test1("Клавиатура", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
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
			noun test1("Мышь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
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
			noun test1("Кот", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Animate);
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
			noun test1("Мяч", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
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

		TEST_METHOD(Noun_Anthem)
		{
			noun test1("Гимн", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Гимна", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Гимну", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Гимн", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Гимном", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Гимне", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Гимны", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Гимнов", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Гимнам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Гимны", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Гимнами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Гимнах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Well)
		{
			noun test1("Колодец", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Колодца", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Колодцу", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Колодец", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Колодцем", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Колодце", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Колодцы", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Колодцев", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Колодцам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Колодцы", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Колодцами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Колодцах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Fighter)
		{
			noun test1("борец", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Animate);
			Assert::AreEqual((std::string)"борца", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"борцу", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"борца", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"борцом", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"борце", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"борцы", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"борцов", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"борцам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"борцов", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"борцами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"борцах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Frog)
		{
			noun test1("Лягушка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			Assert::AreEqual((std::string)"Лягушки", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Лягушке", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Лягушку", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Лягушкой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Лягушке", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Лягушки", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Лягушек", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Лягушкам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Лягушек", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Лягушками", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Лягушках", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_ThingToDo)
		{
			noun test1("Дело", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Дела", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Делу", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Дело", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Делом", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Деле", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Дела", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Дел", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Делам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Дела", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Делами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Делах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Chair)
		{
			noun test1("стул", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"стула", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"стулу", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"стул", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"стулом", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"стуле", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"стулья", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"стульев", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"стульям", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"стулья", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"стульями", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"стульях", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Wall)
		{
			noun test1("Стена", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Стены", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Стене", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Стену", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Стеной", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Стене", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Стены", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Стен", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Стенам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Стены", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Стенами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Стенах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Window)
		{
			noun test1("Окно", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Окна", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Окну", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Окно", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Окном", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Окне", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Окна", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Окон", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Окнам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Окна", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Окнами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Окнах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Finger)
		{
			noun test1("Палец", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Пальца", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Пальцу", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Палец", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Пальцем", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Пальце", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Пальцы", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Пальцев", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Пальцам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Пальцы", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Пальцами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Пальцах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Toy)
		{
			noun test1("Игрушка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Игрушки", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Игрушке", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Игрушку", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Игрушкой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Игрушке", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Игрушки", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Игрушек", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Игрушкам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Игрушки", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Игрушками", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Игрушках", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Acceleration)
		{
			noun test1("Ускорение", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Ускорения", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Ускорению", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Ускорение", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Ускорением", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Ускорении", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Ускорения", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Ускорений", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Ускорениям", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Ускорения", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Ускорениями", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Ускорениях", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Pencil)
		{
			noun test1("Карандаш", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Карандаша", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Карандашу", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Карандаш", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Карандашом", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Карандаше", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Карандаши", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Карандашей", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Карандашам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Карандаши", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Карандашами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Карандашах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Pen)
		{
			noun test1("Ручка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Ручки", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Ручке", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Ручку", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Ручкой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Ручке", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Ручки", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Ручек", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Ручкам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Ручки", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Ручками", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Ручках", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Fastening)
		{
			noun test1("Крепление", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Крепления", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Креплению", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Крепление", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Креплением", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Креплении", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Крепления", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Креплений", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Креплениям", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Крепления", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Креплениями", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Креплениях", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Mic)
		{
			noun test1("Микрофон", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Микрофона", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Микрофону", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Микрофон", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Микрофоном", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Микрофоне", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Микрофоны", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Микрофонов", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Микрофонам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Микрофоны", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Микрофонами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Микрофонах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_School)
		{
			noun test1("Школа", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Школы", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Школе", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Школу", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Школой", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Школе", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Школы", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Школ", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Школам", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Школы", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Школами", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Школах", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Plant)
		{
			noun test1("Растение", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::AreEqual((std::string)"Растения", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Растению", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Растение", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Растением", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Растении", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"Растения", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"Растений", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"Растениям", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"Растения", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"Растениями", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"Растениях", test1.change_case(Cases::Prepositional));
		}


		TEST_METHOD(Noun_Person)
		{
			noun test1("человек", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Animate);
			Assert::AreEqual((std::string)"человека", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"человеку", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"человека", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"человеком", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"человеке", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"люди", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"людей", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"людям", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"людей", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"людьми", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"людях", test1.change_case(Cases::Prepositional));
		}
	};

	TEST_CLASS(NounToAdjective)
	{
	public:
		TEST_METHOD(Noun_Berry)
		{
			noun test1("Ягода", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Ягодный", test2.to_string());
		}

		TEST_METHOD(Noun_Leather)
		{
			noun test1("Кожа", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Кожаный", test2.to_string());
		}

		TEST_METHOD(Noun_Cat)
		{
			noun test1("Кошка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Кошачий", test2.to_string());
		}

		TEST_METHOD(Noun_Foam)
		{
			noun test1("Поролон", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Поролоновый", test2.to_string());
		}

		TEST_METHOD(Noun_Building)
		{
			noun test1("Стройка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Строительный", test2.to_string());
		}

		TEST_METHOD(Noun_Genius)
		{
			noun test1("Гений", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Гениальный", test2.to_string());
		}

		TEST_METHOD(Noun_Balcony)
		{
			noun test1("Балкон", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Балконный", test2.to_string());
		}

		TEST_METHOD(Noun_Parent)
		{
			noun test1("Родитель", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Родительский", test2.to_string());
		}

		TEST_METHOD(Noun_Keyboard)
		{
			noun test1("Клавиатура", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Клавиатурный", test2.to_string());
		}

		TEST_METHOD(Noun_Concert)
		{
			noun test1("Концерт", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Концертный", test2.to_string());
		}

		TEST_METHOD(Noun_Memory)
		{
			noun test1("Память", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Памятный", test2.to_string());
		}

		TEST_METHOD(Noun_Midnight)
		{
			noun test1("Полночь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Полуночный", test2.to_string());
		}

		TEST_METHOD(Noun_Palace)
		{
			noun test1("Дворец", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Дворцовый", test2.to_string());
		}

		TEST_METHOD(Noun_Human)
		{
			noun test1("Человек", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Человеческий", test2.to_string());
		}

		TEST_METHOD(Noun_God)
		{
			noun test1("Бог", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Божий", test2.to_string());
		}

		TEST_METHOD(Noun_Fog)
		{
			noun test1("Туман", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Туманный", test2.to_string());
		}

		TEST_METHOD(Noun_Frost)
		{
			noun test1("Мороз", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Морозный", test2.to_string());
		}

		TEST_METHOD(Noun_Curiosity)
		{
			noun test1("Любопытство", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Любопытный", test2.to_string());
		}

		TEST_METHOD(Noun_List)
		{
			noun test1("Список", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Списочный", test2.to_string());
		}

		TEST_METHOD(Noun_Quality)
		{
			noun test1("Качество", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Качественный", test2.to_string());
		}

		TEST_METHOD(Noun_Carriage)
		{
			noun test1("Вагон", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Вагонный", test2.to_string());
		}

		TEST_METHOD(Noun_Kitchen)
		{
			noun test1("Кухня", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Кухонный", test2.to_string());
		}

		TEST_METHOD(Noun_Seed)
		{
			noun test1("Зерно", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Зерновой", test2.to_string());
		}

		TEST_METHOD(Noun_Old)
		{
			noun test1("Старик", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Старческий", test2.to_string());
		}

		TEST_METHOD(Noun_Cow)
		{
			noun test1("Корова", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Коровий", test2.to_string());
		}

		TEST_METHOD(Noun_Bird)
		{
			noun test1("Птица", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Птичий", test2.to_string());
		}

		TEST_METHOD(Noun_Food)
		{
			noun test1("еда", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"съедобный", test2.to_string());
		}

		TEST_METHOD(Noun_Thing)
		{
			noun test1("Штука", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Штучный", test2.to_string());
		}

		TEST_METHOD(Noun_Tooth)
		{
			noun test1("Зуб", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Зубной", test2.to_string());
		}

		TEST_METHOD(Noun_Morning)
		{
			noun test1("Утро", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Утренний", test2.to_string());
		}

		TEST_METHOD(Noun_Eternity)
		{
			noun test1("Вечность", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Вечный", test2.to_string());
		}

		TEST_METHOD(Noun_Wizard)
		{
			noun test1("Маг", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Магический", test2.to_string());
		}

		TEST_METHOD(Noun_North)
		{
			noun test1("Север", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Северный", test2.to_string());
		}

		TEST_METHOD(Noun_Cock)
		{
			noun test1("Петух", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Петушиный", test2.to_string());
		}

		TEST_METHOD(Noun_Side)
		{
			noun test1("Бок", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Боковой", test2.to_string());
		}

		TEST_METHOD(Noun_Harvest)
		{
			noun test1("Урожай", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Урожайный", test2.to_string());
		}

		TEST_METHOD(Noun_Village)
		{
			noun test1("Деревня", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Деревенский", test2.to_string());
		}

		TEST_METHOD(Noun_Church)
		{
			noun test1("Церковь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Церковный", test2.to_string());
		}

		TEST_METHOD(Noun_Window)
		{
			noun test1("Окно", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Оконный", test2.to_string());
		}

		TEST_METHOD(Noun_Wool)
		{
			noun test1("Шерсть", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Шерстяной", test2.to_string());
		}

		TEST_METHOD(Noun_Robot)
		{
			noun test1("Робот", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Роботизированный", test2.to_string());
		}

		TEST_METHOD(Noun_Album)
		{
			noun test1("Альбом", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Альбомный", test2.to_string());
		}

		TEST_METHOD(Noun_Fantastic)
		{
			noun test1("Фантастика", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Фантастический", test2.to_string());
		}

		TEST_METHOD(Noun_Note)
		{
			noun test1("Запись", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Записной", test2.to_string());
		}

		TEST_METHOD(Noun_Elevator)
		{
			noun test1("Лифт", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Лифтовый", test2.to_string());
		}

		TEST_METHOD(Noun_Diagnosis)
		{
			noun test1("Диагноз", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Диагностический", test2.to_string());
		}

		TEST_METHOD(Noun_Iron)
		{
			noun test1("Железо", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Железный", test2.to_string());
		}

		TEST_METHOD(Noun_Army)
		{
			noun test1("Армия", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Армейский", test2.to_string());
		}

		TEST_METHOD(Noun_Norm)
		{
			noun test1("Норма", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Нормальный", test2.to_string());
		}

		TEST_METHOD(Noun_Pancake)
		{
			noun test1("Блин", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Блинный", test2.to_string());
		}

		TEST_METHOD(Noun_Gold)
		{
			noun test1("Золото", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Золотой", test2.to_string());
		}

		TEST_METHOD(Noun_Ticket)
		{
			noun test1("Билет", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Билетный", test2.to_string());
		}

		TEST_METHOD(Noun_RailwayTerminal)
		{
			noun test1("Вокзал", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Вокзальный", test2.to_string());
		}

		TEST_METHOD(Noun_Mushroom)
		{
			noun test1("Гриб", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Грибной", test2.to_string());
		}

		TEST_METHOD(Noun_Cave)
		{
			noun test1("Пещера", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Пещерный", test2.to_string());
		}

		TEST_METHOD(Noun_Week)
		{
			noun test1("Неделя", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Недельный", test2.to_string());
		}

		TEST_METHOD(Noun_Watermelon)
		{
			noun test1("Арбуз", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Арбузный", test2.to_string());
		}

		TEST_METHOD(Noun_Grammar)
		{
			noun test1("Грамматика", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Грамматический", test2.to_string());
		}

		TEST_METHOD(Noun_Ring)
		{
			noun test1("Кольцо", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Кольцевой", test2.to_string());
		}

		TEST_METHOD(Noun_Birch)
		{
			noun test1("Берёза", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Берёзовый", test2.to_string());
		}

		TEST_METHOD(Noun_Address)
		{
			noun test1("Адрес", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Адресный", test2.to_string());
		}

		TEST_METHOD(Noun_Motor)
		{
			noun test1("Мотор", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Моторный", test2.to_string());
		}

		TEST_METHOD(Noun_Mirror)
		{
			noun test1("Зеркало", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Зеркальный", test2.to_string());
		}

		TEST_METHOD(Noun_Medal)
		{
			noun test1("Медаль", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Медальный", test2.to_string());
		}

		TEST_METHOD(Noun_Temperature)
		{
			noun test1("Температура", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Температурный", test2.to_string());
		}

		TEST_METHOD(Noun_Grid)
		{
			noun test1("Решётка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Решётчатый", test2.to_string());
		}

		TEST_METHOD(Noun_Tea)
		{
			noun test1("Чай", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Чайный", test2.to_string());
		}

		TEST_METHOD(Noun_Fine)
		{
			noun test1("Штраф", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Штрафной", test2.to_string());
		}

		TEST_METHOD(Noun_Rotation)
		{
			noun test1("Поворот", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Поворотный", test2.to_string());
		}

		TEST_METHOD(Noun_Descent)
		{
			noun test1("Спуск", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Спусковой", test2.to_string());
		}

		TEST_METHOD(Noun_Author)
		{
			noun test1("Автор", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Авторский", test2.to_string());
		}

		TEST_METHOD(Noun_Alcohol)
		{
			noun test1("Алкоголь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Алкогольный", test2.to_string());
		}

		TEST_METHOD(Noun_Flower)
		{
			noun test1("Цветок", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Цветочный", test2.to_string());
		}

		TEST_METHOD(Noun_Experience)
		{
			noun test1("Опыт", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Опытный", test2.to_string());
		}

		TEST_METHOD(Noun_Hospital)
		{
			noun test1("Больница", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Больничный", test2.to_string());
		}

		TEST_METHOD(Noun_Rubber)
		{
			noun test1("Резина", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Резиновый", test2.to_string());
		}

		TEST_METHOD(Noun_Camel)
		{
			noun test1("Верблюд", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Верблюжий", test2.to_string());
		}

		TEST_METHOD(Noun_Book)
		{
			noun test1("Книга", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Книжный", test2.to_string());
		}

		//TEST_METHOD(Noun_Sand)
		//{
		//	noun test1("Песок", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
		//	adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
		//	Assert::AreEqual((std::string)"Песчаный", test2.to_string());
		//}

		TEST_METHOD(Noun_Fox)
		{
			noun test1("Лиса", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Лисий", test2.to_string());
		}

		TEST_METHOD(Noun_Mystery)
		{
			noun test1("Тайна", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Таинственный", test2.to_string());
		}

		TEST_METHOD(Noun_Rose)
		{
			noun test1("Роза", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Розовый", test2.to_string());
		}

		TEST_METHOD(Noun_Dirt)
		{
			noun test1("Грязь", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Грязный", test2.to_string());
		}

		TEST_METHOD(Noun_Opening)
		{
			noun test1("Открытие", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Открытый", test2.to_string());
		}

		TEST_METHOD(Noun_Lamp)
		{
			noun test1("Лампа", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Ламповый", test2.to_string());
		}

		TEST_METHOD(Noun_Group)
		{
			noun test1("Группа", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Групповой", test2.to_string());
		}
	};

	TEST_CLASS(NounDetectGender)
	{
	public:
		TEST_METHOD(Noun_Chair)
		{
			noun test1("Стул", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Masculine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Head)
		{
			noun test1("Голова", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Feminine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Sun)
		{
			noun test1("Солнце", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Neuter == test1.detect_gender());
		}

		TEST_METHOD(Noun_Mouse)
		{
			noun test1("Мышь", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Feminine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Horse)
		{
			noun test1("конь", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Masculine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Elk)
		{
			noun test1("лось", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Masculine == test1.detect_gender());
		}
	};

	TEST_CLASS(NounDetectCase)
	{
	public:
		TEST_METHOD(NounP_Genetive)
		{
			noun test1("Столов", Cases::None, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::IsTrue(Cases::Genetive == test1.detect_case());
			noun test2("Коленей", Cases::None, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::IsTrue(Cases::Genetive == test2.detect_case());
		}
		TEST_METHOD(NounP_Instrumental)
		{
			noun test1("Столами", Cases::None, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::IsTrue(Cases::Instrumental == test1.detect_case());
			noun test2("Коленями", Cases::None, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::IsTrue(Cases::Instrumental == test2.detect_case());
		}
		TEST_METHOD(NounP_Prepositional)
		{
			noun test1("Столах", Cases::None, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::IsTrue(Cases::Prepositional == test1.detect_case());
			noun test2("Коленях", Cases::None, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::IsTrue(Cases::Prepositional == test2.detect_case());
		}
	};

	TEST_CLASS(Serializing)
	{
	public:
		TEST_METHOD(Noun_Serializing)
		{
			noun test1("СловоСловоСловоСлово", Cases::Accusative, Number::Plural, Gender::Masculine, Animacy::Animate);
			noun test2 = noun::deserialize(test1.serialize());
			Assert::IsTrue(test1 == test2);
		}
	};
}
