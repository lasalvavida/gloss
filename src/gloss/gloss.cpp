#include <gloss/gloss.h>

using namespace std;
using namespace gloss;

string style(string str, Style textStyle) {
	return "\e[" + to_string(textStyle) + "m" + 
		str + "\e[" + to_string(20 + textStyle) + "m";
}

string color(string str, Color textColor) {
	return "\e[" + to_string(30 + textColor) + "m" + 
		str + "\e[39m";
}

string fillColor(string str, Color backgroundColor) {
	return "\e[" + to_string(40 + backgroundColor) + "m" + 
		str + "\e[49m";
}