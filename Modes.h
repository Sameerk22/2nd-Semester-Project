/*
 * Modes.h
 *
 *  Created on: Jun 10, 2020
 *      Author: elitebook_840
 */

#ifndef MODES_H_
#define MODES_H_
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include"util.h"
#include"board.h"
#include<string>
#include<cmath>

using namespace std;

class Modes {

 public:
    Modes();
    void normal(board &b);
    void timeTrail(board &b);
    ~Modes();     
};

#endif /* MODES_H_ */
