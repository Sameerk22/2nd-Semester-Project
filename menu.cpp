/*
 * menu.cpp
 *
 *  Created on: Jun 4, 2020
 *      Author: elitebook_840
 */

#include "menu.h"

menu::menu(){
	
}
void menu::display_menu() {
	DrawRoundRect(100, 250 ,600,450,colors[CHOCOLATE],60);
	DrawString( 325, 650, "--> Menu <--", colors[MISTY_ROSE]);
	DrawString( 550, 600, "(Press)", colors[WHITE]);
	
	DrawString( 175, 550, "Start New game", colors[MISTY_ROSE]);
	DrawString( 560, 550, "S", colors[WHITE]);
	
	DrawString( 175, 500, "Levels", colors[MISTY_ROSE]);
	DrawString( 560, 500, "L", colors[WHITE]);

	DrawString( 175, 450, "Modes", colors[MISTY_ROSE]);
	DrawString( 560, 450, "M", colors[WHITE]);

	DrawString( 175, 400, "High Score", colors[MISTY_ROSE]);
	DrawString( 560, 400, "H", colors[WHITE]);

	DrawString( 175, 350, "Instructions", colors[MISTY_ROSE]);
	DrawString( 560, 350, "I", colors[WHITE]);

	DrawString( 175, 300, "Exit", colors[MISTY_ROSE]);
	DrawString( 560, 300, "X", colors[WHITE]);
	
}

void menu::pause_menu() {
	DrawRoundRect(100, 250 ,600,450,colors[RED],60);
	DrawString( 325, 650, "Game Paused", colors[MISTY_ROSE]);
	DrawString( 550, 600, "(Press)", colors[WHITE]);
	
	DrawString( 175, 550, "Resume", colors[MISTY_ROSE]);
	DrawString( 560, 550, "S", colors[WHITE]);

	DrawString( 175, 500, "Instructions", colors[MISTY_ROSE]);
	DrawString( 560, 500, "I", colors[WHITE]);

	DrawString( 175, 450, "High Score", colors[MISTY_ROSE]);
	DrawString( 560, 450, "H", colors[WHITE]);

    DrawString( 175, 400, "Exit", colors[MISTY_ROSE]);
	DrawString( 560, 400, "X", colors[WHITE]);

}

void menu::modes() {
	DrawString( 160, 600, "Game Mode ", colors[MISTY_ROSE]);
	DrawString( 160, 550, "1) Normal Mode (Default)", colors[MISTY_ROSE]);
	DrawString( 160, 525, "2) Time Trail Mode (Press 'T' )", colors[MISTY_ROSE]);
}

void menu::instructions() {
	DrawString( 160, 600, "Game Play instructions ", colors[MISTY_ROSE]);
	DrawString( 160, 550, "1) Match three adjacent same jems for score. ", colors[MISTY_ROSE]);
	DrawString( 160, 525, "2) Gems only could be matched column or row wise. ", colors[MISTY_ROSE]);
	DrawString( 160, 500, "3) No irrevalent swapping allowed. ", colors[MISTY_ROSE]);
	DrawString( 160, 475, "4) Each legal swap gets you +3 score.  ", colors[MISTY_ROSE]);

	DrawString( 160,400, "Game Settings", colors[MISTY_ROSE]);
	DrawString( 160, 350, "1) Game consist of 2 modes (Default Normal MOde)", colors[MISTY_ROSE]);
	DrawString( 160, 325, "     -> Normal Mode & -> Time Trail  ", colors[MISTY_ROSE]);
	DrawString( 160, 300, "2) Time Trail mode is time specific.(Press 'T' ) ", colors[MISTY_ROSE]);
}

menu::~menu(){

}
