using Microsoft.VisualStudio.TestTools.UnitTesting;
using Errusiera;

namespace CsTests
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void Noun_Berry()
        {
			Noun test1 = new Noun("ягода", Cases.Nominative, Number.Singular);
			Assert.AreEqual("ягоды", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("ягоде", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("ягоду", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("ягодой", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("ягоде", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("ягоды", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("ягод", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("ягодам", test1.ChangeCase(Cases.Dative));
			//Assert.AreEqual("ягоды", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("ягодами", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("ягодах", test1.ChangeCase(Cases.Prepositional));
		}

		[TestMethod]
		public void Noun_Horse()
		{
            Noun test1 = new Noun("Ћошадь", Cases.Nominative, Number.Singular);
			Assert.AreEqual("Ћошади", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Ћошади", test1.ChangeCase(Cases.Dative));
			Assert.AreEqual("Ћошадь", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Ћошадью", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Ћошади", test1.ChangeCase(Cases.Prepositional));
			Assert.AreEqual("Ћошади", test1.ChangeWord(Cases.Nominative, Number.Plural));
			Assert.AreEqual("Ћошадей", test1.ChangeCase(Cases.Genetive));
			Assert.AreEqual("Ћошад€м", test1.ChangeCase(Cases.Dative));
			//Assert.AreEqual("Ћошадей", test1.ChangeCase(Cases.Accusative));
			Assert.AreEqual("Ћошад€ми", test1.ChangeCase(Cases.Instrumental));
			Assert.AreEqual("Ћошад€х", test1.ChangeCase(Cases.Prepositional));
		}
	}
}
