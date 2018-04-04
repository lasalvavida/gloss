#pragma once

#include <string>

namespace gloss {
	class gloss {
	private:
		std::string _str;
	public:
		gloss(std::string str) : _str(str) {};

		gloss bold() { return gloss("\\e[1m" + str + "\\e[21m"); }
		gloss dim() { return gloss("\\e[2m" + st + "\\e[22m"); }
		gloss underline() { return gloss("\\e[4m" + str + "\\e[24m"); }
		gloss blink() { return gloss("\\e[5m" + str + "\\e[25m"); }
		gloss reverse() { return gloss("\\e[7m" + str + "\\e[27m"); }
		gloss hidden() { return gloss("\\e[8m" + str + "\\e[28m"); }

		gloss black() { return gloss("\\e[30m" + str + "\\e[39m"); }
		gloss red() { return gloss("\\e[31m" + str + "\\e[39m"); }
		gloss green() { return gloss("\\e[32m" + str + "\\e[39m"); }
		gloss yellow() { return gloss("\\e[33m" + str + "\\e[39m"); }
		gloss blue() { return gloss("\\e[34m" + str + "\\e[39m"); }
		gloss magenta() { return gloss("\\e[35m" + str + "\\e[39m"); }
		gloss cyan() { return gloss("\\e[36m" + str + "\\e[39m"); }
		gloss lightGray() { return gloss("\\e[37m" + str + "\\e[39m"); }
		gloss darkGray() { return gloss("\\e[90m" + str + "\\e[39m"); }
		gloss lightRed() { return gloss("\\e[91m" + str + "\\e[39m"); }
		gloss lightGreen() { return gloss("\\e[92m" + str + "\\e[39m"); }
		gloss lightYellow() { return gloss("\\e[93m" + str + "\\e[39m"); }
		gloss lightBlue() { return gloss("\\e[94m" + str + "\\e[39m"); }
		gloss lightMagenta() { return gloss("\\e[95m" + str + "\\e[39m"); }
		gloss lightCyan() { return gloss("\\e[96m" + str + "\\e[39m"); }
		gloss white() { return gloss("\\e[97m" + str + "\\e[39m"); }

		gloss fillBlack() { return gloss("\\e[40m" + str + "\\e[49m"); }
		gloss fillRed() { return gloss("\\e[41m" + str + "\\e[49m"); }
		gloss fillGreen() { return gloss("\\e[42m" + str + "\\e[49m"); }
		gloss fillYellow() { return gloss("\\e[43m" + str + "\\e[49m"); }
		gloss fillBlue() { return gloss("\\e[44m" + str + "\\e[49m"); }
		gloss fillMagenta() { return gloss("\\e[45m" + str + "\\e[49m"); }
		gloss fillCyan() { return gloss("\\e[46m" + str + "\\e[49m"); }
		gloss fillLightGray() { return gloss("\\e[47m" + str + "\\e[49m"); }
		gloss fillDarkGray() { return gloss("\\e[100m" + str + "\\e[49m"); }
		gloss fillLightRed() { return gloss("\\e[101m" + str + "\\e[49m"); }
		gloss fillLightGreen() { return gloss("\\e[102m" + str + "\\e[49m"); }
		gloss fillLightYellow() { return gloss("\\e[103m" + str + "\\e[49m"); }
		gloss fillLightBlue() { return gloss("\\e[104m" + str + "\\e[49m"); }
		gloss fillLightMagenta() { return gloss("\\e[105m" + str + "\\e[49m"); }
		gloss fillLightCyan() { return gloss("\\e[106m" + str + "\\e[49m"); }
		gloss fillWhite() { return gloss("\\e[107m" + str + "\\e[49m"); }

		std::string string() { return _str; }
	}
}