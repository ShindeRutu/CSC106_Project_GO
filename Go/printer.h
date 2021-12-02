/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/


#ifndef PRINTBOARD_H
#define PRINTBOARD_H

  #include "player.h"
  #include "cell.h"

  class PrintBoard
  {
    //attr
    private:
      int boardSize=9;      //board dm 9x9	
      char emptyCellBox;       // to replresent emprty cell
      char player1Stone;    // to represnet black stone
      char player2Stone;    // to represent white stone

    public:
	    int i,j,row,col;
	   
	    
      //constructor
      PrintBoard(const char emptyCell = '.',const char player1 = 'x',const char player2 = 'o');
      
      //destructor
      ~PrintBoard(){}

      void displayBoard();    //method to display/print the board
  
  };  //class PrintBoard

#endif //PRINTBOARD_H