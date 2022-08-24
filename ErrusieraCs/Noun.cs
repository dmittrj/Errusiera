using System;
using System.Collections.Generic;
using System.Text;

namespace Errusiera
{
	// Errusiera for C# 1.0.0-beta2
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
		/// <param name="word_noun_only">Слово</param>
		public Noun(string word_noun_only)
		{
			Word = word_noun_only;
		}

		/// <summary>
		/// <para>RUS: Конструктор со всеми параметрами. После объявления можно пользоваться</para>
		/// <para>ENG: Constructor with all parameters. You can use all functions after declaration</para>
		/// </summary>
		/// <param name="word_noun_only">Слово</param>
		/// <param name="noun_case">Падеж</param>
		/// <param name="noun_number">Число</param>
		public Noun(string word_noun_only, Cases noun_case, Number noun_number)
		{
			Word = word_noun_only;
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
			if (case_to == WordCase) { return ""; }
			ToNominative();
			switch (case_to)
			{
				case Cases.Genetive:
					if (Word[^1] == 'й')
					{
						Word = Word[0..^1] + "я";
					}
					else if (Word[^1] == 'а')
					{
						Word = Word[0..^1] + "ы";
					}
					else if (Word[^2..] == "мя")
					{
						Word = Word[0..^1] + "ени";
					}
					else if (Word[^1] == 'я')
					{
						Word = Word[0..^1] + "и";
					}
					else if (Word[^1] == 'ь')
					{
						if (Word[^2] == 'ш' || Word[^2] == 'ж')
						{
							Word = Word[0..^1] + "и";
						} else
                        {
							Word = Word[0..^1] + "я";
						}
					}
					else
					{
						Word += "а";
					}
					break;
				case Cases.Dative:
					if (Word[^1] == 'й')
					{
						Word = Word[0..^1] + "ю";
					}
					else if(Word[^1] == 'а')
					{
						Word = Word[0..^1] + "е";
					}
					else if (Word[^2..] == "мя")
					{
						Word = Word[0..^1] + "ени";
					}
					else if (Word[^1] == 'я')
					{
						Word = Word[0..^1] + "е";
					}
					else if (Word[^1] == 'ь')
					{
						if (Word[^2] == 'ш' || Word[^2] == 'ж')
						{
							Word = Word[0..^1] + "и";
						}
						else
						{
							Word = Word[0..^1] + "ю";
						}
					}
					else
					{
						Word += "у";
					}
					break;
				case Cases.Accusative:
					if (Word[^1] == 'й')
					{
						Word = Word[0..^1] + "я";
					}
					else if (Word[^1] == 'а')
					{
						Word = Word[0..^1] + "у";
					}
					else if (Word[^2..] == "мя")
					{

					}
					else if (Word[^1] == 'я')
					{
						Word = Word[0..^1] + "ю";
					}
					else if (Word[^1] == 'ь')
					{
						if (Word[^2] == 'ш' || Word[^2] == 'ж')
						{
						}
						else
						{
							Word = Word[0..^1] + "я";
						}
					}
					break;
				case Cases.Instrumental:
					if (Word[^1] == 'й')
					{
						Word = Word[0..^1] + "ем";
					}
					else if (Word[^1] == 'а')
					{
						Word = Word[0..^1] + "ой";
					}
					else if (Word[^2..] == "мя")
					{
						Word = Word[0..^1] + "енем";
					}
					else if (Word[^1] == 'я')
					{
						Word = Word[0..^1] + "ей";
					}
					else if (Word[^1] == 'ь')
					{
						if (Word[^2] == 'ш' || Word[^2] == 'ж')
						{
							Word = Word[0..^1] + "ю";
						}
						else if (Word[^2] == 'р' || Word[^2] == 'л' || Word[^2] == 'с')
						{
							Word = Word[0..^1] + "ем";
						}
						else
						{
							Word = Word[0..^1] + "ём";
						}
					}
					else
					{
						Word += "ом";
					}
					break;
				case Cases.Prepositional:
					if (Word[^2..^1] == "ий")
					{
						Word = Word[0..^2] + "ии";
					} else
					if (Word[^1] == 'й')
					{
						Word = Word[0..^1] + "е";
					}
					else
					if (Word[^1] == 'а')
					{
						Word = Word[0..^1] + "е";
					}
					else if (Word[^2..] == "мя")
					{
						Word = Word[0..^1] + "ене";
					}
					else if (Word[^1] == 'я')
					{
						Word = Word[0..^1] + "е";
					}
					else
					{
						Word += "е";
					}
					break;
				default:
					break;
					
			}
			return "";
		}

		/// <summary>
		/// <para>RUS: Меняет число имени существительного</para>
		/// <para>ENG: The function changes the number of the noun</para>
		/// </summary>
		/// <param name="number_to">| Число</param>
		/// <returns>Слово в заказанном числе</returns>
		public string ChangeNumber(Number number_to)
		{
			if (number_to == WordNumber) { return Word; }
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

        }
	}
}
