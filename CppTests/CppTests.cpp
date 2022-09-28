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


		TEST_METHOD(Noun_Person)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Masculine, Animacy::Animate);
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"���������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
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

		TEST_METHOD(Noun_Genius)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Balcony)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Parent)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������������", test2.to_string());
		}

		TEST_METHOD(Noun_Keyboard)
		{
			noun test1("����������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������������", test2.to_string());
		}

		TEST_METHOD(Noun_Concert)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Memory)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Midnight)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Palace)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Human)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������������", test2.to_string());
		}

		TEST_METHOD(Noun_God)
		{
			noun test1("���", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�����", test2.to_string());
		}

		TEST_METHOD(Noun_Fog)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Frost)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Curiosity)
		{
			noun test1("�����������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_List)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Quality)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������������", test2.to_string());
		}

		TEST_METHOD(Noun_Carriage)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Kitchen)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Seed)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Old)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Cow)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Bird)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������", test2.to_string());
		}

		TEST_METHOD(Noun_Food)
		{
			noun test1("���", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Thing)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Tooth)
		{
			noun test1("���", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������", test2.to_string());
		}

		TEST_METHOD(Noun_Morning)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Eternity)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������", test2.to_string());
		}

		TEST_METHOD(Noun_Wizard)
		{
			noun test1("���", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_North)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Cock)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Side)
		{
			noun test1("���", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Harvest)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Village)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�����������", test2.to_string());
		}

		TEST_METHOD(Noun_Church)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Window)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Wool)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Robot)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������������", test2.to_string());
		}

		TEST_METHOD(Noun_Album)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Fantastic)
		{
			noun test1("����������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������������", test2.to_string());
		}

		TEST_METHOD(Noun_Note)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Elevator)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Diagnosis)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������������", test2.to_string());
		}

		TEST_METHOD(Noun_Iron)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Army)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Norm)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Pancake)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Gold)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Ticket)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_RailwayTerminal)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Mushroom)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Cave)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Week)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Watermelon)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Grammar)
		{
			noun test1("����������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������������", test2.to_string());
		}

		TEST_METHOD(Noun_Ring)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Birch)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Address)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Motor)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Mirror)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Medal)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Temperature)
		{
			noun test1("�����������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������������", test2.to_string());
		}

		TEST_METHOD(Noun_Grid)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Tea)
		{
			noun test1("���", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������", test2.to_string());
		}

		TEST_METHOD(Noun_Fine)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Rotation)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Descent)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Author)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Alcohol)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�����������", test2.to_string());
		}

		TEST_METHOD(Noun_Flower)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Experience)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Hospital)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"����������", test2.to_string());
		}

		TEST_METHOD(Noun_Rubber)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Camel)
		{
			noun test1("�������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
		}

		TEST_METHOD(Noun_Book)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		//TEST_METHOD(Noun_Sand)
		//{
		//	noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
		//	adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
		//	Assert::AreEqual((std::string)"��������", test2.to_string());
		//}

		TEST_METHOD(Noun_Fox)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�����", test2.to_string());
		}

		TEST_METHOD(Noun_Mystery)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"������������", test2.to_string());
		}

		TEST_METHOD(Noun_Rose)
		{
			noun test1("����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Dirt)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"�������", test2.to_string());
		}

		TEST_METHOD(Noun_Opening)
		{
			noun test1("��������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Lamp)
		{
			noun test1("�����", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"��������", test2.to_string());
		}

		TEST_METHOD(Noun_Group)
		{
			noun test1("������", Cases::Nominative, Number::Singular, Gender::Feminine, Animacy::Inanimate);
			adjective test2 = test1.build_adjective(Cases::Nominative, Number::Singular, Gender::Masculine);
			Assert::AreEqual((std::string)"���������", test2.to_string());
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
