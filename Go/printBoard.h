/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/


#ifndef PRINTBOARD_H
#define PRINTBOARD_H

  class PrintBoard
  {
    //attr
    private:
      int boardSize=9;      //board dm 9x9	
    
    public:
	    int i,j,row,col;
	    //const string alpha ="ABCDEFGHJI";
	    
      void displayBoard();    //method to display/print the board
};

#endif //PRINTBOARD_H