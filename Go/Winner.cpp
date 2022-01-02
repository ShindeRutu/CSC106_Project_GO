/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#include<iostream>
#include "winner.h"

using namespace std;
    
	int boardSize=9;
	Board b = Board(boardSize);
	Printer p = Printer();	

   void Winner::stoneCount(const Player* p1, const Player *p2)
   {
	  	cout<<"\nBlack Stone count: "<<b.countStonesFor(p1);
					
		cout<<"\nWhite Stone count: "<<b.countStonesFor(p2); 
   }