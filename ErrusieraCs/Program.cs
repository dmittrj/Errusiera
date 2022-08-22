using System;

namespace ErrusieraCs
{
    class Program
    {
        static void Main()
        {
			//This are some examples of using Errusiera

			//Example 1. Enter your name
			Console.Write("Введите ваше имя > ");
			string my_name1;
			my_name1 = Console.ReadLine();
			Noun E_my_name_1 = new Noun(my_name1, Cases.Nominative, Number.Singular);
			E_my_name_1.ChangeCase(Cases.Dative);
			my_name1 = E_my_name_1.ToString();
			Console.WriteLine(my_name1 + " нравится Errusiera");
		}
    }
}
