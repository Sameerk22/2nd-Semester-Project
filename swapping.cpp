/*
 * swapping.cpp
 *
 *  Created on: Jun 6, 2020
 *      Author: elitebook_840
 */

#include "swapping.h"

swapping::swapping() {
	
	int mouse_pressedX=0, mouse_pressedY=0, mouse_releasedX=0, mouse_releasedY=0;
	int var1=0,var2=0;
	int touch1=0, touch2=0, touch3=0, touch4=0;
	int check=0;
	int flag=0;
	 
}

void swapping::downState(int x, int y, int &index1, int &index2, int &index3, int &index4) {
		
		mouse_pressedX=x;
		mouse_pressedY=y;
		int a=0,b=0;
		touch1 = mouse_pressedX;
		touch2 = 800-mouse_pressedY;
		

			for(int i=0; i<8; ++i) {
				if(touch1>=160+a && touch1<=220+a) 
				{
					index1=i;
					cout<<index1;
					index3=0;
					
					break;
				}

				a+=60;
			}

			for(int i=7 ; i>=0; i--) {
				if(touch2<=700-b && touch2>=640-b) 
				{
					index2=i;
					cout<<index2<<endl;
					index4=0;
					
					break;
				}

				b+=60;
		    }
	}
		
 void swapping::upState(int x, int y, board b, int &index1, int &index2, int &index3, int &index4) {
    	
		mouse_releasedX=x;
		mouse_releasedY=y;
		int a1=0,b1=0;
		touch3 = mouse_releasedX;
		touch4= 800 - mouse_releasedY;
		
			
			for(int i=0; i<8; ++i) {
				if(touch3>=160+a1 && touch3<=220+a1) 
				{
					index3=i;
					cout<<index3;
					
					break;
				}

				a1+=60;
			}

			for(int i=7; i>=0; i--) {
				if(touch4<=710-b1 && touch4>=650-b1) 
				{
					index4=i;
					cout<<index4<<endl;
					
					break;
				}
				
				b1+=60;
			}
			
				if((index3 == index1-1) || (index3==index1+1) || (index3==index1)){
					if(index3 == index1)
					   check=0;
				else{
					check=1;
					}
					flag=0;
					}
				else
					{flag=1;}

			if(((index4==index2-1 || index4==index2+1) || (index2==index4)) && (flag==0)) {
				if(((index4==index2-1) || (index4==index2+1)) && (check==1)) {
					
					index2=0;
					index4=0;
					index1=0;
					index3=0;
				}
					var1 = b.board_grid[index1][index2];
					var2 = b.board_grid[index3][index4];
					b.board_grid[index1][index2] = var2;
					b.board_grid[index3][index4] = var1;
			}
			
			
			
 }      
       
swapping::~swapping(){

}
