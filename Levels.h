/*
 * Levels.h
 *
 *  Created on: Jun 10, 2020
 *      Author: elitebook_840
 */

#ifndef LEVELS_H_
#define LEVELS_H_
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include"util.h"
#include"board.h"
#include<string>
#include<cmath>

using namespace std;

class Levels {
public:
	Levels();
	void level1();
	void level2();
	~Levels();
	
};

#endif /* LEVELS_H_ */
