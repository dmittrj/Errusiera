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

		TEST_METHOD(Noun_Anthem)
		{
			Noun test1("Гимн", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
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
			Noun test1("Колодец", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
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
			Noun test1("борец", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Animate);
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
			Noun test1("Лягушка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
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
			Noun test1("Дело", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
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
			Noun test1("стул", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
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
			Noun test1("Стена", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
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
			Noun test1("Окно", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
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
			Noun test1("Палец", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
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
			Noun test1("Игрушка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
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
			Noun test1("Ускорение", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
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
			Noun test1("Карандаш", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
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
			Noun test1("Ручка", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
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
			Noun test1("Крепление", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
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
	};

	TEST_CLASS(NounToAdjective)
	{
	public:
		TEST_METHOD(Noun_Berry)
		{
			Noun test1("Ягода", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Ягодный", test2.to_string());
		}

		TEST_METHOD(Noun_Leather)
		{
			Noun test1("Кожа", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"Кожаный", test2.to_string());
		}
	};

	TEST_CLASS(NounDetectGender)
	{
	public:
		TEST_METHOD(Noun_Chair)
		{
			Noun test1("Стул", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Masculine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Head)
		{
			Noun test2("Голова", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Feminine == test2.detect_gender());
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
