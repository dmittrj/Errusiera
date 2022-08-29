#include "pch.h"
#include "CppUnitTest.h"
#include <Windows.h>
#include "../ErrusieraCpp/Errusiera.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppTests
{
	TEST_CLASS(CppTests)
	{
	public:
		
		TEST_METHOD(Noun_Berry)
		{
			Noun test1("�����", Cases::Nominative, Number::Singular);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"�����", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"����", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			//Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
		}

		TEST_METHOD(Noun_Horse)
		{
			Noun test1("������", Cases::Nominative, Number::Singular);
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Dative));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"������", test1.change_case(Cases::Prepositional));
			Assert::AreEqual((std::string)"������", test1.change_word(Cases::Nominative, Number::Plural));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Genetive));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Dative));
			//Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Accusative));
			Assert::AreEqual((std::string)"��������", test1.change_case(Cases::Instrumental));
			Assert::AreEqual((std::string)"�������", test1.change_case(Cases::Prepositional));
		}
	};
}
