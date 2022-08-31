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
	}
}
