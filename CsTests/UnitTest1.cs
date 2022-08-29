using Microsoft.VisualStudio.TestTools.UnitTesting;
using Errusiera;

namespace CsTests
{
    [TestClass]
    public class UnitTest1
    {
        [TestMethod]
        public void TestMethod1()
        {
			Errusiera.Noun test1 = new Errusiera.Noun("ягода", Cases.Nominative, Number.Singular);
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
    }
}
