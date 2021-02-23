/*
 * Modes.cpp
 *
 *  Created on: Jun 10, 2020
 *      Author: elitebook_840
 */

#include "Modes.h"

Modes::Modes(){
    
}

void Modes::normal(board &b){
    static float time=700;
          time-=0.5;

		  if(time>0)
		  b.progressBar(time);
}


void Modes::timeTrail(board &b){
   static float time=0;
		time+=0.5;
		if(time <699)
		b.timeBar(time);
}

Modes::~Modes(){

}
