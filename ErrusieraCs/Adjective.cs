using System;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;

namespace Errusiera
{
	// Errusiera for C# 1.0.3-alpha1
	// Dmitry Balabanov | github.com/dmittrj/Errusiera

	class Adjective
    {
		public string Word;
		public Adjective(string word_adj_only, Cases adj_case, Number adj_number, Gender adj_gender)
        {
			Word = word_adj_only;
			WordCase = adj_case;
			WordNumber = adj_number;
			WordGender = adj_gender;
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
			if (case_to == WordCase && number_to == WordNumber && gender_to == WordGender)
			{
				return Word;
			}
			try
            {
				switch (number_to)
				{
					case Number.None:
						throw new Exception("Number of the word is undefind. Please call DetectNumber()");
					case Number.Singular:
						switch (case_to)
						{
							case Cases.None:
								throw new Exception("Case of the word is undefind. Please call DetectCase()");
							case Cases.Nominative:
								break;
							case Cases.Genetive:
								if (Regex.IsMatch(Word, "ый$"))
								{
									Word = Regex.Replace(Word, "ый$", "ого");
								} 
								else if (Regex.IsMatch(Word, "ой$"))
								{
									Word = Regex.Replace(Word, "ой$", "ого");
								}
								else if (Regex.IsMatch(Word, "ий$"))
								{
									Word = Regex.Replace(Word, "ий$", "его");
								}
								else if (Regex.IsMatch(Word, "ая$"))
								{
									Word = Regex.Replace(Word, "ая$", "ой");
								}
								else if (Regex.IsMatch(Word, "яя$"))
								{
									Word = Regex.Replace(Word, "яя$", "ей");
								}
								else if (Regex.IsMatch(Word, "ое$"))
								{
									Word = Regex.Replace(Word, "ое$", "ого");
								}
								else if (Regex.IsMatch(Word, "ее$"))
								{
									Word = Regex.Replace(Word, "ее$", "его");
								}
								break;
							case Cases.Dative:
								if (Regex.IsMatch(Word, "ый$"))
								{
									Word = Regex.Replace(Word, "ый$", "ому");
								}
								else if (Regex.IsMatch(Word, "ой$"))
								{
									Word = Regex.Replace(Word, "ой$", "ому");
								}
								else if (Regex.IsMatch(Word, "ий$"))
								{
									Word = Regex.Replace(Word, "ий$", "ему");
								}
								else if (Regex.IsMatch(Word, "ая$"))
								{
									Word = Regex.Replace(Word, "ая$", "ой");
								}
								else if (Regex.IsMatch(Word, "яя$"))
								{
									Word = Regex.Replace(Word, "яя$", "ей");
								}
								else if (Regex.IsMatch(Word, "ое$"))
								{
									Word = Regex.Replace(Word, "ое$", "ому");
								}
								else if (Regex.IsMatch(Word, "ее$"))
								{
									Word = Regex.Replace(Word, "ее$", "ему");
								}
								break;
							case Cases.Accusative:
								break;
							case Cases.Instrumental:
								if (Regex.IsMatch(Word, "ый$"))
								{
									Word = Regex.Replace(Word, "ый$", "ым");
								}
								else if (Regex.IsMatch(Word, "ой$"))
								{
									Word = Regex.Replace(Word, "ой$", "ым");
								}
								else if (Regex.IsMatch(Word, "ий$"))
								{
									Word = Regex.Replace(Word, "ий$", "им");
								}
								else if (Regex.IsMatch(Word, "ая$"))
								{
									Word = Regex.Replace(Word, "ая$", "ой");
								}
								else if (Regex.IsMatch(Word, "яя$"))
								{
									Word = Regex.Replace(Word, "яя$", "ей");
								}
								else if (Regex.IsMatch(Word, "ое$"))
								{
									Word = Regex.Replace(Word, "ое$", "ым");
								}
								else if (Regex.IsMatch(Word, "ее$"))
								{
									Word = Regex.Replace(Word, "ее$", "им");
								}
								break;
							case Cases.Prepositional:
								if (Regex.IsMatch(Word, "ый$"))
								{
									Word = Regex.Replace(Word, "ый$", "ом");
								}
								else if (Regex.IsMatch(Word, "ой$"))
								{
									Word = Regex.Replace(Word, "ой$", "ом");
								}
								else if (Regex.IsMatch(Word, "ий$"))
								{
									Word = Regex.Replace(Word, "ий$", "ем");
								}
								else if (Regex.IsMatch(Word, "ая$"))
								{
									Word = Regex.Replace(Word, "ая$", "ой");
								}
								else if (Regex.IsMatch(Word, "яя$"))
								{
									Word = Regex.Replace(Word, "яя$", "ей");
								}
								else if (Regex.IsMatch(Word, "ое$"))
								{
									Word = Regex.Replace(Word, "ое$", "ом");
								}
								else if (Regex.IsMatch(Word, "ее$"))
								{
									Word = Regex.Replace(Word, "ее$", "ем");
								}
								break;
							default:
								break;
						}
						break;
					case Number.Plural:
						switch (case_to)
						{
							case Cases.None:
								throw new Exception("Case of the word is undefind. Please call DetectCase()");
							case Cases.Nominative:
								break;
							case Cases.Genetive:
								if (Regex.IsMatch(Word, "ые$"))
								{
									Word = Regex.Replace(Word, "ые$", "ых");
								}
								else if (Regex.IsMatch(Word, "ие$"))
								{
									Word = Regex.Replace(Word, "ие$", "их");
								}
								break;
							case Cases.Dative:
								if (Regex.IsMatch(Word, "ые$"))
								{
									Word = Regex.Replace(Word, "ые$", "ым");
								}
								else if (Regex.IsMatch(Word, "ие$"))
								{
									Word = Regex.Replace(Word, "ие$", "им");
								}
								break;
							case Cases.Accusative:
								break;
							case Cases.Instrumental:
								if (Regex.IsMatch(Word, "ые$"))
								{
									Word = Regex.Replace(Word, "ые$", "ыми");
								}
								else if (Regex.IsMatch(Word, "ие$"))
								{
									Word = Regex.Replace(Word, "ие$", "ими");
								}
								break;
							case Cases.Prepositional:
								if (Regex.IsMatch(Word, "ые$"))
								{
									Word = Regex.Replace(Word, "ые$", "ых");
								}
								else if (Regex.IsMatch(Word, "ие$"))
								{
									Word = Regex.Replace(Word, "ие$", "их");
								}
								break;
							default:
								break;
						}
						break;
					default:
						break;
				}
			}
			catch (Exception _exception)
			{
				return "[Alert] " + _exception.Message + "\n";
			}
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

        public static string operator+(Adjective _adj, Noun _noun)
        {
			_adj.ChangeWord(_noun.WordCase, _noun.WordNumber, _noun.WordGender);
			return _adj.Word + " " + _noun.Word;
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
