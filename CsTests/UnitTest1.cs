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

		[TestMethod]
		public void Noun_Fastening()
		{
			Noun test1 = new Noun("���������", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
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
		public void Noun_Mic()
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
		public void Noun_School()
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
		public void Noun_Plant()
		{
			Noun test1 = new Noun("��������", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("��������", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("����������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Person()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Animate);
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("���������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("��������", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("����", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("������", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("�����", test1.ChangeCase(Cases.Prepositional));
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

		[TestMethod]
		public void Noun_Leather()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("�������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Cat()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Animate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("�������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Foam()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("�����������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Building()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("������������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Genius()
		{
			Noun test1 = new Noun("�����", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("����������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Balcony()
		{
			Noun test1 = new Noun("������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("���������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Parent()
		{
			Noun test1 = new Noun("��������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("������������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Keyboard()
		{
			Noun test1 = new Noun("����������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("������������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Concert()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("����������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Memory()
		{
			Noun test1 = new Noun("������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("��������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Midnight()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("����������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Palace()
		{
			Noun test1 = new Noun("������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("���������", test2.ToString());
		}

		[TestMethod]
		public void Noun_Human()
		{
			Noun test1 = new Noun("�������", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("������������", test2.ToString());
		}

		[TestMethod]
		public void Noun_God()
		{
			Noun test1 = new Noun("���", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("�����", test2.ToString());
		}
	}

	[TestClass]
	public class NounDetectGender
	{
		[TestMethod]
		public void Noun_Chair()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Masculine == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Head()
		{
			Noun test1 = new Noun("������", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Feminine == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Sun()
		{
			Noun test1 = new Noun("������", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Neuter == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Mouse()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Feminine == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Horse()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Masculine == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Elk()
		{
			Noun test1 = new Noun("����", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Masculine == test1.DetectGender());
		}
	}

	[TestClass]
	public class NounDetectCase
	{
		[TestMethod]
		public void NounP_Genetive()
		{
			Noun test1 = new Noun("������", Cases.None, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.IsTrue(Cases.Genetive == test1.DetectCase());
			Noun test2 = new Noun("�������", Cases.None, Number.Singular, Gender.Neuter, Animacy.Inanimate);
			Assert.IsTrue(Cases.Genetive == test2.DetectCase());
		}

		[TestMethod]
		public void NounP_Instrumental()
		{
			Noun test1 = new Noun("�������", Cases.None, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.IsTrue(Cases.Instrumental == test1.DetectCase());
			Noun test2 = new Noun("��������", Cases.None, Number.Singular, Gender.Neuter, Animacy.Inanimate);
			Assert.IsTrue(Cases.Instrumental == test2.DetectCase());
		}

		[TestMethod]
		public void NounP_Prepositional()
		{
			Noun test1 = new Noun("������", Cases.None, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.IsTrue(Cases.Prepositional == test1.DetectCase());
			Noun test2 = new Noun("�������", Cases.None, Number.Singular, Gender.Neuter, Animacy.Inanimate);
			Assert.IsTrue(Cases.Prepositional == test2.DetectCase());
		}
	}
}
