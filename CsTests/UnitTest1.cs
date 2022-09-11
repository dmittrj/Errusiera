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

		[TestMethod]
		public void Noun_Well()
		{
			Noun test1 = new Noun("Колодец", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Колодца", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Колодцу", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Колодец", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Колодцем", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Колодце", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Колодцы", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Колодцев", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Колодцам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Колодцы", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Колодцами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Колодцах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Fighter()
		{
			Noun test1 = new Noun("борец", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Animate);
			Assert.AreEqual("борца", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("борцу", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("борца", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("борцом", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("борце", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("борцы", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("борцов", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("борцам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("борцов", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("борцами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("борцах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Frog()
		{
			Noun test1 = new Noun("Лягушка", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Animate);
			Assert.AreEqual("Лягушки", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Лягушке", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Лягушку", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Лягушкой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Лягушке", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Лягушки", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Лягушек", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Лягушкам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Лягушек", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Лягушками", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Лягушках", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_ThingToDo()
		{
			Noun test1 = new Noun("Дело", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Дела", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Делу", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Дело", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Делом", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Деле", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Дела", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Дел", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Делам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Дела", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Делами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Делах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Chair()
		{
			Noun test1 = new Noun("стул", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("стула", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("стулу", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("стул", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("стулом", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("стуле", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("стулья", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("стульев", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("стульям", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("стулья", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("стульями", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("стульях", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Wall()
		{
			Noun test1 = new Noun("Стена", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Стены", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Стене", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Стену", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Стеной", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Стене", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Стены", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Стен", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Стенам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Стены", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Стенами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Стенах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Window()
		{
			Noun test1 = new Noun("Окно", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Окна", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Окну", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Окно", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Окном", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Окне", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Окна", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Окон", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Окнам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Окна", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Окнами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Окнах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Finger()
		{
			Noun test1 = new Noun("Палец", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Пальца", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Пальцу", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Палец", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Пальцем", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Пальце", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Пальцы", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Пальцев", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Пальцам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Пальцы", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Пальцами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Пальцах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Toy()
		{
			Noun test1 = new Noun("Игрушка", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Игрушки", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Игрушке", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Игрушку", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Игрушкой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Игрушке", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Игрушки", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Игрушек", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Игрушкам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Игрушки", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Игрушками", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Игрушках", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Acceleration()
		{
			Noun test1 = new Noun("Ускорение", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Ускорения", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Ускорению", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Ускорение", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Ускорением", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Ускорении", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Ускорения", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Ускорений", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Ускорениям", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Ускорения", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Ускорениями", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Ускорениях", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Pencil()
		{
			Noun test1 = new Noun("Карандаш", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Карандаша", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Карандашу", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Карандаш", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Карандашом", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Карандаше", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Карандаши", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Карандашей", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Карандашам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Карандаши", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Карандашами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Карандашах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Pen()
		{
			Noun test1 = new Noun("Ручка", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Ручки", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Ручке", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Ручку", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Ручкой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Ручке", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Ручки", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Ручек", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Ручкам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Ручки", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Ручками", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Ручках", test1.ChangeCase(Cases.Prepositional));
		}
	}

	[TestClass]
	public class NounToAdjective
	{
		[TestMethod]
		public void Noun_Berry()
		{
			Noun test1 = new Noun("Ягода", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Ягодный", test2.ToString());
		}
	}
}
