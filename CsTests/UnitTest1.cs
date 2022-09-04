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
			Noun test1 = new Noun("Ягода", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Ягоды", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Ягоде", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Ягоду", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Ягодой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Ягоде", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Ягоды", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Ягод", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Ягодам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Ягоды", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Ягодами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Ягодах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Horse()
		{
            Noun test1 = new Noun("Лошадь", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Animate);
			Assert.AreEqual("Лошади", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Лошади", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Лошадь", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Лошадью", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Лошади", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Лошади", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Лошадей", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Лошадям", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Лошадей", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Лошадями", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Лошадях", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Lamp()
		{
			Noun test1 = new Noun("Лампа", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Лампы", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Лампе", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Лампу", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Лампой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Лампе", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Лампы", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Ламп", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Лампам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Лампы", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Лампами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Лампах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Printer()
		{
			Noun test1 = new Noun("Принтер", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Принтера", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Принтеру", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Принтер", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Принтером", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Принтере", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Принтеры", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Принтеров", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Принтерам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Принтеры", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Принтерами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Принтерах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Book()
		{
			Noun test1 = new Noun("Книга", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Книги", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Книге", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Книгу", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Книгой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Книге", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Книги", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Книг", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Книгам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Книги", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Книгами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Книгах", test1.ChangeCase(Cases.Prepositional));
		}

		public void Noun_Keyboard()
		{
			Noun test1 = new Noun("Клавиатура", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Клавиатуры", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Клавиатуре", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Клавиатуру", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Клавиатурой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Клавиатуре", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Клавиатуры", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Клавиатур", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Клавиатурам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Клавиатуру", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Клавиатурами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Клавиатурах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Mouse()
		{
			Noun test1 = new Noun("Мышь", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Animate);
			Assert.AreEqual("Мыши", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Мыши", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Мышь", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Мышью", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Мыши", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Мыши", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Мышей", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Мышам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Мышей", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Мышами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Мышах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Cat()
		{
			Noun test1 = new Noun("Кот", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Animate);
			Assert.AreEqual("Кота", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Коту", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Кота", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Котом", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Коте", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Коты", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Котов", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Котам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Котов", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Котами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Котах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Ball()
		{
			Noun test1 = new Noun("Мяч", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Мяча", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Мячу", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Мяч", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Мячом", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Мяче", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Мячи", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Мячей", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Мячам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Мячи", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Мячами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Мячах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Anthem()
		{
			Noun test1 = new Noun("Гимн", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Гимна", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Гимну", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Гимн", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Гимном", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Гимне", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Гимны", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Гимнов", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Гимнам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Гимны", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Гимнами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Гимнах", test1.ChangeCase(Cases.Prepositional));
		}
	}
}
