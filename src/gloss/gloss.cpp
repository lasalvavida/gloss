#include <gloss/gloss.h>

using namespace std;
using namespace gloss;

string gloss::style(string str, Style textStyle) {
	return "\e[" + to_string(textStyle) + "m" + 
		str + "\e[" + to_string(20 + textStyle) + "m";
}

string gloss::bold(string str) { 
	return style(str, Style::BOLD); 
}
string gloss::dim(string str) { 
	return style(str, Style::DIM); 
}
string gloss::underline(string str) { 
	return style(str, Style::UNDERLINE); 
}
string gloss::blink(string str) {
	return style(str, Style::BLINK);
}
string gloss::reverse(string str) {
	return style(str, Style::REVERSE);
}
string gloss::hidden(string str) {
	return style(str, Style::HIDDEN); 
}

string gloss::color(string str, Color textColor) {
	return "\e[" + to_string(30 + textColor) + "m" + 
		str + "\e[39m";
}

string gloss::black(string str) {
	return color(str, Color::BLACK);
}
string gloss::red(string str) {
	return color(str, Color::RED);
}
string gloss::green(string str) {
	return color(str, Color::GREEN);
}
string gloss::yellow(string str) {
	return color(str, Color::YELLOW);
}
string gloss::blue(string str) {
	return color(str, Color::BLUE);
}
string gloss::magenta(string str) {
	return color(str, Color::MAGENTA);
}
string gloss::cyan(string str) {
	return color(str, Color::CYAN);
}
string gloss::lightGray(string str) {
	return color(str, Color::LIGHT_GRAY);
}
string gloss::darkGray(string str) {
	return color(str, Color::DARK_GRAY);
}
string gloss::lightRed(string str) {
	return color(str, Color::LIGHT_RED);
}
string gloss::lightGreen(string str) {
	return color(str, Color::LIGHT_GREEN);
}
string gloss::lightYellow(string str) {
	return color(str, Color::LIGHT_YELLOW);
}
string gloss::lightBlue(string str) {
	return color(str, Color::LIGHT_BLUE);
}
string gloss::lightMagenta(string str) {
	return color(str, Color::LIGHT_MAGENTA);
}
string gloss::lightCyan(string str) {
	return color(str, Color::LIGHT_CYAN);
}
string gloss::white(string str) {
	return color(str, Color::WHITE);
}

string gloss::fillColor(string str, Color backgroundColor) {
	return "\e[" + to_string(40 + backgroundColor) + "m" + 
		str + "\e[49m";
}

string gloss::fillBlack(string str) {
	return fillColor(str, Color::BLACK);
}
string gloss::fillRed(string str) {
	return fillColor(str, Color::RED);
}
string gloss::fillGreen(string str) {
	return fillColor(str, Color::GREEN);
}
string gloss::fillYellow(string str) {
	return fillColor(str, Color::YELLOW);
}
string gloss::fillBlue(string str) {
	return fillColor(str, Color::BLUE);
}
string gloss::fillMagenta(string str) {
	return fillColor(str, Color::MAGENTA);
}
string gloss::fillCyan(string str) {
	return fillColor(str, Color::CYAN);
}
string gloss::fillLightGray(string str) {
	return fillColor(str, Color::LIGHT_GRAY);
}
string gloss::fillDarkGray(string str) {
	return fillColor(str, Color::DARK_GRAY);
}
string gloss::fillLightRed(string str) {
	return fillColor(str, Color::LIGHT_RED);
}
string gloss::fillLightGreen(string str) {
	return fillColor(str, Color::LIGHT_GREEN);
}
string gloss::fillLightYellow(string str) {
	return fillColor(str, Color::LIGHT_YELLOW);
}
string gloss::fillLightBlue(string str) {
	return fillColor(str, Color::LIGHT_BLUE);
}
string gloss::fillLightMagenta(string str) {
	return fillColor(str, Color::LIGHT_MAGENTA);
}
string gloss::fillLightCyan(string str) {
	return fillColor(str, Color::LIGHT_CYAN);
}
string gloss::fillWhite(string str) {
	return fillColor(str, Color::WHITE);
}