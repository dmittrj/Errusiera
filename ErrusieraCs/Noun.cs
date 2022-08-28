using System;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;

namespace Errusiera
{
	// Errusiera for C# 1.0.0-alpha6-1
	// Dmitry Balabanov | github.com/dmittrj/Errusiera

	/// <summary>
	/// Падежи
	/// </summary>
	enum Cases
	{
		/// <summary>
		/// <para>RUS: Нет падежа или неизвестен. Не используйте сами этот падеж</para>
		/// <para>ENG: No case or case is unknown. Please do not use it by your own</para>
		/// </summary>
		None,
		/// <summary>
		/// Именительный падеж
		/// </summary>
		Nominative,
		/// <summary>
		/// Родительный падеж
		/// </summary>
		Genetive,
		/// <summary>
		/// Дательный падеж
		/// </summary>
		Dative,
		/// <summary>
		/// Винительный падеж
		/// </summary>
		Accusative,
		/// <summary>
		/// Творительный падеж
		/// </summary>
		Instrumental,
		/// <summary>
		/// Предложный падеж
		/// </summary>
		Prepositional
	};

	/// <summary>
	/// Числа
	/// </summary>
	enum Number
	{
		/// <summary>
		/// <para>RUS: Нет числа или неизвестно. Не используйте сами этот параметр</para>
		/// <para>ENG: No number or number is unknown. Please do not use it by your own</para>
		/// </summary>
		None,
		/// <summary>
		/// Единственное число
		/// </summary>
		Singular,
		/// <summary>
		/// Паукальное (двойственное) число
		/// </summary>
		Paucal,
		/// <summary>
		/// Множественное число
		/// </summary>
		Plural
	};

	/// <summary>
	/// Имя существительное
	/// </summary>
	class Noun
    {
		/// <summary>
		/// Слово
		/// </summary>
		public string Word;
		private Cases WordCase;
		private Number WordNumber;

		/// <summary>
		/// <para>RUS: Конструктор с параметром строки. После создания требуется вызвать DetectParams()</para>
		/// <para>ENG: Constructor with string parameter only. Calling DetectParams() requires</para>
		/// </summary>
		/// <param name="Word_noun_only">Слово</param>
		public Noun(string Word_noun_only)
		{
			Word = Word_noun_only;
		}

		/// <summary>
		/// <para>RUS: Конструктор со всеми параметрами. После объявления можно пользоваться</para>
		/// <para>ENG: Constructor with all parameters. You can use all functions after declaration</para>
		/// </summary>
		/// <param name="Word_noun_only">Слово</param>
		/// <param name="noun_case">Падеж</param>
		/// <param name="noun_number">Число</param>
		public Noun(string Word_noun_only, Cases noun_case, Number noun_number)
		{
			Word = Word_noun_only;
			WordCase = noun_case;
			WordNumber = noun_number;

			WordNominative = Word;
		}
		~Noun() { }

		/// <summary>
		/// <para>RUS: Меняет падеж имени существительного</para>
		/// <para>ENG: The function changes the case of the noun</para>
		/// </summary>
		/// <param name="case_to">Падеж</param>
		/// <returns>Слово в заказанном падеже</returns>
		public string ChangeCase(Cases case_to)
		{
			return ChangeWord(case_to, WordNumber);
		}

		/// <summary>
		/// <para>RUS: Меняет число имени существительного</para>
		/// <para>ENG: The function changes the number of the noun</para>
		/// </summary>
		/// <param name="number_to">| Число</param>
		/// <returns>Слово в заказанном числе</returns>
		public string ChangeNumber(Number number_to)
		{
			return ChangeWord(WordCase, number_to);
		}

		/// <summary>
		/// <para>RUS: Меняет все параметры имени существительного</para>
		/// <para>ENG: The function changes all parameters of the noun</para>
		/// </summary>
		/// <param name="case_to">Падеж</param>
		/// <param name="number_to">Число</param>
		/// <returns>Изменённое слово</returns>
		public string ChangeWord(Cases case_to, Number number_to)
		{
			if (case_to == WordCase && number_to == WordNumber) { return Word; }
			ToNominative();
			try
			{
				switch (number_to)
				{
					case Number.None:
						throw new Exception("Number of the word is undefind. Please call DetectNumber()");
					case Number.Singular:
						switch (case_to)
						{
							case Cases.Nominative:
								break;
							case Cases.Genetive:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "я");
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word = Regex.Replace(Word, "а$", "ы");
								}
								else if (Regex.IsMatch(Word, "мя$"))
								{
									Word = Regex.Replace(Word, "мя$", "мени");
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Word = Regex.Replace(Word, "я$", "и");
								}
								else if (Regex.IsMatch(Word, "жь$"))
								{
									Word = Regex.Replace(Word, "жь$", "жи");
								}
								else if (Regex.IsMatch(Word, "шь$"))
								{
									Word = Regex.Replace(Word, "шь$", "ши");
								}
								else if (Regex.IsMatch(Word, "ь$"))
								{
									Word = Regex.Replace(Word, "ь$", "я");
								}
								else
								{
									Word += "а";
								}
								break;
							case Cases.Dative:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "ю");
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word = Regex.Replace(Word, "а$", "е");
								}
								else if (Regex.IsMatch(Word, "мя$"))
								{
									Word = Regex.Replace(Word, "мя$", "мени");
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Word = Regex.Replace(Word, "я$", "е");
								}
								else if (Regex.IsMatch(Word, "жь$"))
								{
									Word = Regex.Replace(Word, "жь$", "жи");
								}
								else if (Regex.IsMatch(Word, "шь$"))
								{
									Word = Regex.Replace(Word, "шь$", "ши");
								}
								else if (Regex.IsMatch(Word, "ь$"))
								{
									Word = Regex.Replace(Word, "ь$", "ю");
								}
								else
								{
									Word += "у";
								}
								break;
							case Cases.Accusative:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "я");
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word = Regex.Replace(Word, "а$", "у");
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Word = Regex.Replace(Word, "я$", "ю");
								}
								else if (Regex.IsMatch(Word, "ь$"))
								{
									Word = Regex.Replace(Word, "ь$", "я");
								}
								break;
							case Cases.Instrumental:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "ем");
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word = Regex.Replace(Word, "а$", "ой");
								}
								else if (Regex.IsMatch(Word, "мя$"))
								{
									Word = Regex.Replace(Word, "мя$", "менем");
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Word = Regex.Replace(Word, "я$", "ей");
								}
								else if (Regex.IsMatch(Word, "жь$"))
								{
									Word = Regex.Replace(Word, "жь$", "жью");
								}
								else if (Regex.IsMatch(Word, "шь$"))
								{
									Word = Regex.Replace(Word, "шь$", "шью");
								}
								else if (Regex.IsMatch(Word, "рь$"))
								{
									Word = Regex.Replace(Word, "рь$", "рем");
								}
								else if (Regex.IsMatch(Word, "ль$"))
								{
									Word = Regex.Replace(Word, "ль$", "лем");
								}
								else if (Regex.IsMatch(Word, "сь$"))
								{
									Word = Regex.Replace(Word, "сь$", "сем");
								}
								else if (Regex.IsMatch(Word, "ь$"))
								{
									Word = Regex.Replace(Word, "ь$", "ём");
								}
								else
								{
									Word += "ом";
								}
								break;
							case Cases.Prepositional:
								if (Regex.IsMatch(Word, "ий$"))
								{
									Word = Regex.Replace(Word, "ий$", "ии");
								}
								else if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "е");
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word = Regex.Replace(Word, "а$", "е");
								}
								else if (Regex.IsMatch(Word, "мя$"))
								{
									Word = Regex.Replace(Word, "мя$", "мени");
								}
								else if (Regex.IsMatch(Word, "ия$"))
								{
									Word = Regex.Replace(Word, "ия$", "ии");
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Word = Regex.Replace(Word, "я$", "е");
								}
								else
								{
									Word += "и";
								}
								break;
							default:
								throw new Exception("Case of the word is undefind. Please call DetectCase()");
						}
						break;
					case Number.Paucal:
						break;
					case Number.Plural:
						switch (case_to)
						{
							case Cases.None:
								throw new Exception("Case of the word is undefind. Please call DetectCase()");
							case Cases.Nominative:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "и");
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Word = Regex.Replace(Word, "ка$", "ка");
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word = Regex.Replace(Word, "а$", "ы");
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Word = Regex.Replace(Word, "я$", "и");
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Word = Regex.Replace(Word, "ок$", "ки");
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Word = Regex.Replace(Word, "ек$", "ки");
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Word += "и";
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Word = Regex.Replace(Word, "е$", "я");
								}
								else if (Regex.IsMatch(Word, "ё$"))
								{
									Word = Regex.Replace(Word, "ё$", "я");
								}
								else
								{
									Word += "ы";
								}
								break;
							case Cases.Genetive:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "ев");
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Word = Regex.Replace(Word, "ка$", "ок");
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word = Regex.Replace(Word, "а$", "");
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Word = Regex.Replace(Word, "ок$", "ков");
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Word = Regex.Replace(Word, "ек$", "ков");
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Word += "ов";
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Word += "в";
								}
								else
								{
									Word += "ов";
								}
								break;
							case Cases.Dative:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "ям");
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Word += "м";
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word += "м";
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Word = Regex.Replace(Word, "ок$", "кам");
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Word = Regex.Replace(Word, "ек$", "кам");
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Word += "ам";
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Word = Regex.Replace(Word, "е$", "ям");
								}
								else
								{
									Word += "ам";
								}
								break;
							case Cases.Accusative:
								break;
							case Cases.Instrumental:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "ями");
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Word += "ми";
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Word += "ми";
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Word = Regex.Replace(Word, "ок$", "ками");
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Word = Regex.Replace(Word, "ек$", "ками");
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Word += "ами";
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Word = Regex.Replace(Word, "е$", "ями");
								}
								else
								{
									Word += "ами";
								}
								break;
							case Cases.Prepositional:
								if (Regex.IsMatch(Word, "й$"))
								{
									Word = Regex.Replace(Word, "й$", "ях");
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Word += "х";
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Word = Regex.Replace(Word, "ок$", "ках");
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Word = Regex.Replace(Word, "ек$", "ках");
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Word += "ах";
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Word = Regex.Replace(Word, "е$", "ях");
								}
								else
								{
									Word += "ах";
								}
								break;
							default:
								throw new Exception("Case of the word is undefind. Please call DetectCase()");
						}
						break;
					default:
						throw new Exception("Number of the word is undefind. Please call DetectNumber()");
				}
			}
			catch (Exception _exception) {
				return "[Alert] " + _exception.Message + "\n";
			}

			WordCase = case_to;
			WordNumber = number_to;
			return Word;
			}

		/// <summary>
		/// <para>RUS: Определяет падеж, если он не был задан вручную</para>
		/// <para>ENG: Determines the case if it was not set manually</para>
		/// </summary>
		/// <returns>Определённый падеж или None, если возникла неоднозначность</returns>
		public Cases DetectCase()
		{
			if (WordCase != Cases.None) { return WordCase; }
			return WordCase;
		}

		/// <summary>
		/// <para>RUS: Привести класс к строке, т.е. вернуть слово</para>
		/// <para>ENG: Convert class to string</para>
		/// </summary>
		/// <returns>Слово</returns>
		public override string ToString()
		{
			return Word;
		}

		private string WordNominative;

		private void ToNominative()
        {
			if (WordNominative != "")
			{
				Word = WordNominative;
			}
		}
	}
}
