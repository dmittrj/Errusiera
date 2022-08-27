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
			Noun test1("�����", Cases::Nominative, Number::Singular);
			Assert::AreEqual((std::string)"�����", test1.change_case(Cases::Genetive));
			Noun test2("�������", Cases::Nominative, Number::Singular);
			Assert::AreEqual((std::string)"�������", test2.change_case(Cases::Genetive)); 
			Noun test3("�������", Cases::Nominative, Number::Singular);
			Assert::AreEqual((std::string)"�������", test3.change_case(Cases::Genetive));
		}
	};
}
