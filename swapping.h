/*
 * swapping.h
 *
 *  Created on: Jun 6, 2020
 *      Author: elitebook_840
 */

#ifndef SWAPPING_H_
#define SWAPPING_H_
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include"util.h"
#include"board.h"
#include<string>
#include<cmath>
using namespace std;

class swapping {

  int mouse_pressedX, mouse_pressedY, mouse_releasedX, mouse_releasedY; 
  int var1, var2;
  int touch1, touch2, touch3, touch4;
  int check;
  int flag;
     
 public:
 	swapping();
   void downState(int x, int y, int &index1, int &index2, int &index3, int &index4);
   void upState(int x, int y,board b, int &index1, int &index2, int &index3, int &index4);
   ~swapping();
};

#endif /* SWAPPING_H_ */
