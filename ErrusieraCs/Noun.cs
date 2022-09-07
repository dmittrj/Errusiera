using System;
using System.Collections.Generic;
using System.Text;
using System.Text.RegularExpressions;

namespace Errusiera
{
	// Errusiera for C# 1.0.6
	// Dmitry Balabanov | github.com/dmittrj/Errusiera

	/// <summary>
	/// Падежи
	/// </summary>
	public enum Cases
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
	public enum Number
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
	/// Рода
	/// </summary>
	public enum Gender
	{
		/// <summary>
		/// Род неизвестен
		/// </summary>
		None,
		/// <summary>
		/// Мужской род
		/// </summary>
		Masculine,
		/// <summary>
		/// Женский род
		/// </summary>
		Feminine,
		/// <summary>
		/// Средний род
		/// </summary>
		Neuter
	};

	/// <summary>
	/// Одушевлённость
	/// </summary>
	public enum Animacy
	{
		/// <summary>
		/// Неизвестно
		/// </summary>
		None,
		/// <summary>
		/// Одушевлённое
		/// </summary>
		Animate,
		/// <summary>
		/// Неодушевлённое
		/// </summary>
		Inanimate
	};

	/// <summary>
	/// Имя существительное
	/// </summary>
	public class Noun
	{
		/// <summary>
		/// Слово
		/// </summary>
		public string Word;
		public Cases WordCase;
		public Number WordNumber;
		public Gender WordGender
		{
			get
			{
				string _old_word = Word;
				ToDefault();
				if (Regex.IsMatch(Word, "а$") || Regex.IsMatch(Word, "я$") || Regex.IsMatch(Word, "ь$"))
				{
					Word = _old_word;
					return Gender.Feminine;
				}
				else if (Regex.IsMatch(Word, "о$") || Regex.IsMatch(Word, "е$"))
				{
					Word = _old_word;
					return Gender.Neuter;
				}
				else
				{
					Word = _old_word;
					return Gender.Masculine;
				}
			}
			set { }
		}
		public Animacy WordAnimacy;

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
		/// <param name="noun_gender">Род</param>
		/// <param name="noun_animacy">Одушевленность</param>
		public Noun(string Word_noun_only, Cases noun_case, Number noun_number, Gender noun_gender, Animacy noun_animacy)
		{
			Word = Word_noun_only;
			WordCase = noun_case;
			WordNumber = noun_number;
			WordGender = noun_gender;
			WordAnimacy = noun_animacy;

			if (WordCase == Cases.Nominative && WordNumber == Number.Singular)
            {
				WordNominative = Word;
			}
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
			string _word = Conjugate(case_to, number_to);
			WordCase = case_to;
			WordNumber = number_to;
			Word = _word;
			return _word;
		}

		/// <summary>
		/// <para>RUS: Склоняет существительное</para>
		/// <para>ENG: Conjugates the noun</para>
		/// </summary>
		/// <param name="case_to">Падеж</param>
		/// <param name="number_to">Число</param>
		/// <returns>Изменённое слово</returns>
		public string Conjugate(Cases case_to, Number number_to)
        {
			if (case_to == WordCase && number_to == WordNumber) { return Word; }
			string _word = ToDefault();
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
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "я");
								}
								else if (Regex.IsMatch(_word, "га$"))
								{
									_word = Regex.Replace(_word, "га$", "ги");
								}
								else if (Regex.IsMatch(_word, "ка$"))
								{
									_word = Regex.Replace(_word, "ка$", "ки");
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word = Regex.Replace(_word, "а$", "ы");
								}
								else if (Regex.IsMatch(_word, "мя$"))
								{
									_word = Regex.Replace(_word, "мя$", "мени");
								}
								else if (Regex.IsMatch(_word, "я$"))
								{
									_word = Regex.Replace(_word, "я$", "и");
								}
								else if (Regex.IsMatch(_word, "жь$"))
								{
									_word = Regex.Replace(_word, "жь$", "жи");
								}
								else if (Regex.IsMatch(_word, "шь$"))
								{
									_word = Regex.Replace(_word, "шь$", "ши");
								}
								else if (Regex.IsMatch(_word, "дь$"))
								{
									_word = Regex.Replace(_word, "дь$", "ди");
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "я");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "ца");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word = Regex.Replace(_word, "о$", "а");
								}
								else
								{
									_word += "а";
								}
								break;
							case Cases.Dative:
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "ю");
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word = Regex.Replace(_word, "а$", "е");
								}
								else if (Regex.IsMatch(_word, "мя$"))
								{
									_word = Regex.Replace(_word, "мя$", "мени");
								}
								else if (Regex.IsMatch(_word, "я$"))
								{
									_word = Regex.Replace(_word, "я$", "е");
								}
								else if (Regex.IsMatch(_word, "жь$"))
								{
									_word = Regex.Replace(_word, "жь$", "жи");
								}
								else if (Regex.IsMatch(_word, "шь$"))
								{
									_word = Regex.Replace(_word, "шь$", "ши");
								}
								else if (Regex.IsMatch(_word, "дь$"))
								{
									_word = Regex.Replace(_word, "дь$", "ди");
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "ю");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "цу");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word = Regex.Replace(_word, "о$", "у");
								}
								else
								{
									_word += "у";
								}
								break;
							case Cases.Accusative:
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "я");
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word = Regex.Replace(_word, "а$", "у");
								}
								else if (Regex.IsMatch(_word, "я$"))
								{
									_word = Regex.Replace(_word, "я$", "ю");
								}
								else if (Regex.IsMatch(_word, "дь$"))
								{

								}
								else if (Regex.IsMatch(_word, "шь$"))
								{
									
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "я");
								}
								else if (Regex.IsMatch(_word, "ец$") && WordAnimacy == Animacy.Animate)
								{
									_word = Regex.Replace(_word, "ец$", "ца");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									
								}
								else
                                {
									if (WordAnimacy == Animacy.Animate)
                                    {
										_word += "а";
									}
								}
								break;
							case Cases.Instrumental:
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "ем");
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word = Regex.Replace(_word, "а$", "ой");
								}
								else if (Regex.IsMatch(_word, "мя$"))
								{
									_word = Regex.Replace(_word, "мя$", "менем");
								}
								else if (Regex.IsMatch(_word, "я$"))
								{
									_word = Regex.Replace(_word, "я$", "ей");
								}
								else if (Regex.IsMatch(_word, "жь$"))
								{
									_word = Regex.Replace(_word, "жь$", "жью");
								}
								else if (Regex.IsMatch(_word, "шь$"))
								{
									_word = Regex.Replace(_word, "шь$", "шью");
								}
								else if (Regex.IsMatch(_word, "рь$"))
								{
									_word = Regex.Replace(_word, "рь$", "рем");
								}
								else if (Regex.IsMatch(_word, "ль$"))
								{
									_word = Regex.Replace(_word, "ль$", "лем");
								}
								else if (Regex.IsMatch(_word, "сь$"))
								{
									_word = Regex.Replace(_word, "сь$", "сем");
								}
								else if (Regex.IsMatch(_word, "дь$"))
								{
									_word = Regex.Replace(_word, "дь$", "дью");
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "ём");
								}
								else if (Regex.IsMatch(_word, "борец$"))
								{
									_word = Regex.Replace(_word, "борец$", "борцом");
								}
								else if (Regex.IsMatch(_word, "гонец$"))
								{
									_word = Regex.Replace(_word, "гонец$", "гонцом");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "цем");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word += "м";
								}
								else
								{
									_word += "ом";
								}
								break;
							case Cases.Prepositional:
								if (Regex.IsMatch(_word, "ий$"))
								{
									_word = Regex.Replace(_word, "ий$", "ии");
								}
								else if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "е");
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word = Regex.Replace(_word, "а$", "е");
								}
								else if (Regex.IsMatch(_word, "мя$"))
								{
									_word = Regex.Replace(_word, "мя$", "мени");
								}
								else if (Regex.IsMatch(_word, "ия$"))
								{
									_word = Regex.Replace(_word, "ия$", "ии");
								}
								else if (Regex.IsMatch(_word, "я$"))
								{
									_word = Regex.Replace(_word, "я$", "е");
								}
								else if (Regex.IsMatch(_word, "дь$"))
								{
									_word = Regex.Replace(_word, "дь$", "ди");
								}
								else if (Regex.IsMatch(_word, "шь$"))
								{
									_word = Regex.Replace(_word, "шь$", "ши");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "це");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word = Regex.Replace(_word, "о$", "е");
								}
								else
								{
									_word += "е";
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
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "и");
								}
								else if (_word == "стул")
								{
									_word += "ья";
								}
								else if (Regex.IsMatch(_word, "га$"))
								{
									_word = Regex.Replace(_word, "га$", "ги");
								}
								else if (Regex.IsMatch(_word, "ка$"))
								{
									_word = Regex.Replace(_word, "ка$", "ки");
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word = Regex.Replace(_word, "а$", "ы");
								}
								else if (Regex.IsMatch(_word, "я$"))
								{
									_word = Regex.Replace(_word, "я$", "и");
								}
								else if (Regex.IsMatch(_word, "ок$"))
								{
									_word = Regex.Replace(_word, "ок$", "ки");
								}
								else if (Regex.IsMatch(_word, "ек$"))
								{
									_word = Regex.Replace(_word, "ек$", "ки");
								}
								else if (Regex.IsMatch(_word, "к$"))
								{
									_word += "и";
								}
								else if (Regex.IsMatch(_word, "е$"))
								{
									_word = Regex.Replace(_word, "е$", "я");
								}
								else if (Regex.IsMatch(_word, "ё$"))
								{
									_word = Regex.Replace(_word, "ё$", "я");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "цы");
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "и");
								}
								else if (Regex.IsMatch(_word, "ч$"))
								{
									_word = Regex.Replace(_word, "ч$", "чи");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word = Regex.Replace(_word, "о$", "а");
								}
								else
								{
									_word += "ы";
								}
								break;
							case Cases.Genetive:
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "ев");
								}
								else if (_word == "стул")
								{
									_word += "ьев";
								}
								else if (Regex.IsMatch(_word, "ка$"))
								{
									_word = Regex.Replace(_word, "ка$", "ек");
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word = Regex.Replace(_word, "а$", "");
								}
								else if (Regex.IsMatch(_word, "ок$"))
								{
									_word = Regex.Replace(_word, "ок$", "ков");
								}
								else if (Regex.IsMatch(_word, "ек$"))
								{
									_word = Regex.Replace(_word, "ек$", "ков");
								}
								else if (Regex.IsMatch(_word, "к$"))
								{
									_word += "ов";
								}
								else if (Regex.IsMatch(_word, "е$"))
								{
									_word += "в";
								}
								else if (Regex.IsMatch(_word, "борец$"))
								{
									_word = Regex.Replace(_word, "борец$", "борцов");
								}
								else if (Regex.IsMatch(_word, "гонец$"))
								{
									_word = Regex.Replace(_word, "гонец$", "гонцов");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "цев");
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "ей");
								}
								else if (Regex.IsMatch(_word, "ч$"))
								{
									_word = Regex.Replace(_word, "ч$", "чей");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word = Regex.Replace(_word, "о$", "");
								}
								else
								{
									_word += "ов";
								}
								break;
							case Cases.Dative:
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "ям");
								}
								else if (_word == "стул")
								{
									_word += "ьям";
								}
								else if (Regex.IsMatch(_word, "ка$"))
								{
									_word += "м";
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word += "м";
								}
								else if (Regex.IsMatch(_word, "ок$"))
								{
									_word = Regex.Replace(_word, "ок$", "кам");
								}
								else if (Regex.IsMatch(_word, "ек$"))
								{
									_word = Regex.Replace(_word, "ек$", "кам");
								}
								else if (Regex.IsMatch(_word, "к$"))
								{
									_word += "ам";
								}
								else if (Regex.IsMatch(_word, "е$"))
								{
									_word = Regex.Replace(_word, "е$", "ям");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "цам");
								}
								else if (Regex.IsMatch(_word, "шь$"))
								{
									_word = Regex.Replace(_word, "шь$", "шам");
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "ям");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word = Regex.Replace(_word, "о$", "ам");
								}
								else
								{
									_word += "ам";
								}
								break;
							case Cases.Accusative:
                                if (WordAnimacy == Animacy.Animate)
                                {
									goto case Cases.Genetive;
                                } else
                                {
									goto case Cases.Nominative;
                                }
							case Cases.Instrumental:
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "ями");
								}
								else if (_word == "стул")
								{
									_word += "ьями";
								}
								else if (Regex.IsMatch(_word, "ка$"))
								{
									_word += "ми";
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word += "ми";
								}
								else if (Regex.IsMatch(_word, "ок$"))
								{
									_word = Regex.Replace(_word, "ок$", "ками");
								}
								else if (Regex.IsMatch(_word, "ек$"))
								{
									_word = Regex.Replace(_word, "ек$", "ками");
								}
								else if (Regex.IsMatch(_word, "к$"))
								{
									_word += "ами";
								}
								else if (Regex.IsMatch(_word, "е$"))
								{
									_word = Regex.Replace(_word, "е$", "ями");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "цами");
								}
								else if (Regex.IsMatch(_word, "шь$"))
								{
									_word = Regex.Replace(_word, "шь$", "шами");
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "ями");
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word = Regex.Replace(_word, "о$", "ами");
								}
								else
								{
									_word += "ами";
								}
								break;
							case Cases.Prepositional:
								if (Regex.IsMatch(_word, "й$"))
								{
									_word = Regex.Replace(_word, "й$", "ях");
								}
								else if (_word == "стул")
								{
									_word += "ьях";
								}
								else if (Regex.IsMatch(_word, "ка$"))
								{
									_word += "х";
								}
								else if (Regex.IsMatch(_word, "ок$"))
								{
									_word = Regex.Replace(_word, "ок$", "ках");
								}
								else if (Regex.IsMatch(_word, "ек$"))
								{
									_word = Regex.Replace(_word, "ек$", "ках");
								}
								else if (Regex.IsMatch(_word, "к$"))
								{
									_word += "ах";
								}
								else if (Regex.IsMatch(_word, "е$"))
								{
									_word = Regex.Replace(_word, "е$", "ях");
								}
								else if (Regex.IsMatch(_word, "ец$"))
								{
									_word = Regex.Replace(_word, "ец$", "цах");
								}
								else if (Regex.IsMatch(_word, "шь$"))
								{
									_word = Regex.Replace(_word, "шь$", "шах");
								}
								else if (Regex.IsMatch(_word, "ь$"))
								{
									_word = Regex.Replace(_word, "ь$", "ях");
								}
								else if (Regex.IsMatch(_word, "а$"))
								{
									_word += "х";
								}
								else if (Regex.IsMatch(_word, "о$"))
								{
									_word = Regex.Replace(_word, "о$", "ах");
								}
								else
								{
									_word += "ах";
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
			catch (Exception _exception)
			{
				return "[Alert] " + _exception.Message + "\n";
			}
			return _word;
		}

		/// <summary>
		/// <para>RUS: Трансформирует существительное в прилагательное</para>
		/// <para>ENG: Transform noun to adjective</para> 
		/// </summary>
		/// <param name="_case">Падеж</param>
		/// <param name="_number">Число</param>
		/// <param name="_gender">Род</param>
		/// <returns>Прилагательное с заданными параметрами</returns>
		public Adjective BuildAdjective(Cases _case, Number _number, Gender _gender)
        {
			string _word = ToDefault();
			if (Regex.IsMatch(_word, "жа$"))
			{
				_word += "ный";
			}
			else if (Regex.IsMatch(_word, "фа$"))
			{
				_word = Regex.Replace(_word, "фа$", "фовый");
			}
			else if (Regex.IsMatch(_word, "а$"))
			{
				_word = Regex.Replace(_word, "а$", "ный");
			}
			Adjective _adjective = new Adjective(_word, Cases.Nominative, Number.Singular, Gender.Masculine);
			_adjective.ChangeWord(_case, _number, _gender);
			return _adjective;
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

		public static bool Yo = true;

		private string ToDefault()
        {
			if (WordNominative != "")
			{
				return WordNominative;
			}
			return WordNominative;
		}
	}
}
