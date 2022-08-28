using System;

namespace Errusiera
{
    class Program
    {
        static void Main()
        {
			//These are some examples of using Errusiera

			//Example 1. Enter your name
			Console.Write("Введите ваше имя > ");
			string myName1;
			myName1 = Console.ReadLine();
			Noun E_myName_1 = new Noun(myName1, Cases.Nominative, Number.Singular);
			E_myName_1.ChangeCase(Cases.Dative);
			myName1 = E_myName_1.ToString();
			Console.WriteLine(myName1 + " нравится Errusiera\n");


			//Example 2. Wedding
			Console.Write("Введите имя мужа > ");
			string husbandName2 = Console.ReadLine();
			Console.Write("Введите имя жены > ");
			string wifeName2 = Console.ReadLine();
			Noun E_husbandName2 = new Noun(husbandName2, Cases.Nominative, Number.Singular);
			Noun E_wifeName2 = new Noun(wifeName2, Cases.Nominative, Number.Singular);
			Console.WriteLine(E_husbandName2.ToString() + " женат на " + E_wifeName2.ChangeCase(Cases.Prepositional));
			Console.WriteLine(E_wifeName2.ChangeCase(Cases.Nominative) + " замужем за " + E_husbandName2.ChangeCase(Cases.Instrumental) + "\n");


			//Example 3. Time
			Console.Write("Введите время в формате ЧЧ:ММ > ");
			string time3;
			time3 = Console.ReadLine();
			int hours3 = int.Parse(time3.Substring(0, 2));
			int minutes3 = int.Parse(time3.Substring(3, 2));
			Noun E_hours3 = new Noun("час", Cases.Nominative, Number.Singular);
			Noun E_minutes3 = new Noun("минута", Cases.Nominative, Number.Singular);
			E_hours3.ChangeCase(Cases.Genetive);
			E_minutes3.ChangeCase(Cases.Genetive);
			if (hours3 >= 10 && hours3 <= 20) E_hours3.ChangeNumber(Number.Plural);
			else if (hours3 % 10 == 1) E_hours3.ChangeWord(Cases.Nominative, Number.Singular);
			else if (hours3 % 10 > 4 || hours3 % 10 == 0) E_hours3.ChangeNumber(Number.Plural);
			else E_hours3.ChangeNumber(Number.Singular);
			if (minutes3 >= 10 && minutes3 <= 20) E_minutes3.ChangeNumber(Number.Plural);
			else if (minutes3 % 10 == 1) E_minutes3.ChangeWord(Cases.Nominative, Number.Singular);
			else if (minutes3 % 10 > 4 || minutes3 % 10 == 0) E_minutes3.ChangeNumber(Number.Plural);
			else E_minutes3.ChangeNumber(Number.Singular);
			Console.WriteLine("Время: " + hours3 + " " + E_hours3.ToString() + " " +
				minutes3 + " " + E_minutes3.ToString());
		}
    }
}
