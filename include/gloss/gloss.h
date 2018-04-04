#pragma once

#include <string>

namespace gloss {
	class Gloss {
	private:
		std::string _str;
	public:
		Gloss(std::string str) : _str(str) {};

		Gloss bold() { return Gloss("\e[1m" + _str + "\e[21m"); }
		Gloss dim() { return Gloss("\e[2m" + _str + "\e[22m"); }
		Gloss underline() { return Gloss("\e[4m" + _str + "\e[24m"); }
		Gloss blink() { return Gloss("\e[5m" + _str + "\e[25m"); }
		Gloss reverse() { return Gloss("\e[7m" + _str + "\e[27m"); }
		Gloss hidden() { return Gloss("\e[8m" + _str + "\e[28m"); }

		Gloss black() { return Gloss("\e[30m" + _str + "\e[39m"); }
		Gloss red() { return Gloss("\e[31m" + _str + "\e[39m"); }
		Gloss green() { return Gloss("\e[32m" + _str + "\e[39m"); }
		Gloss yellow() { return Gloss("\e[33m" + _str + "\e[39m"); }
		Gloss blue() { return Gloss("\e[34m" + _str + "\e[39m"); }
		Gloss magenta() { return Gloss("\e[35m" + _str + "\e[39m"); }
		Gloss cyan() { return Gloss("\e[36m" + _str + "\e[39m"); }
		Gloss lightGray() { return Gloss("\e[37m" + _str + "\e[39m"); }
		Gloss darkGray() { return Gloss("\e[90m" + _str + "\e[39m"); }
		Gloss lightRed() { return Gloss("\e[91m" + _str + "\e[39m"); }
		Gloss lightGreen() { return Gloss("\e[92m" + _str + "\e[39m"); }
		Gloss lightYellow() { return Gloss("\e[93m" + _str + "\e[39m"); }
		Gloss lightBlue() { return Gloss("\e[94m" + _str + "\e[39m"); }
		Gloss lightMagenta() { return Gloss("\e[95m" + _str + "\e[39m"); }
		Gloss lightCyan() { return Gloss("\e[96m" + _str + "\e[39m"); }
		Gloss white() { return Gloss("\e[97m" + _str + "\e[39m"); }

		Gloss fillBlack() { return Gloss("\e[40m" + _str + "\e[49m"); }
		Gloss fillRed() { return Gloss("\e[41m" + _str + "\e[49m"); }
		Gloss fillGreen() { return Gloss("\e[42m" + _str + "\e[49m"); }
		Gloss fillYellow() { return Gloss("\e[43m" + _str + "\e[49m"); }
		Gloss fillBlue() { return Gloss("\e[44m" + _str + "\e[49m"); }
		Gloss fillMagenta() { return Gloss("\e[45m" + _str + "\e[49m"); }
		Gloss fillCyan() { return Gloss("\e[46m" + _str + "\e[49m"); }
		Gloss fillLightGray() { return Gloss("\e[47m" + _str + "\e[49m"); }
		Gloss fillDarkGray() { return Gloss("\e[100m" + _str + "\e[49m"); }
		Gloss fillLightRed() { return Gloss("\e[101m" + _str + "\e[49m"); }
		Gloss fillLightGreen() { return Gloss("\e[102m" + _str + "\e[49m"); }
		Gloss fillLightYellow() { return Gloss("\e[103m" + _str + "\e[49m"); }
		Gloss fillLightBlue() { return Gloss("\e[104m" + _str + "\e[49m"); }
		Gloss fillLightMagenta() { return Gloss("\e[105m" + _str + "\e[49m"); }
		Gloss fillLightCyan() { return Gloss("\e[106m" + _str + "\e[49m"); }
		Gloss fillWhite() { return Gloss("\e[107m" + _str + "\e[49m"); }

		std::string string() { return _str; }
	};
}