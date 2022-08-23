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
		}
		~Noun() { }

		public void ChangeCase(Cases case_to)
		{
			if (case_to == WordCase) { return; }
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
					else
					{
						Word += "у";
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
					else
					{
						Word += "у";
					}
					break;
				case Cases.Accusative:
					break;
				case Cases.Instrumental:
					break;
				case Cases.Prepositional:
					break;
				default:
					break;
			}
		}

		public override string ToString()
		{
			return Word;
		}


		private void ToNominative()
        {

        }
	}
}
