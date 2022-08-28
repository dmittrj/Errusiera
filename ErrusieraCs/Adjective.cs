using System;
using System.Collections.Generic;
using System.Text;

namespace Errusiera
{
	// Errusiera for C# 1.0.2-alpha1
	// Dmitry Balabanov | github.com/dmittrj/Errusiera

	class Adjective
    {
		public string Word;
		public Adjective(string word_adj_only, Cases adj_case, Number adj_number, Gender adj_gender)
        {

        }
		~Adjective()
        {

        }

		/// <summary>
		/// <para>RUS: Меняет падеж имени прилагательного</para>
		/// <para>ENG: The function changes the case of the adjective</para>
		/// </summary>
		/// <param name="case_to">| Падеж</param>
		/// <returns>Слово в заказанном падеже</returns>
		public string ChangeCase(Cases case_to)
        {
			return ChangeWord(case_to, WordNumber, WordGender);
        }

		/// <summary>
		/// <para>RUS: Меняет число имени прилагательного</para>
		/// <para>ENG: The function changes the number of the adjective</para>
		/// </summary>
		/// <param name="number_to">| Число</param>
		/// <returns>Слово в заказанном числе</returns>
		public string ChangeNumber(Number number_to)
        {
			return ChangeWord(WordCase, number_to, WordGender);
        }

		/// <summary>
		/// <para>RUS: Меняет род имени прилагательного</para>
		/// <para>ENG: The function changes the gender of the adjective</para>
		/// </summary>
		/// <param name="gender_to">| Род</param>
		/// <returns>Слово в заказанном роде</returns>
		public string ChangeGender(Gender gender_to)
        {
			return ChangeWord(WordCase, WordNumber, gender_to);
        }

		/// <summary>
		/// <para>RUS: Меняет все параметры имени прилагательного</para>
		/// <para>ENG: The function changes all parameters of the adjective</para>
		/// </summary>
		/// <param name="case_to">| Падеж</param>
		/// <param name="number_to">| Число</param>
		/// <param name="gender_to">| Род</param>
		/// <returns>Изменённое слово</returns>
		public string ChangeWord(Cases case_to, Number number_to, Gender gender_to)
        {
			ToDefault();
			return Word;
        }

		/// <summary>
		/// <para>RUS: Привести класс к строке, т.е. возвращает слово</para>
		/// <para>ENG: Convert class to string</para>
		/// </summary>
		/// <returns>Слово</returns>
		public override string ToString()
        {
            return base.ToString();
        }

		private Cases WordCase;
		private Number WordNumber;
		private Gender WordGender;
		private string WordDefault = "";

		private void ToDefault()
        {

        }
	}
}
