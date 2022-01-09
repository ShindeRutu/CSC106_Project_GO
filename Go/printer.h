/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/


#ifndef Printer_H
#define Printer_H

  	#include "player.h"
  	#include "board.h"
  
  	class Board;
	
	class Printer
  	{
    	//attr
    	private: 
      		char emptyCellBox;    // to replresent emprty cell
     		char player1Stone;    // to represnet black stone
      		char player2Stone;    // to represent white stone

    	public:
	  
	    	//constructor
    		Printer(const char emptyCell = '.',const char player1 = 'o',const char player2 = 'x');
      
      		//destructor
     		~Printer(){}
 
			//to print header
			void printHeader();

			
	  		//method to display/print the board
     	 	void displayBoard(Board& board, const Player* player1); 
			
	};  //class Printer

#endif //Printer_H