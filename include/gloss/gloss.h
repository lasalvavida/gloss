#pragma once

#include <string>

namespace gloss {
	enum Style {
		BOLD = 1,
		DIM = 2,
		UNDERLINE = 3,
		BLINK = 4,
		REVERSE = 5,
		HIDDEN = 6
	};

	std::string style(std::string str, Style textStyle);

	std::string bold(std::string str);
	std::string dim(std::string str);
	std::string underline(std::string str);
	std::string blink(std::string str);
	std::string reverse(std::string str);
	std::string hidden(std::string str);

	enum Color {
		BLACK = 0,
		RED = 1,
		GREEN = 2,
		YELLOW = 3,
		BLUE = 4,
		MAGENTA = 5,
		CYAN = 6,
		LIGHT_GRAY = 7,
		DARK_GRAY = 60,
		LIGHT_RED = 61,
		LIGHT_GREEN = 62,
		LIGHT_YELLOW = 63,
		LIGHT_BLUE = 64,
		LIGHT_MAGENTA = 65,
		LIGHT_CYAN = 66,
		WHITE = 67
	};

	std::string color(std::string str, Color textColor);

	std::string black(std::string str);
	std::string red(std::string str);
	std::string green(std::string str);
	std::string yellow(std::string str);
	std::string blue(std::string str);
	std::string magenta(std::string str);
	std::string cyan(std::string str);
	std::string lightGray(std::string str);
	std::string darkGray(std::string str);
	std::string lightRed(std::string str);
	std::string lightGreen(std::string str);
	std::string lightYellow(std::string str);
	std::string lightBlue(std::string str);
	std::string lightMagenta(std::string str);
	std::string lightCyan(std::string str);
	std::string white(std::string str);

	std::string fillColor(std::string str, Color backgroundColor);

	std::string fillBlack(std::string str);
	std::string fillRed(std::string str);
	std::string fillGreen(std::string str);
	std::string fillYellow(std::string str);
	std::string fillBlue(std::string str);
	std::string fillMagenta(std::string str);
	std::string fillCyan(std::string str);
	std::string fillLightGray(std::string str);
	std::string fillDarkGray(std::string str);
	std::string fillLightRed(std::string str);
	std::string fillLightGreen(std::string str);
	std::string fillLightYellow(std::string str);
	std::string fillLightBlue(std::string str);
	std::string fillLightMagenta(std::string str);
	std::string fillLightCyan(std::string str);
	std::string fillWhite(std::string str);
}