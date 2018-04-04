#pragma once

#include <string>

namespace gloss {
	class gloss {
	private:
		std::string _str;
	public:
		gloss(std::string str) : _str(str) {};

		gloss bold() { return gloss("\\e[1m" + _str + "\\e[21m"); }
		gloss dim() { return gloss("\\e[2m" + _str + "\\e[22m"); }
		gloss underline() { return gloss("\\e[4m" + _str + "\\e[24m"); }
		gloss blink() { return gloss("\\e[5m" + _str + "\\e[25m"); }
		gloss reverse() { return gloss("\\e[7m" + _str + "\\e[27m"); }
		gloss hidden() { return gloss("\\e[8m" + _str + "\\e[28m"); }

		gloss black() { return gloss("\\e[30m" + _str + "\\e[39m"); }
		gloss red() { return gloss("\\e[31m" + _str + "\\e[39m"); }
		gloss green() { return gloss("\\e[32m" + _str + "\\e[39m"); }
		gloss yellow() { return gloss("\\e[33m" + _str + "\\e[39m"); }
		gloss blue() { return gloss("\\e[34m" + _str + "\\e[39m"); }
		gloss magenta() { return gloss("\\e[35m" + _str + "\\e[39m"); }
		gloss cyan() { return gloss("\\e[36m" + _str + "\\e[39m"); }
		gloss lightGray() { return gloss("\\e[37m" + _str + "\\e[39m"); }
		gloss darkGray() { return gloss("\\e[90m" + _str + "\\e[39m"); }
		gloss lightRed() { return gloss("\\e[91m" + _str + "\\e[39m"); }
		gloss lightGreen() { return gloss("\\e[92m" + _str + "\\e[39m"); }
		gloss lightYellow() { return gloss("\\e[93m" + _str + "\\e[39m"); }
		gloss lightBlue() { return gloss("\\e[94m" + _str + "\\e[39m"); }
		gloss lightMagenta() { return gloss("\\e[95m" + _str + "\\e[39m"); }
		gloss lightCyan() { return gloss("\\e[96m" + _str + "\\e[39m"); }
		gloss white() { return gloss("\\e[97m" + _str + "\\e[39m"); }

		gloss fillBlack() { return gloss("\\e[40m" + _str + "\\e[49m"); }
		gloss fillRed() { return gloss("\\e[41m" + _str + "\\e[49m"); }
		gloss fillGreen() { return gloss("\\e[42m" + _str + "\\e[49m"); }
		gloss fillYellow() { return gloss("\\e[43m" + _str + "\\e[49m"); }
		gloss fillBlue() { return gloss("\\e[44m" + _str + "\\e[49m"); }
		gloss fillMagenta() { return gloss("\\e[45m" + _str + "\\e[49m"); }
		gloss fillCyan() { return gloss("\\e[46m" + _str + "\\e[49m"); }
		gloss fillLightGray() { return gloss("\\e[47m" + _str + "\\e[49m"); }
		gloss fillDarkGray() { return gloss("\\e[100m" + _str + "\\e[49m"); }
		gloss fillLightRed() { return gloss("\\e[101m" + _str + "\\e[49m"); }
		gloss fillLightGreen() { return gloss("\\e[102m" + _str + "\\e[49m"); }
		gloss fillLightYellow() { return gloss("\\e[103m" + _str + "\\e[49m"); }
		gloss fillLightBlue() { return gloss("\\e[104m" + _str + "\\e[49m"); }
		gloss fillLightMagenta() { return gloss("\\e[105m" + _str + "\\e[49m"); }
		gloss fillLightCyan() { return gloss("\\e[106m" + _str + "\\e[49m"); }
		gloss fillWhite() { return gloss("\\e[107m" + _str + "\\e[49m"); }

		std::string string() { return _str; }
	}
}