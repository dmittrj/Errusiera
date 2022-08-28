using System;
using System.Collections.Generic;
using System.Text;

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
			if (case_to == WordCase) { return Word; }
			ToNominative();
			switch (case_to)
			{
				case Cases.Genetive:
					if (Siera.Pattern(Word, "**й"))
					{
						Siera.Pattern(Word, "**!-й-!!+я+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**а"))
					{
						Siera.Pattern(Word, "**!-а-!!+ы+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**мя"))
					{
						Siera.Pattern(Word, "**м!-я-!!+ени+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**я"))
					{
						Siera.Pattern(Word, "**!-я-!!+и+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**жь"))
					{
						Siera.Pattern(Word, "**ж!-ь-!!+и+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**шь"))
					{
						Siera.Pattern(Word, "**ш!-ь-!!+и+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**ь"))
					{
						Siera.Pattern(Word, "**!-ь-!!+я+!", ref Word);
					}
					else
					{
						Siera.Pattern(Word, "*_!+а+!", ref Word);
					}
					break;
				case Cases.Dative:
					if (Siera.Pattern(Word, "**й"))
					{
						Siera.Pattern(Word, "**!-й-!!+ю+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**а"))
					{
						Siera.Pattern(Word, "**!-а-!!+е+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**мя"))
					{
						Siera.Pattern(Word, "**м!-я-!!+ени+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**я"))
					{
						Siera.Pattern(Word, "**!-я-!!+е+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**жь"))
					{
						Siera.Pattern(Word, "**ж!-ь-!!+и+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**шь"))
					{
						Siera.Pattern(Word, "**ш!-ь-!!+и+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**ь"))
					{
						Siera.Pattern(Word, "**!-ь-!!+ю+!", ref Word);
					}
					else
					{
						Siera.Pattern(Word, "*_!+у+!", ref Word);
					}
					break;
				case Cases.Accusative:
					if (Siera.Pattern(Word, "**й"))
					{
						Siera.Pattern(Word, "**!-й-!!+я+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**а"))
					{
						Siera.Pattern(Word, "**!-а-!!+у+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**я"))
					{
						Siera.Pattern(Word, "**!-я-!!+ю+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**жь"))
					{

					}
					else if (Siera.Pattern(Word, "**шь"))
					{

					}
					else if (Siera.Pattern(Word, "**ь"))
					{
						Siera.Pattern(Word, "**!-ь-!!+я+!", ref Word);
					}
					break;
				case Cases.Instrumental:
					if (Siera.Pattern(Word, "**й"))
					{
						Siera.Pattern(Word, "**!-й-!!+ем+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**а"))
					{
						Siera.Pattern(Word, "**!-а-!!+ой+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**мя"))
					{
						Siera.Pattern(Word, "**м!-я-!!+енем+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**я"))
					{
						Siera.Pattern(Word, "**!-я-!!+ей+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**жь"))
					{
						Siera.Pattern(Word, "**жь!+ю+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**шь"))
					{
						Siera.Pattern(Word, "**шь!+ю+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**рь"))
					{
						Siera.Pattern(Word, "**р!-ь-!!+ем+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**ль"))
					{
						Siera.Pattern(Word, "**л!-ь-!!+ем+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**сь"))
					{
						Siera.Pattern(Word, "**с!-ь-!!+ем+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**ь"))
					{
						Siera.Pattern(Word, "**!-ь-!!+ём+!", ref Word);
					}
					else
					{
						Siera.Pattern(Word, "*_!+ом+!", ref Word);
					}
					break;
				case Cases.Prepositional:
					if (Siera.Pattern(Word, "**ий"))
					{
						Siera.Pattern(Word, "**и!-й-!!+и+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**й"))
					{
						Siera.Pattern(Word, "**!-й-!!+е+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**а"))
					{
						Siera.Pattern(Word, "**!-а-!!+е+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**мя"))
					{
						Siera.Pattern(Word, "**м!-я-!!+ени+!", ref Word);
					}
					else if (Siera.Pattern(Word, "**я"))
					{
						Siera.Pattern(Word, "**!-я-!!+е+!", ref Word);
					}
					else
					{
						Siera.Pattern(Word, "*_!+е+!", ref Word);
					}
					break;
				default:
					break;
			}
			WordCase = case_to;
			return Word;
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
			if (WordNominative != "")
			{
				Word = WordNominative;
			}
		}
	}
}
