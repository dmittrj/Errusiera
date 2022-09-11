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

		public void Noun_Keyboard()
		{
			Noun test1 = new Noun("����������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�����������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("����������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Mouse()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Animate);
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Cat()
		{
			Noun test1 = new Noun("���", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Animate);
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Ball()
		{
			Noun test1 = new Noun("���", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("���", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Anthem()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Well()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Fighter()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Animate);
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Frog()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Animate);
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_ThingToDo()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("���", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Chair()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Wall()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
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
		public void Noun_Window()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Finger()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Toy()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Acceleration()
		{
			Noun test1 = new Noun("���������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("���������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�����������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Pencil()
		{
			Noun test1 = new Noun("��������", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("���������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�����������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Pen()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("�����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("�������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Prepositional));
		}
	}

	[TestClass]
	public class NounToAdjective
	{
		[TestMethod]
		public void Noun_Berry()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("�������", test2.ToString());
		}
	}
}
