using System;
using System.Collections.Generic;
using System.Text;

namespace ErrusieraCs
{
	enum Cases
	{
		Nominative, Genetive, Dative, Accusative, Instrumental, Prepositional
	};

	enum Number
	{
		Singular, Paucal, Plural
	};
	class Noun
    {
		public string Word;
		private Cases WordCase;
		private Number WordNumber;
		public Noun(string word_noun_only)
		{
			Word = word_noun_only;
		}
		public Noun(string word_noun_only, Cases noun_case, Number noun_number)
		{
			Word = word_noun_only;
			WordCase = noun_case;
			WordNumber = noun_number;

			WordNominative = Word;
		}
		~Noun() { }

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
