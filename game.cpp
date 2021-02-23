//============================================================================
// Name        : .cpp
// Author      : Sibt ul Hussain
// Version     :
// Copyright   : (c) Reserved
// Description : Basic 2D game of Centipede...
//============================================================================

#ifndef CENTIPEDE_CPP_
#define CENTIPEDE_CPP_
#include "util.h"
#include <iostream>
#include<string>
#include<cmath> // for basic math functions such as cos, sin, sqrt
#include"menu.h"
#include"board.h"
#include"swapping.h"
#include"Modes.h"
#include"gems.h"
#include"Levels.h"
using namespace std;


board b;


// seed the random numbers generator by current time (see the documentation of srand for further help)...

/* Function sets canvas size (drawing area) in pixels...
 *  that is what dimensions (x and y) your game will have
 *  Note that the bottom-left coordinate has value (0,0) and top-right coordinate has value (width-1,height-1)
 * */
void SetCanvasSize(int width, int height) {
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, width, 0, height, -1, 1); // set the screen size to given width and height.
	glMatrixMode (GL_MODELVIEW);
	glLoadIdentity();
}

/*
 * Main Canvas drawing function.
 * */

void GameDisplay()/**/{

		glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
						0.101010100/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

				glClear (GL_COLOR_BUFFER_BIT); //Update the colors

 menu m;

if(b.mu ==  0){
	
	m.display_menu();
	
	}
		
 if(b.mu == 1){
	 glClearColor(0/*Red Component*/, 0,	//148.0/255/*Green Component*/,
						0.101010100/*Blue Component*/, 0 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

				glClear (GL_COLOR_BUFFER_BIT); //Update the colors

		b.draw();
		b.designing();
		b.draw_gems();
		// gems g;
		// g.drawGems();

Levels l;
if(b.lv == 0){
	l.level1();
}		

if(b.lv == 1){
	glClearColor(0.101010110/*Red Component*/, 0.101011,	//148.0/255/*Green Component*/,
						0.1010101010/*Blue Component*/, 0.1010100 /*Alpha component*/); // Red==Green==Blue==1 --> White Colour

				glClear (GL_COLOR_BUFFER_BIT); //Update the colors
				b.draw();
		b.designing();
		b.draw_gems();
	l.level2();
}	
		
 Modes mo;

if(b.mo ==0){
       mo.normal(b);
}

if(b.mo == 1){

    mo.timeTrail(b);

}
	
    }

	if(b.mu == 2){
	  m.modes();
  }

  if(b.mu == 3){
	  m.instructions();
  }

   if(b.mu == 5){
	  m.pause_menu();}
	  

	glutSwapBuffers(); // do not modify this line..
	
}

/*This function is called (automatically) whenever any non-printable key (such as up-arrow, down-arraw)
 * is pressed from the keyboard
 *
 * You will have to add the necessary code here when the arrow keys are pressed or any other key is pressed...
 *
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 *
 * */

void NonPrintableKeys(int key, int x, int y) {
	if (key
			== GLUT_KEY_LEFT /*GLUT_KEY_LEFT is constant and contains ASCII for left arrow key*/) {
		// what to do when left key is pressed...

	} else if (key
			== GLUT_KEY_RIGHT /*GLUT_KEY_RIGHT is constant and contains ASCII for right arrow key*/) {

	} else if (key
			== GLUT_KEY_UP/*GLUT_KEY_UP is constant and contains ASCII for up arrow key*/) {

	}

	else if (key
			== GLUT_KEY_DOWN/*GLUT_KEY_DOWN is constant and contains ASCII for down arrow key*/) {

	}

	/* This function calls the Display function to redo the drawing. Whenever you need to redraw just call
	 * this function*/

	glutPostRedisplay();

}

/*This function is called (automatically) whenever any printable key (such as x,b, enter, etc.)
 * is pressed from the keyboard
 * This function has three argument variable key contains the ASCII of the key pressed, while x and y tells the
 * program coordinates of mouse pointer when key was pressed.
 * */
void PrintableKeys(unsigned char key, int x, int y) {
	if (key == 'x' || key == 'X' ) {
		exit(1); 
	}

	if (key == 'p' || key == 'P') 
	{
		b.mu=5;
	}

	if (key == 's' || key == 'S' )  
	{
       b.mu=1;
	}

	if (key == 'm' || key == 'M' ) 
	{
       b.mu=2;
	}

	if (key == 'i' || key == 'I' ) //ASCII for '1' 
	{
       b.mu=3;
	}

if (key == 't' || key == 'T' ) //ASCII for '1' 
	{
       b.mo=1;
	}

	if (key == 'l' || key == 'L' ) //ASCII for '1' 
	{
       b.lv=1;
	}

	glutPostRedisplay();
}

/*
 * This function is called after every 1000.0/FPS milliseconds
 * (FPS is defined on in the beginning).
 * You can use this function to animate objects and control the
 * speed of different moving objects by varying the constant FPS.
 *
 * */
void Timer(int m) {

	// implement your functionality here

	// once again we tell the library to call our Timer function after next 1000/FPS
	glutTimerFunc(1000.0, Timer, 0);
}

/*This function is called (automatically) whenever your mouse moves witin inside the game window
 *
 * You will have to add the necessary code here for finding the direction of shooting
 *
 * This function has two arguments: x & y that tells the coordinate of current position of move mouse
 *
 * */
void MousePressedAndMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}
void MouseMoved(int x, int y) {
	//cout << x << " " << y << endl;
	glutPostRedisplay();
}

/*This function is called (automatically) whenever your mouse button is clicked witin inside the game window
 *
 * You will have to add the necessary code here for shooting, etc.
 *
 * This function has four arguments: button (Left, Middle or Right), state (button is pressed or released),
 * x & y that tells the coordinate of current position of move mouse
 *
 * */
	 
void MouseClicked(int button, int state, int x, int y) {


static int index1=0, index2=0, index3=0, index4=0;
swapping sp;





	if (button == GLUT_LEFT_BUTTON) // dealing only with left button
	{
		if(state==GLUT_DOWN){
          
		  sp.downState(x,y,index1,index2,index3, index4);
		   glutPostRedisplay();
	}
		else if(state==GLUT_UP){

			sp.upState(x,y,b,index1,index2,index3, index4);
			glutPostRedisplay();
			
		}
	}
		
		 else if (button == GLUT_RIGHT_BUTTON) // dealing with right button
			{
			cout<<"Right Button Pressed"<<endl;


	}
	

	glutPostRedisplay();

}
/*
 * our gateway main function
 * */
int main(int argc, char*argv[]) {

	int width = 800, height = 800; // i have set my window size to be 800 x 600



	InitRandomizer(); // seed the random number generator...

	glutInit(&argc, argv); // initialize the graphics library...



	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA); // we will be using color display mode
	glutInitWindowPosition(50, 50); // set the initial position of our window
	glutInitWindowSize(width, height); // set the size of our window
	glutCreateWindow("OOP Project"); // set the title of our game window

	SetCanvasSize(width, height); // set the number of pixels...



	// Register your functions to the library,
	// you are telling the library names of function to call for different tasks.
	//glutDisplayFunc(display); // tell library which function to call for drawing Canvas.



	glutDisplayFunc(GameDisplay); // tell library which function to call for drawing Canvas.

	glutSpecialFunc(NonPrintableKeys); // tell library which function to call for non-printable ASCII characters
	glutKeyboardFunc(PrintableKeys); // tell library which function to call for printable ASCII characters
	// This function tells the library to call our Timer function after 1000.0/FPS milliseconds...
	glutTimerFunc(1000.0, Timer, 0);

	glutMouseFunc(MouseClicked);
	glutPassiveMotionFunc(MouseMoved); // Mouse
	glutMotionFunc(MousePressedAndMoved); // Mouse

	// now handle the control to library and it will call our registered functions when
	// it deems necessary...
	glutMainLoop();
	return 1;
}
#endif /* AsteroidS_CPP_ */
