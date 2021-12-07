/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#ifndef BOARD_H
#define BOARD_H
  
  #include <vector>
  /* Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.*/
  #include"printer.h"
  #include"player.h"
  #include"cell.h"

  class Board
  {
    friend class Printer;
    friend class Cell;   //new modific 
	
    private:
      int size;
      std::vector< std::vector<Cell > > table; // we crt a vector table of type Cell
      int occupiedCells;

      Cell& getCell(const int row,const int col);
    
    public:
     
      Board(int size);  //constructor
      ~Board();     //destructor
      

      //methods

      bool playAt(const int row, const int col, Player* p);   //stone placemnet
      Player* removeStone (const int row, const int col);     // to remove captured stones
      int  countStonesFor(const Player* p);   // to count the stones of respective players
      bool isCellOccupied(const int row, const int col);
      bool isCellOwnedBy(const int row, const int col, const Player* p);
      bool isEmpty()const;
      bool isFull()const;
      int getSize()const;

   }; //class Board

#endif //BOARD_H