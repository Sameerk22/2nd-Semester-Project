/*
 * board.cpp
 *
 *  Created on: Jun 5, 2020
 *      Author: elitebook_840
 */

#include "board.h"
board::board(){
	x=0;
	y=0;
	mu=0;
	mo=0;
	lv=0;
	points=0;
	
	board_grid= new int*[8];


	 for(int i=0; i<8; i++){
		board_grid[i]=new int[8];
	   }

	 for(int i=0; i<8; i++){
		  for(int j=0; j<8; j++){
			 board_grid[i][j]=static_cast<int>(GetRandInRange(0,6));}
	    }
		 
}


void board::draw(){

    for(int x=160; x<640; x+=60){
		for(int y=50; y<530; y+=60){

	    DrawLine( x, 700-y,  x+60 , 700-y , 7 , colors[MISTY_ROSE] );
		DrawLine( x, 700-y,  x, 760-y , 7 , colors[MISTY_ROSE] );
		DrawLine( x, 760-y,  x+60 , 760-y , 7 , colors[MISTY_ROSE] );
		DrawLine( x+60, 700-y,  x+60 , 760-y , 7 , colors[MISTY_ROSE] );
		}
	}
}

void board::designing(){
	points+=1;
	DrawString( 190, 750, "Score="+Num2Str(points), colors[WHITE]);
	DrawRectangle(0, 0, 1000, 100, colors[DEEP_PINK]);
 DrawRectangle(0, 90, 1000, 30, colors[HOT_PINK]);
 Torus2d( 400 ,  60,
	 300, // starting angle in degrees
	 360,           // length of arc in degrees, >0
	0,           // inner radius, >0
	70,            // width of torus, >0
	6,   // number of circle samples, >=3
	colors[RED]);

 
}

void board::draw_gems(){

	 for(int x=160,i=0; x<640; x+=60, ++i){
	 	for(int y=230, j=0; y<710; y+=60, ++j){
			if(board_grid[i][j] == 1){
				 DrawCircle(x+30 ,y+30 ,15,colors[RED]);
			}
			if(board_grid[i][j] == 2){
				DrawSquare( x+15 , y+15 ,30,colors[GREEN]);
			}
			if(board_grid[i][j] == 3){
				DrawRoundRect(x+9, y+18 ,40,24,colors[MOCCASIN],10);
			}
			if(board_grid[i][j] == 4){
				DrawDiamond (x+12, y+12, 37, colors[DARK_GOLDEN_ROD]);
			}
			if(board_grid[i][j] == 5){
				Torus2d( x+30 ,  y+30,
	 300, // starting angle in degrees
	 360,           // length of arc in degrees, >0
	6,           // inner radius, >0
	14,            // width of torus, >0
	6,   // number of circle samples, >=3
	colors[PLUM]);
			}
			if(board_grid[i][j] == 0){
				  DrawTriangle( x+10, y+10 , x+50, y+10 , x+30 , y+50, colors[MAROON] );
			}

		}
	 }
 }

 void board::progressBar(float t){
	 DrawRoundRect(50, 150, 700-t, 45, colors[RED],8);
	DrawString( 350, 130, "Progress Bar", colors[WHITE]);
	glutPostRedisplay();
 }

void board::timeBar(float t){
	DrawRoundRect(50, 150, 700-t, 45, colors[RED],8);
	DrawString( 350, 130, "Time Bar", colors[WHITE]);
	glutPostRedisplay();
}

board::~board(){

}

