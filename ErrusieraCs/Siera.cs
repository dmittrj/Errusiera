using System;
using System.Collections.Generic;
using System.Text;

namespace Errusiera
{
	// Errusiera for C# 1.0.0-beta5
	// Dmitry Balabanov | github.com/dmittrj/Errusiera
	class Siera
    {
		public static bool Pattern(string str_to_compare, string _pattern, ref string changed_string, bool _eraser_mode)
		{
			str_to_compare = str_to_compare.Trim();
			if (_pattern == "")
			{
				if (str_to_compare == "")
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			if (str_to_compare.Length < 2) str_to_compare += "  ";
			//string _new_string = "";
			string _symbol;
			_symbol = _pattern.Length >= 2 ? _pattern.Substring(0, 2) : _pattern;
			string _new_temp_string = "";
			if (_symbol == "**")
			{
				// Any number of letters
				int _str_length = str_to_compare.Length;
				for (int i = _str_length; i >= 0; i--)
				{
					if (Pattern(str_to_compare[i..], _pattern[2..], ref _new_temp_string, _eraser_mode))
					{
						changed_string = str_to_compare.Substring(0, i) + _new_temp_string;
						return true;
					}
				}
			}
			else if (_symbol == "*_")
			{
				// All the rest letters
				int _str_length = str_to_compare.Length;
				if (Pattern(str_to_compare[_str_length..], _pattern[2..], ref _new_temp_string, _eraser_mode))
				{
					changed_string = str_to_compare.Substring(0, _str_length) + _new_temp_string;
					return true;
				}
			}
			else if (_symbol == "!-")
			{
				return Pattern(str_to_compare, _pattern[2..], ref changed_string, true);
			}
			else if (_symbol == "-!")
			{
				return Pattern(str_to_compare, _pattern[2..], ref changed_string, false);
			}
			else if (_symbol == "!+")
			{
				int _counter = 2;
				while (true)
				{
					_symbol = _pattern.Substring(_counter, 1);
					if (_symbol == "+")
					{
						bool _tmp_add = Pattern(str_to_compare, _pattern.Substring(_counter + 2), ref changed_string, _eraser_mode);
						changed_string = _new_temp_string + changed_string;
						return _tmp_add;
					}
					else
					{
						_new_temp_string += _symbol;
						_counter++;
					}
				}
				//return pattern(str_to_compare, _pattern.substr(3), changed_string, true);
			}
			else if ((str_to_compare[0] == _symbol[0]) && Pattern(str_to_compare[1..], _pattern[1..], ref _new_temp_string, _eraser_mode))
			{
				if (_eraser_mode)
				{
					changed_string = _new_temp_string;
				}
				else
				{
					changed_string = str_to_compare[0] + _new_temp_string;
				}
				return true;
			}
			return false;
		}

		public static bool Pattern(string str_to_compare, string _pattern, ref string changed_string)
		{
			return Pattern(str_to_compare, _pattern, ref changed_string, false);
		}

		public static bool Pattern(string str_to_compare, string _pattern)
		{
			string _trash = "";
			return Pattern(str_to_compare, _pattern, ref _trash);
		}
	}
}
