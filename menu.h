/*
 * menu.h
 *
 *  Created on: Jun 4, 2020
 *      Author: elitebook_840
 */

#ifndef MENU_H_
#define MENU_H_
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include"util.h"
#include<string>
#include<cmath>
using namespace std;

class menu {
     
public:
	menu();
	void display_menu();
	void pause_menu();
	void modes();
	void instructions();
	~menu();
};

#endif /* MENU_H_ */
