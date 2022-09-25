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

		[TestMethod]
		public void Noun_Fastening()
		{
			Noun test1 = new Noun("Крепление", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Крепления", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Креплению", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Крепление", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Креплением", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Креплении", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Крепления", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Креплений", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Креплениям", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Крепления", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Креплениями", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Креплениях", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Mic()
		{
			Noun test1 = new Noun("Микрофон", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Микрофона", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Микрофону", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Микрофон", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Микрофоном", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Микрофоне", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Микрофоны", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Микрофонов", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Микрофонам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Микрофоны", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Микрофонами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Микрофонах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_School()
		{
			Noun test1 = new Noun("Школа", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Assert.AreEqual("Школы", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Школе", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Школу", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Школой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Школе", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Школы", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Школ", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Школам", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Школы", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Школами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Школах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Plant()
		{
			Noun test1 = new Noun("Растение", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.AreEqual("Растения", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Растению", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Растение", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Растением", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Растении", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Растения", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Растений", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Растениям", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Растения", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Растениями", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Растениях", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Person()
		{
			Noun test1 = new Noun("человек", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Animate);
			Assert.AreEqual("человека", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("человеку", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("человека", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("человеком", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("человеке", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("люди", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("людей", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("людям", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("людей", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("людьми", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("людях", test1.ChangeCase(Cases.Prepositional));
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

		[TestMethod]
		public void Noun_Leather()
		{
			Noun test1 = new Noun("Кожа", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Кожаный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Cat()
		{
			Noun test1 = new Noun("Кошка", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Animate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Кошачий", test2.ToString());
		}

		[TestMethod]
		public void Noun_Foam()
		{
			Noun test1 = new Noun("Поролон", Cases.Nominative, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Поролоновый", test2.ToString());
		}

		[TestMethod]
		public void Noun_Building()
		{
			Noun test1 = new Noun("Стройка", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Строительный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Genius()
		{
			Noun test1 = new Noun("Гений", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Гениальный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Balcony()
		{
			Noun test1 = new Noun("Балкон", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Балконный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Parent()
		{
			Noun test1 = new Noun("Родитель", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Родительский", test2.ToString());
		}

		[TestMethod]
		public void Noun_Keyboard()
		{
			Noun test1 = new Noun("Клавиатура", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Клавиатурный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Concert()
		{
			Noun test1 = new Noun("Концерт", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Концертный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Memory()
		{
			Noun test1 = new Noun("Память", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Памятный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Midnight()
		{
			Noun test1 = new Noun("Полночь", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Полуночный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Palace()
		{
			Noun test1 = new Noun("Дворец", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Дворцовый", test2.ToString());
		}

		[TestMethod]
		public void Noun_Human()
		{
			Noun test1 = new Noun("Человек", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Человеческий", test2.ToString());
		}

		[TestMethod]
		public void Noun_God()
		{
			Noun test1 = new Noun("Бог", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Божий", test2.ToString());
		}

		[TestMethod]
		public void Noun_Fog()
		{
			Noun test1 = new Noun("Туман", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Туманный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Frost()
		{
			Noun test1 = new Noun("Мороз", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Морозный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Curiosity()
		{
			Noun test1 = new Noun("Любопытство", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Любопытный", test2.ToString());
		}

		[TestMethod]
		public void Noun_List()
		{
			Noun test1 = new Noun("Список", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Списочный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Quality()
		{
			Noun test1 = new Noun("Качество", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Качественный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Carriage()
		{
			Noun test1 = new Noun("Вагон", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Вагонный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Kitchen()
		{
			Noun test1 = new Noun("Кухня", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Кухонный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Seed()
		{
			Noun test1 = new Noun("Зерно", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Зерновой", test2.ToString());
		}

		[TestMethod]
		public void Noun_Old()
		{
			Noun test1 = new Noun("Старик", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Старческий", test2.ToString());
		}

		[TestMethod]
		public void Noun_Cow()
		{
			Noun test1 = new Noun("Корова", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Коровий", test2.ToString());
		}

		[TestMethod]
		public void Noun_Bird()
		{
			Noun test1 = new Noun("Птица", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Птичий", test2.ToString());
		}

		[TestMethod]
		public void Noun_Food()
		{
			Noun test1 = new Noun("еда", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("съедобный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Thing()
		{
			Noun test1 = new Noun("Штука", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Штучный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Tooth()
		{
			Noun test1 = new Noun("Зуб", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Зубной", test2.ToString());
		}

		[TestMethod]
		public void Noun_Morning()
		{
			Noun test1 = new Noun("Утро", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Утренний", test2.ToString());
		}

		[TestMethod]
		public void Noun_Eternity()
		{
			Noun test1 = new Noun("Вечность", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Вечный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Wizard()
		{
			Noun test1 = new Noun("Маг", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Магический", test2.ToString());
		}

		[TestMethod]
		public void Noun_North()
		{
			Noun test1 = new Noun("Север", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Северный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Cock()
		{
			Noun test1 = new Noun("Петух", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Петушиный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Side()
		{
			Noun test1 = new Noun("Бок", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Боковой", test2.ToString());
		}

		[TestMethod]
		public void Noun_Harvest()
		{
			Noun test1 = new Noun("Урожай", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Урожайный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Village()
		{
			Noun test1 = new Noun("Деревня", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Деревенский", test2.ToString());
		}

		[TestMethod]
		public void Noun_Church()
		{
			Noun test1 = new Noun("Церковь", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Церковный", test2.ToString());
		}

		[TestMethod]
		public void Noun_Window()
		{
			Noun test1 = new Noun("Окно", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
			Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
			Assert.AreEqual("Оконный", test2.ToString());
		}

        [TestMethod]
        public void Noun_Wool()
        {
            Noun test1 = new Noun("Шерсть", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Шерстяной", test2.ToString());
        }

        [TestMethod]
        public void Noun_Robot()
        {
            Noun test1 = new Noun("Робот", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Роботизированный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Album()
        {
            Noun test1 = new Noun("Альбом", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Альбомный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Fantastic()
        {
            Noun test1 = new Noun("Фантастика", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Фантастический", test2.ToString());
        }

        [TestMethod]
        public void Noun_Note()
        {
            Noun test1 = new Noun("Запись", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Записной", test2.ToString());
        }

        [TestMethod]
        public void Noun_Elevator()
        {
            Noun test1 = new Noun("Лифт", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Лифтовый", test2.ToString());
        }

        [TestMethod]
        public void Noun_Diagnosis()
        {
            Noun test1 = new Noun("Диагноз", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Диагностический", test2.ToString());
        }

        [TestMethod]
        public void Noun_Iron()
        {
            Noun test1 = new Noun("Железо", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Железный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Army()
        {
            Noun test1 = new Noun("Армия", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Армейский", test2.ToString());
        }

        [TestMethod]
        public void Noun_Norm()
        {
            Noun test1 = new Noun("Норма", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Нормальный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Pancake()
        {
            Noun test1 = new Noun("Блин", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Блинный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Gold()
        {
            Noun test1 = new Noun("Золото", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Золотой", test2.ToString());
        }

        [TestMethod]
        public void Noun_Ticket()
        {
            Noun test1 = new Noun("Билет", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Билетный", test2.ToString());
        }

        [TestMethod]
        public void Noun_RailwayTerminal()
        {
            Noun test1 = new Noun("Вокзал", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Вокзальный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Mushroom()
        {
            Noun test1 = new Noun("Гриб", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Грибной", test2.ToString());
        }

        [TestMethod]
        public void Noun_Cave()
        {
            Noun test1 = new Noun("Пещера", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Пещерный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Week()
        {
            Noun test1 = new Noun("Неделя", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Недельный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Watermelon()
        {
            Noun test1 = new Noun("Арбуз", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Арбузный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Grammar()
        {
            Noun test1 = new Noun("Грамматика", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Грамматический", test2.ToString());
        }

        [TestMethod]
        public void Noun_Ring()
        {
            Noun test1 = new Noun("Кольцо", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Кольцевой", test2.ToString());
        }

        [TestMethod]
        public void Noun_Birch()
        {
            Noun test1 = new Noun("Берёза", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Берёзовый", test2.ToString());
        }

        [TestMethod]
        public void Noun_Address()
        {
            Noun test1 = new Noun("Адрес", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Адресный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Motor()
        {
            Noun test1 = new Noun("Мотор", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Моторный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Mirror()
        {
            Noun test1 = new Noun("Зеркало", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Зеркальный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Medal()
        {
            Noun test1 = new Noun("Медаль", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Медальный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Temperature()
        {
            Noun test1 = new Noun("Температура", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Температурный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Grid()
        {
            Noun test1 = new Noun("Решётка", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Решётчатый", test2.ToString());
        }

        [TestMethod]
        public void Noun_Tea()
        {
            Noun test1 = new Noun("Чай", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Чайный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Fine()
        {
            Noun test1 = new Noun("Штраф", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Штрафной", test2.ToString());
        }

        [TestMethod]
        public void Noun_Rotation()
        {
            Noun test1 = new Noun("Поворот", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Поворотный", test2.ToString());
        }

        [TestMethod]
        public void Noun_Descent()
        {
            Noun test1 = new Noun("Спуск", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Спусковой", test2.ToString());
        }

        [TestMethod]
        public void Noun_Author()
        {
            Noun test1 = new Noun("Автор", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Авторский", test2.ToString());
        }

        [TestMethod]
        public void Noun_Alcohol()
        {
            Noun test1 = new Noun("Алкоголь", Cases.Nominative, Number.Singular, Gender.Feminine, Animacy.Inanimate);
            Adjective test2 = test1.BuildAdjective(Cases.Nominative, Number.Singular, Gender.Masculine);
            Assert.AreEqual("Алкогольный", test2.ToString());
        }
    }

	[TestClass]
	public class NounDetectGender
	{
		[TestMethod]
		public void Noun_Chair()
		{
			Noun test1 = new Noun("Стул", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Masculine == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Head()
		{
			Noun test1 = new Noun("Голова", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Feminine == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Sun()
		{
			Noun test1 = new Noun("Солнце", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Neuter == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Mouse()
		{
			Noun test1 = new Noun("Мышь", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Feminine == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Horse()
		{
			Noun test1 = new Noun("конь", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Masculine == test1.DetectGender());
		}

		[TestMethod]
		public void Noun_Elk()
		{
			Noun test1 = new Noun("лось", Cases.Nominative, Number.Singular, Gender.None, Animacy.Inanimate);
			Assert.IsTrue(Gender.Masculine == test1.DetectGender());
		}
	}

	[TestClass]
	public class NounDetectCase
	{
		[TestMethod]
		public void NounP_Genetive()
		{
			Noun test1 = new Noun("Столов", Cases.None, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.IsTrue(Cases.Genetive == test1.DetectCase());
			Noun test2 = new Noun("Коленей", Cases.None, Number.Singular, Gender.Neuter, Animacy.Inanimate);
			Assert.IsTrue(Cases.Genetive == test2.DetectCase());
		}

		[TestMethod]
		public void NounP_Instrumental()
		{
			Noun test1 = new Noun("Столами", Cases.None, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.IsTrue(Cases.Instrumental == test1.DetectCase());
			Noun test2 = new Noun("Коленями", Cases.None, Number.Singular, Gender.Neuter, Animacy.Inanimate);
			Assert.IsTrue(Cases.Instrumental == test2.DetectCase());
		}

		[TestMethod]
		public void NounP_Prepositional()
		{
			Noun test1 = new Noun("Столах", Cases.None, Number.Singular, Gender.Masculine, Animacy.Inanimate);
			Assert.IsTrue(Cases.Prepositional == test1.DetectCase());
			Noun test2 = new Noun("Коленях", Cases.None, Number.Singular, Gender.Neuter, Animacy.Inanimate);
			Assert.IsTrue(Cases.Prepositional == test2.DetectCase());
		}
	}
}
