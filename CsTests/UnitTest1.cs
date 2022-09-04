using Microsoft.VisualStudio.TestTools.UnitTesting;
using Errusiera;

namespace CsTests
{
    [TestClass]
    public class NounConjugation
    {
        [TestMethod]
        public void Noun_Berry()
        {
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Horse()
		{
            Noun test1 = new Noun("������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Animate);
			Assert.AreEqual("������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Lamp()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Printer()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("��������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Book()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Prepositional));
		}
	}
}
