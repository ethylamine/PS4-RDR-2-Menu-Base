#include "menu.h"
#include "natives.h"
#include "lib.h"

Menu::Menu() {}
Menu::Menu(Menu& menu) {}
Menu::Menu(Function mainSubmenu) {
	mainMenu = mainSubmenu;
	open = false;
	sounds = true;
	instructions = true;
	maxOptions = 15;
}

void Menu::playSound(char* sound, char* ref) {
	if (sounds) {
		AUDIO::_STOP_SOUND_WITH_NAME(sound, ref);
		AUDIO::PLAY_SOUND_FRONTEND(sound, ref, 1, 0);
	}
}

void Menu::monitorButtons() {
	if (open) {
		PAD::DISABLE_CONTROL_ACTION(0, INPUT_FRONTEND_UP, true);
		PAD::DISABLE_CONTROL_ACTION(0, INPUT_FRONTEND_DOWN, true);
		PAD::DISABLE_CONTROL_ACTION(0, INPUT_FRONTEND_RIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(0, INPUT_FRONTEND_LEFT, true);
		PAD::DISABLE_CONTROL_ACTION(0, INPUT_FRONTEND_ACCEPT, true);
		PAD::DISABLE_CONTROL_ACTION(0, INPUT_FRONTEND_CANCEL, true);
		PAD::DISABLE_CONTROL_ACTION(0, INPUT_FRONTEND_X, true);
		PAD::SET_INPUT_EXCLUSIVE(0, INPUT_FRONTEND_UP);
		PAD::SET_INPUT_EXCLUSIVE(0, INPUT_FRONTEND_RIGHT);
		PAD::SET_INPUT_EXCLUSIVE(0, INPUT_FRONTEND_LEFT);
		PAD::SET_INPUT_EXCLUSIVE(0, INPUT_FRONTEND_CANCEL);

		optionPress = leftPress = rightPress = leftHold = rightHold = upPress = downPress = squarePress = false;
		
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, INPUT_FRONTEND_CANCEL)) {
			if (currentMenu == mainMenu) {
				open = false;
				playSound("MENU_CLOSE");
			}
			else {
				submenuLevel--;
				currentMenu = lastSubmenu[submenuLevel];
				currentOption = lastOption[submenuLevel];
				if (colorEditing) {
					colorEditing = false;
				}
			}
			playSound("BACK");
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, INPUT_FRONTEND_UP)) {
			upPress = true;
			currentOption--;
			if (currentOption < 1) {
				currentOption = optionCount;
			}
			playSound("NAV_UP");
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, INPUT_FRONTEND_DOWN)) {
			downPress = true;
			currentOption++;
			if (currentOption > optionCount) {
				currentOption = 1;
			}
			playSound("NAV_DOWN");
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, INPUT_FRONTEND_RIGHT)) {
			rightPress = true;
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, INPUT_FRONTEND_LEFT)) {
			leftPress = true;
		}
		else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, INPUT_FRONTEND_RIGHT)) {
			rightHold = true;
		}
		else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, INPUT_FRONTEND_LEFT)) {
			leftHold = true;
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, INPUT_FRONTEND_X)) {
			squarePress = true;
		}
		else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, INPUT_FRONTEND_ACCEPT)) {
			optionPress = true;
			playSound("SELECT");
		}
	}
	else {
		if (PAD::IS_CONTROL_PRESSED(0, INPUT_FRONTEND_RB) && PAD::IS_CONTROL_PRESSED(0, INPUT_FRONTEND_RS)) {
			open = true;
			optionPress = false;
			submenuLevel = 0;
			currentMenu = mainMenu;
			currentOption = 1;
			playSound("MENU_ENTER");
		}
	}
}

void Menu::drawText(char* text, Vector2 pos, int size, Font font, char* color, char* alignment, bool outline) {
	char buffer[512];
	char* fontList[] = { "util", "catalog5", "body1", "body", "Debug_REG", "catalog4", "chalk", "catalog1", "ledger", "title", "wantedPostersGeneric", "gtaCash", "gamername", "handwritten" };

	sprintf(buffer, "<TEXTFORMAT INDENT='0' LEFTMARGIN='0' RIGHTMARGIN='0' LEADING='0'><FONT FACE='$%s' COLOR='#%s' SIZE='%i'><P ALIGN='%s'>%s</P></FONT></TEXTFORMAT>", fontList[font], color, size, alignment, text);

	const char* varString = MISC::VAR_STRING(10, "LITERAL_STRING", buffer);
	const char* varString2 = MISC::VAR_STRING(42, "COLOR_STRING", nullptr, varString);

	UIDEBUG::_BG_DISPLAY_TEXT(varString2, pos.x, pos.y);
}

void Menu::drawCenterNotification(char* text, int duration) {
	const char* literalString = MISC::VAR_STRING(10, "LITERAL_STRING", text);
	UILOG::_UILOG_SET_CACHED_OBJECTIVE(literalString);
	UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
	UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
}

void Menu::run() {
	optionCount = 0;
	tipText = nullptr;
	setupIntructionsThisFrame = xInstruction = squareInstruction = lrInstruction = false;

	currentMenu();

	// Draw banner top
	GRAPHICS::DRAW_RECT(0.825f, 0.1175f, 0.23f, 0.083f, 201, 0, 44, 255, false, true);
	
	drawText("Test Menu", { 0.660f, 0.1f }, 45, Redemption, "004B93", "CENTER", true);

	// Draw body
	if (optionCount > maxOptions) {
		GRAPHICS::DRAW_RECT(0.825f, (((maxOptions * 0.035f) / 2) + 0.159f), 0.23f, (maxOptions * 0.035f), 0, 0, 0, 255, false, true); // Body
		if (currentOption > maxOptions) {
			GRAPHICS::DRAW_RECT(0.825f, ((maxOptions * 0.035f) + 0.1415f), 0.23f, 0.035f, 255, 255, 255, 255, false, true); // Scroller
			GRAPHICS::DRAW_RECT(0.825f, 0.159f, 0.23f, 0.005f, 0, 0, 0, 255, false, true); // Up indicator
		}
		else {
			GRAPHICS::DRAW_RECT(0.825f, ((currentOption * 0.035f) + 0.1415f), 0.23f, 0.035f, 255, 255, 255, 255, false, true); // Scroller
		}
		if (currentOption != optionCount) {
			GRAPHICS::DRAW_RECT(0.825f, ((maxOptions * 0.035f) + 0.161f), 0.23f, 0.005f, 0, 0, 0, 255, false, true); // Down indicator
		}
	}
	else {
		GRAPHICS::DRAW_RECT(0.825f, (((optionCount * 0.035f) / 2) + 0.159f), 0.23f, (optionCount * 0.035f), 0, 0, 0, 255, false, true); // Body
		GRAPHICS::DRAW_RECT(0.825f, ((currentOption * 0.035f) + 0.1415f), 0.23f, 0.035f, 255, 255, 255, 255, false, true); // Scroller
	}

	// Handle keyboard
	if (keyboardActive) {
		int keyboardStatus = MISC::UPDATE_ONSCREEN_KEYBOARD();
		if (keyboardStatus == 1) {
			keyboardHandler(MISC::GET_ONSCREEN_KEYBOARD_RESULT());
			keyboardActive = false;
		}
		else if (keyboardStatus == 2 || keyboardStatus == 3) {
			keyboardActive = false;
		}
	}
}

void Menu::changeSubmenu(Function submenu) {
	lastSubmenu[submenuLevel] = currentMenu;
	lastOption[submenuLevel] = currentOption;
	currentOption = 1;
	optionPress = false;
	currentMenu = submenu;
	submenuLevel++;
}

void Menu::openKeyboard(KeyboardHandler handler, int maxLength, char* defaultText) {
	MISC::DISPLAY_ONSCREEN_KEYBOARD(0, "FMMC_KEY_TIP8", "", defaultText, "", "", "", maxLength);
	keyboardHandler = handler;
	keyboardActive = true;
}

Menu::scrollData<int> Menu::intScrollData;
Menu::scrollData<float> Menu::floatScrollData;
void Menu::intScrollKeyboardHandler(char* text) {
	int i = atoi(text);
	if (i <= intScrollData.max && i >= intScrollData.min) {
		*intScrollData.var = i;
	}
	else {
		char buffer[70];
		sprintf(buffer, "~r~Error: input must be between %i and %i", intScrollData.min, intScrollData.max);
		drawCenterNotification(buffer);
	}
}
void Menu::floatScrollKeyboardHandler(char* text) {
	float f = (float)atof(text);
	if (f <= floatScrollData.max && f >= floatScrollData.min) {
		*floatScrollData.var = f;
	}
	else {
		char buffer1[70];
		char buffer2[70];
		sprintf(buffer1, "~r~Error: input must be between %%.%if and %%.%if", floatScrollData.decimals, floatScrollData.decimals);
		sprintf(buffer2, buffer1, floatScrollData.min, floatScrollData.max);
		drawCenterNotification(buffer2);
	}
}

void Menu::banner(char* text) {
	title = text;
}

bool Menu::hovered() {
	return currentOption == optionCount;
}

bool Menu::pressed() {
	if (hovered()) {
		xInstruction = true;
		if (optionPress) {
			return true;
		}
	}
	return false;
}

bool Menu::scrolled() {
	if (hovered()) {
		lrInstruction = true;
		if (rightPress || leftPress || (fastScrolling && rightHold) || (fastScrolling && leftHold)) {
			return true;
		}
	}
	return false;
}

void Menu::positionMenuText(char* text, float xPos, Alignment alignment) {
	int optionIndex = 0;
	if (currentOption <= maxOptions && optionCount <= maxOptions) {
		optionIndex = optionCount;
	}
	else if ((optionCount > (currentOption - maxOptions)) && optionCount <= currentOption) {
		optionIndex = optionCount - (currentOption - maxOptions);
	}
	if (optionIndex != 0) {
		drawText(text, { xPos, optionIndex * 0.035f + 0.125f }, 23, Hapna, hovered() ? "000000" : "FFFFFF", "LEFT", false);
	}
}

Menu& Menu::option(char* text) {
	optionCount++;
	positionMenuText(text, 0.715f, Left);
	return *this;
}

void Menu::spacer(char* text) {
	char buffer[60];
	sprintf(buffer, "~italic~%s", text);

	optionCount++;
	positionMenuText(buffer, 0.825f, Center);

	if (hovered()) {
		if (upPress) {
			currentOption--;
		}
		else if (downPress) {
			currentOption++;
		}
	}
}

Menu& Menu::data(char* text) {
	positionMenuText(text, 0.935f, Right);
	return *this;
}

Menu& Menu::data(bool b) {
	return b ? data("On") : data("Off");
}

Menu& Menu::data(int i) {
	char buffer[30];
	sprintf(buffer, "%i", i);
	return data(buffer);
}

Menu& Menu::data(float f, int decimalPlaces) {
	char formatBuffer[10];
	char dataBuffer[30];
	sprintf(formatBuffer, "%%.%if", decimalPlaces);
	sprintf(dataBuffer, formatBuffer, f);
	return data(dataBuffer);
}

Menu& Menu::scroller(int *i, int min, int max, bool fast, bool keyboard) {
	char buffer[30];

	if (hovered()) {
		lrInstruction = true;
		fastScrolling = fast;
		if (rightPress || (rightHold && fast)) {
			playSound("NAV_RIGHT");
			if (*i >= max) {
				*i = min;
			}
			else {
				*i = *i + 1;
			}
		}
		else if (leftPress || (leftHold && fast)) {
			playSound("NAV_LEFT");
			if (*i <= min) {
				*i = max;
			}
			else {
				*i = *i - 1;
			}
		}
		
		if (keyboard) {
			squareInstruction = true;
			if (squarePress) {
				intScrollData = { i, min, max, 0 };
				sprintf(buffer, "%i", max);
				openKeyboard(intScrollKeyboardHandler, strlen(buffer) + 1);
			}
		}
	}

	if (hovered()) {
		sprintf(buffer, "&lt; %i &gt;", *i);
		return data(buffer);
	}
	return data(*i);
}

Menu& Menu::scroller(float *f, float min, float max, float increment, int decimalPlaces, bool fast, bool keyboard) {
	char buffer1[30];

	if (hovered()) {
		lrInstruction = true;
		fastScrolling = fast;
		if (rightPress || (rightHold && fast)) {
			playSound("NAV_RIGHT");
			if (*f >= max) {
				*f = min;
			}
			else {
				*f = *f + increment;
			}
		}
		else if (leftPress || (leftHold && fast)) {
			playSound("NAV_LEFT");
			if (*f <= min) {
				*f = max;
			}
			else {
				*f = *f - increment;
			}
		}
		
		if (keyboard) {
			squareInstruction = true;
			if (squarePress) {
				floatScrollData = { f, min, max, decimalPlaces };
				sprintf(buffer1, "%i", (int)max);
				openKeyboard(floatScrollKeyboardHandler, strlen(buffer1) + decimalPlaces + 1);
			}
		}
	}

	if (hovered()) {
		char buffer2[30];
		sprintf(buffer1, "&lt; %%.%if &gt;", decimalPlaces);
		sprintf(buffer2, buffer1, *f);
		return data(buffer2);
	}
	return data(*f, decimalPlaces);
}

Menu& Menu::scroller(char** textArray, int* index, int numItems, bool fast) {
	char buffer[60];

	numItems--;
	if (hovered()) {
		lrInstruction = true;
		fastScrolling = fast;
		if (rightPress || (rightHold && fast)) {
			playSound("NAV_RIGHT");
			if (*index >= numItems) {
				*index = 0;
			}
			else {
				*index = *index + 1;
			}
		}
		else if (leftPress || (leftHold && fast)) {
			playSound("NAV_LEFT");
			if (*index <= 0) {
				*index = numItems;
			}
			else {
				*index = *index - 1;
			}
		}
	}

	if (hovered()) {
		sprintf(buffer, "&lt; %s &gt;", textArray[*index]);
		return data(buffer);
	}
	return data(textArray[*index]);
}

Menu& Menu::toggle(bool *b) {
	if (pressed()) {
		*b = !*b;
	}
	return data(*b);
}

Menu& Menu::tip(char* text) {
	if (hovered()) {
		tipText = text;
	}
	return *this;
}

Menu& Menu::submenu(Function sub) {
	if (pressed()) {
		changeSubmenu(sub);
	}
	return *this;
}

Menu& Menu::keyboard(KeyboardHandler handler, int maxLength, char* defaultText) {
	if (pressed()) {
		openKeyboard(handler, maxLength, defaultText);
	}
	return *this;
}

Menu& Menu::vehicleSpawn(Hash vehicleHash) {
	if (pressed()) {
		vehicleToSpawn = vehicleHash;
	}
	return *this;
}