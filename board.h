/*
 * board.h
 *
 *  Created on: Jun 5, 2020
 *      Author: elitebook_840
 */

#ifndef BOARD_H_
#define BOARD_H_
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include"util.h"
#include<string>
#include<cmath>
#include"Levels.h"
using namespace std;



class board  {
public:	
	int x,y;
	int **board_grid ;  
	//int board_grid[8][8];
	int mu;  //this is for menu.
	int mo; //this is for mode.
	int lv; //for levels
	int points;
	
public:
	board();
	void draw();
	void designing();
	void draw_gems();
	void progressBar(float t);
	void timeBar(float t);
	~board();
};

#endif /* BOARD_H_ */
