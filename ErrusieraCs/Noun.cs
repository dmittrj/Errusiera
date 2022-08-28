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
						throw new Exception("Number of the Word is undefind. Please call DetectNumber()");
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
									Regex.IsMatch(Word, "[ ]!--й--!!++я++!", Word);
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Regex.IsMatch(Word, "[ ]!--а--!!++у++!", Word);
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Regex.IsMatch(Word, "[ ]!--я--!!++ю++!", Word);
								}
								else if (Regex.IsMatch(Word, "жь$"))
								{

								}
								else if (Regex.IsMatch(Word, "шь$"))
								{

								}
								else if (Regex.IsMatch(Word, "ь$"))
								{
									Regex.IsMatch(Word, "[ ]!--ь--!!++я++!", Word);
								}
								break;
							case Cases.Instrumental:
								if (Regex.IsMatch(Word, "й$"))
								{
									Regex.IsMatch(Word, "[ ]!--й--!!++ем++!", Word);
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Regex.IsMatch(Word, "[ ]!--а--!!++ой++!", Word);
								}
								else if (Regex.IsMatch(Word, "мя$"))
								{
									Regex.IsMatch(Word, "[ ]м!--я--!!++енем++!", Word);
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Regex.IsMatch(Word, "[ ]!--я--!!++ей++!", Word);
								}
								else if (Regex.IsMatch(Word, "жь$"))
								{
									Regex.IsMatch(Word, "[ ]жь!++ю++!", Word);
								}
								else if (Regex.IsMatch(Word, "шь$"))
								{
									Regex.IsMatch(Word, "[ ]шь!++ю++!", Word);
								}
								else if (Regex.IsMatch(Word, "рь$"))
								{
									Regex.IsMatch(Word, "[ ]р!--ь--!!++ем++!", Word);
								}
								else if (Regex.IsMatch(Word, "ль$"))
								{
									Regex.IsMatch(Word, "[ ]л!--ь--!!++ем++!", Word);
								}
								else if (Regex.IsMatch(Word, "сь$"))
								{
									Regex.IsMatch(Word, "[ ]с!--ь--!!++ем++!", Word);
								}
								else if (Regex.IsMatch(Word, "ь$"))
								{
									Regex.IsMatch(Word, "[ ]!--ь--!!++ём++!", Word);
								}
								else
								{
									Regex.IsMatch(Word, "[_]!++ом++!", Word);
								}
								break;
							case Cases.Prepositional:
								if (Regex.IsMatch(Word, "ий$"))
								{
									Regex.IsMatch(Word, "[ ]и!--й--!!++и++!", Word);
								}
								else if (Regex.IsMatch(Word, "й$"))
								{
									Regex.IsMatch(Word, "[ ]!--й--!!++е++!", Word);
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Regex.IsMatch(Word, "[ ]!--а--!!++е++!", Word);
								}
								else if (Regex.IsMatch(Word, "мя$"))
								{
									Regex.IsMatch(Word, "[ ]м!--я--!!++ени++!", Word);
								}
								else if (Regex.IsMatch(Word, "ия$"))
								{
									Regex.IsMatch(Word, "[ ]и!--я--!!++и++!", Word);
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Regex.IsMatch(Word, "[ ]!--я--!!++е++!", Word);
								}
								else
								{
									Regex.IsMatch(Word, "[_]!++е++!", Word);
								}
								break;
							default:
								throw new Exception("Case of the Word is undefind. Please call DetectCase()");
						}
						break;
					case Number.Paucal:
						break;
					case Number.Plural:
						switch (case_to)
						{
							case Cases.None:
								throw new Exception("Case of the Word is undefind. Please call DetectCase()");
							case Cases.Nominative:
								if (Regex.IsMatch(Word, "й$"))
								{
									Regex.IsMatch(Word, "[ ]!--й--!!++и++!", Word);
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Regex.IsMatch(Word, "[ ]к!--а--!!++и++!", Word);
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Regex.IsMatch(Word, "[ ]!--а--!!++ы++!", Word);
								}
								else if (Regex.IsMatch(Word, "я$"))
								{
									Regex.IsMatch(Word, "[ ]!--я--!!++и++!", Word);
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Regex.IsMatch(Word, "[ ]!--ок--!!++ки++!", Word);
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Regex.IsMatch(Word, "[ ]!--ек--!!++ки++!", Word);
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Regex.IsMatch(Word, "[ ]!++и++!", Word);
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Regex.IsMatch(Word, "[ ]!--е--!!++я++!", Word);
								}
								else if (Regex.IsMatch(Word, "ё$"))
								{
									Regex.IsMatch(Word, "[ ]!--ё--!!++я++!", Word);
								}
								else
								{
									Regex.IsMatch(Word, "[_]!++ы++!", Word);
								}
								break;
							case Cases.Genetive:
								if (Regex.IsMatch(Word, "й$"))
								{
									Regex.IsMatch(Word, "[ ]!--й--!!++ев++!", Word);
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Regex.IsMatch(Word, "[ ]!--ка--!!++ок++!", Word);
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Regex.IsMatch(Word, "[ ]!--а--!", Word);
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Regex.IsMatch(Word, "[ ]!--ок--!!++ков++!", Word);
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Regex.IsMatch(Word, "[ ]!--ек--!!++ков++!", Word);
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Regex.IsMatch(Word, "[ ]!++ов++!", Word);
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Regex.IsMatch(Word, "[ ]!++в++!", Word);
								}
								else
								{
									Regex.IsMatch(Word, "[_]!++ов++!", Word);
								}
								break;
							case Cases.Dative:
								if (Regex.IsMatch(Word, "й$"))
								{
									Regex.IsMatch(Word, "[ ]!--й--!!++ям++!", Word);
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Regex.IsMatch(Word, "[ ]ка!++м++!", Word);
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Regex.IsMatch(Word, "[ ]а!++м++!", Word);
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Regex.IsMatch(Word, "[ ]!--ок--!!++кам++!", Word);
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Regex.IsMatch(Word, "[ ]!--ек--!!++кам++!", Word);
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Regex.IsMatch(Word, "[ ]!++ам++!", Word);
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Regex.IsMatch(Word, "[ ]!--е--!!++ям++!", Word);
								}
								else
								{
									Regex.IsMatch(Word, "[_]!++ам++!", Word);
								}
								break;
							case Cases.Accusative:
								break;
							case Cases.Instrumental:
								if (Regex.IsMatch(Word, "й$"))
								{
									Regex.IsMatch(Word, "[ ]!--й--!!++ями++!", Word);
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Regex.IsMatch(Word, "[ ]ка!++ми++!", Word);
								}
								else if (Regex.IsMatch(Word, "а$"))
								{
									Regex.IsMatch(Word, "[ ]а!++ми++!", Word);
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Regex.IsMatch(Word, "[ ]!--ок--!!++ками++!", Word);
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Regex.IsMatch(Word, "[ ]!--ек--!!++ками++!", Word);
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Regex.IsMatch(Word, "[ ]!++ами++!", Word);
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Regex.IsMatch(Word, "[ ]!--е--!!++ями++!", Word);
								}
								else
								{
									Regex.IsMatch(Word, "[_]!++ами++!", Word);
								}
								break;
							case Cases.Prepositional:
								if (Regex.IsMatch(Word, "й$"))
								{
									Regex.IsMatch(Word, "[ ]!--й--!!++ях++!", Word);
								}
								else if (Regex.IsMatch(Word, "ка$"))
								{
									Regex.IsMatch(Word, "[ ]ка!++х++!", Word);
								}
								else if (Regex.IsMatch(Word, "ок$"))
								{
									Regex.IsMatch(Word, "[ ]!--ок--!!++ках++!", Word);
								}
								else if (Regex.IsMatch(Word, "ек$"))
								{
									Regex.IsMatch(Word, "[ ]!--ек--!!++ках++!", Word);
								}
								else if (Regex.IsMatch(Word, "к$"))
								{
									Regex.IsMatch(Word, "[ ]!++ах++!", Word);
								}
								else if (Regex.IsMatch(Word, "е$"))
								{
									Regex.IsMatch(Word, "[ ]!--е--!!++ях++!", Word);
								}
								else
								{
									Regex.IsMatch(Word, "[_]!++ах++!", Word);
								}
								break;
							default:
								throw new Exception("Case of the Word is undefind. Please call DetectCase()");
						}
						break;
					default:
						throw new Exception("Number of the Word is undefind. Please call DetectNumber()");
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
