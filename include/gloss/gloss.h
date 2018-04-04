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

	std::string bold(std::string str) { return style(str, Style::BOLD); }
	std::string dim(std::string str) { return style(str, Style::DIM); }
	std::string underline(std::string str) { return style(str, Style::UNDERLINE); }
	std::string blink(std::string str) { return style(str, Style::BLINK); }
	std::string reverse(std::string str) { return style(str, Style::REVERSE); }
	std::string hidden(std::string str) { return style(str, Style::HIDDEN); }

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

	std::string black(std::string str) { return color(str, Color::BLACK); }
	std::string red(std::string str) { return color(str, Color::RED); }
	std::string green(std::string str) { return color(str, Color::GREEN); }
	std::string yellow(std::string str) { return color(str, Color::YELLOW); }
	std::string blue(std::string str) { return color(str, Color::BLUE); }
	std::string magenta(std::string str) { return color(str, Color::MAGENTA); }
	std::string cyan(std::string str) { return color(str, Color::CYAN); }
	std::string lightGray(std::string str) { return color(str, Color::LIGHT_GRAY); }
	std::string darkGray(std::string str) { return color(str, Color::DARK_GRAY); }
	std::string lightRed(std::string str) { return color(str, Color::LIGHT_RED); }
	std::string lightGreen(std::string str) { return color(str, Color::LIGHT_GREEN); }
	std::string lightYellow(std::string str) { return color(str, Color::LIGHT_YELLOW); }
	std::string lightBlue(std::string str) { return color(str, Color::LIGHT_BLUE); }
	std::string lightMagenta(std::string str) { return color(str, Color::LIGHT_MAGENTA); }
	std::string lightCyan(std::string str) { return color(str, Color::LIGHT_CYAN); }
	std::string white(std::string str) { return color(str, Color::WHITE); }

	std::string fillColor(std::string str, Color backgroundColor);

	std::string fillBlack(std::string str) { return fillColor(str, Color::BLACK); }
	std::string fillRed(std::string str) { return fillColor(str, Color::RED); }
	std::string fillGreen(std::string str) { return fillColor(str, Color::GREEN); }
	std::string fillYellow(std::string str) { return fillColor(str, Color::YELLOW); }
	std::string fillBlue(std::string str) { return fillColor(str, Color::BLUE); }
	std::string fillMagenta(std::string str) { return fillColor(str, Color::MAGENTA); }
	std::string fillCyan(std::string str) { return fillColor(str, Color::CYAN); }
	std::string fillLightGray(std::string str) { return fillColor(str, Color::LIGHT_GRAY); }
	std::string fillDarkGray(std::string str) { return fillColor(str, Color::DARK_GRAY); }
	std::string fillLightRed(std::string str) { return fillColor(str, Color::LIGHT_RED); }
	std::string fillLightGreen(std::string str) { return fillColor(str, Color::LIGHT_GREEN); }
	std::string fillLightYellow(std::string str) { return fillColor(str, Color::LIGHT_YELLOW); }
	std::string fillLightBlue(std::string str) { return fillColor(str, Color::LIGHT_BLUE); }
	std::string fillLightMagenta(std::string str) { return fillColor(str, Color::LIGHT_MAGENTA); }
	std::string fillLightCyan(std::string str) { return fillColor(str, Color::LIGHT_CYAN); }
	std::string fillWhite(std::string str) { return fillColor(str, Color::WHITE); }
}