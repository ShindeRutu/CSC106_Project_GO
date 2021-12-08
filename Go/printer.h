/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/


#ifndef Printer_H
#define Printer_H

  #include "player.h"
 // #include "cell.h"
  #include "board.h"
  
  class Board;
  

  class Printer
  {
    //attr
    private:
      //int boardSize=9;      //board dm 9x9	
      char emptyCellBox;       // to replresent emprty cell
      char player1Stone;    // to represnet black stone
      char player2Stone;    // to represent white stone

    public:
	    int i,j,row,col;
	   
	    //constructor
    	Printer(const char emptyCell = '.',const char player1 = 'x',const char player2 = 'o');
      
      	//destructor
     	~Printer(){}
 
	  	//method to display/print the board
     	 void displayBoard(Board& board, const Player* player1);    
  
  };  //class Printer

#endif //Printer_H