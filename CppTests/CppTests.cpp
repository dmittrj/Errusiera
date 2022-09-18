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
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Horse)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Lamp)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Printer)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"��������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Book)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Keyboard)
		{
			noun test1("����������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"����������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Mouse)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Cat)
		{
			noun test1("���", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Animate);
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Ball)
		{
			noun test1("���", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"���", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Anthem)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Well)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Fighter)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Animate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Frog)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_ThingToDo)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"���", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Chair)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Wall)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Window)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Finger)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Toy)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Acceleration)
		{
			noun test1("���������", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"���������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Pencil)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"���������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Pen)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Fastening)
		{
			noun test1("���������", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"���������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Mic)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"���������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_School)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Plant)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"��������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"����������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Prepositional));
		}
	};

	TEST_CLASS(NounToAdjective)
	{
	public:
		TEST_METHOD(Noun_Berry)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Leather)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Cat)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Animate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Foam)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�����������", test2.to_string());
		}

		TEST_METHOD(Noun_Building)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������������", test2.to_string());
		}
	};

	TEST_CLASS(NounDetectGender)
	{
	public:
		TEST_METHOD(Noun_Chair)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Masculine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Head)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Feminine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Sun)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Neuter == test1.detect_gender());
		}

		TEST_METHOD(Noun_Mouse)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Feminine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Horse)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Masculine == test1.detect_gender());
		}

		TEST_METHOD(Noun_Elk)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::None, Animacy::Inanimate);
			Assert::IsTrue(Gender::Masculine == test1.detect_gender());
		}
	};

	TEST_CLASS(NounDetectCase)
	{
	public:
		TEST_METHOD(NounP_Genetive)
		{
			noun test1("������", Cases::None, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::IsTrue(Cases::Genetive == test1.detect_case());
			noun test2("�������", Cases::None, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::IsTrue(Cases::Genetive == test2.detect_case());
		}
		TEST_METHOD(NounP_Instrumental)
		{
			noun test1("�������", Cases::None, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::IsTrue(Cases::Instrumental == test1.detect_case());
			noun test2("��������", Cases::None, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::IsTrue(Cases::Instrumental == test2.detect_case());
		}
		TEST_METHOD(NounP_Prepositional)
		{
			noun test1("������", Cases::None, Number::Singular, Gender::Masculine, Animacy::Inanimate);
			Assert::IsTrue(Cases::Prepositional == test1.detect_case());
			noun test2("�������", Cases::None, Number::Singular, Gender::Neuter, Animacy::Inanimate);
			Assert::IsTrue(Cases::Prepositional == test2.detect_case());
		}
	};

	TEST_CLASS(Serializing)
	{
	public:
		TEST_METHOD(Noun_Serializing)
		{
			noun test1("��������������������", Cases::Accusative, Number::Plural, Gender::Masculine, Animacy::Animate);
			noun test2 = noun::deserialize(test1.serialize());
			Assert::IsTrue(test1 == test2);
		}
	};
}
