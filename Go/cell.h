/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/


#ifndef CELL_H
#define CELL_H
  
  #include "player.h" 
  #include "printer.h" 
  #include "board.h"
 //#include "board.h" 

  class Cell
  {
    //attr
    private:
        int row_coordinate , column_coordinate; //x and y position for the stone
        bool cellOccupied; 
        Player* playerOwned;
        
    public:
	      
        //constructor
        Cell(int rowNo, int colAlpha)
        {
          row_coordinate = rowNo;        //set row No
          column_coordinate = colAlpha;  //initialize col lettr eg:  Ath col nd 3rd row
          cellOccupied = false;  // initially all cells r nt occupied
          playerOwned = NULL;  // intialy no position
        }

        ~Cell(){} // destructor
        
        //methods
        bool isOccupied()const;  // to check is cell is occupied
        bool occupy(Player *p);  // to occupy the cell or to place the stone by the ___ player
        Player* possesion(Player *newPlayer);  // to change the turn/possesionof the playes
        bool  belongsTo(const Player *p)const;
        void free() ; // to make the cell free
       
        //to access private members
        int getRow()const
        {
          return row_coordinate;
        }

        int getCol()const
        {
          return column_coordinate;
        }

        Player*  getPlayerOwned()const
        {
          return playerOwned;
        } 
    
    }; //class cell

#endif //CELL_H