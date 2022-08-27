#include "pch.h"
#include "CppUnitTest.h"
#include "../ErrusieraCpp/Errusiera.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ErrusieraUnderTesting
{
	TEST_CLASS(ErrusieraUnderTesting)
	{
	public:
		
		TEST_METHOD(NounsConjugation)
		{
			Noun test1("Ягода", Cases::Nominative, Number::Singular);
			Assert::AreEqual((std::string)"Ягоды", test1.change_case(Cases::Genetive));
			Noun test2("Корзина", Cases::Nominative, Number::Singular);
			Assert::AreEqual((std::string)"Корзины", test2.change_case(Cases::Genetive)); 
			Noun test3("Декабрь", Cases::Nominative, Number::Singular);
			Assert::AreEqual((std::string)"Декабря", test3.change_case(Cases::Genetive));
		}
	};
}
