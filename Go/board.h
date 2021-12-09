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
  
  
 /*********************************************/
   class Cell
   {
    //attr
    private:
        int row_coordinate , column_coordinate; //x and y position for the stone
        bool cellOccupied; 
        Player* playerOwned;
        
    public:
	      
        //constructor
       /* Cell(int rowNo, int colNo)
        {
          row_coordinate = rowNo;        //set row No
          column_coordinate = colAlpha;  //initialize col lettr eg:  Ath col nd 3rd row
          cellOccupied = false;  // initially all cells r nt occupied
          playerOwned = NULL;  // intialy no position
        }*/
		Cell(int rowNo, int colNo)
			:row_coordinate(rowNo), column_coordinate(colNo),cellOccupied(false),playerOwned(NULL){}
		
        ~Cell(){} // destructor
        
        // to acess members
		int  getRow ()const;
        int  getCol ()const;
        Player* getPlayerOwned ()const;
		
        //methods
        bool isOccupied()const;  // to check is cell is occupied
        bool occupy(Player *player);  // to occupy the cell or to place the stone by the ___ player
        Player* changePossession(Player *newPlayer);  // to change the turn/possesionof the playes
        bool  belongsTo(const Player *player)const;
        void free() ; // to make the cell free
    
    }; //class cell
	

  /*******************************/
  class Board
  {
    friend class Printer;

    private:
      int size;
      std::vector< std::vector<Cell>>table; // we crt a vector table of type Cell
      int occupiedCells;

      Cell& getCell(const int row,const int col);
    
    public:
     
      Board(int size);  //constructor
      ~Board();     //destructor
      

      //methods
      bool isEmpty()const;
      bool isFull()const;
      int getSize()const;
	  bool isCellOccupied(const int row, const int col);
      bool isCellOwnedBy(const int row, const int col, const Player* player);
      bool playAt(const int row, const int col, Player* player);   //stone placemnet
      Player* removeStone (const int row, const int col);     // to remove captured stones
      int  countStonesFor(const Player* player);   // to count the stones of respective players
   }; //class Board

#endif //BOARD_H