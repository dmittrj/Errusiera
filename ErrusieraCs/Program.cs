using System;

namespace ErrusieraCs
{
    class Program
    {
        static void Main()
        {
			//These are some examples of using Errusiera

			//Example 1. Enter your name
			Console.Write("Введите ваше имя > ");
			string my_name1;
			my_name1 = Console.ReadLine();
			Noun E_my_name_1 = new Noun(my_name1, Cases.Nominative, Number.Singular);
			E_my_name_1.ChangeCase(Cases.Dative);
			my_name1 = E_my_name_1.ToString();
			Console.WriteLine(my_name1 + " нравится Errusiera");

			//Example 2. Wedding
			Console.Write("Введите имя мужа > ");
			string husband_name2 = Console.ReadLine();
			Console.Write("Введите имя жены > ");
			string wife_name2 = Console.ReadLine();
			Noun E_husband_name2 = new Noun(husband_name2, Cases.Nominative, Number.Singular);
			Noun E_wife_name2 = new Noun(wife_name2, Cases.Nominative, Number.Singular);
			Console.Write(E_husband_name2.ToString() + " женат на " + E_wife_name2.ChangeCase(Cases.Prepositional));
			Console.Write(E_wife_name2.ChangeCase(Cases.Nominative) + " замужем за " + E_husband_name2.ChangeCase(Cases.Instrumental));
		}
    }
}
