/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#include <iostream>
#include <string.h>
#include "board.h"

using namespace std;

//constructor
Board::Board(int size):size(size), occupiedCells(0)
{
  table = vector< vector<Cell> >();
  for (int i=0; i<size; i++)
  {
    table.push_back(vector<Cell>());
    for (int j=0; j<size; j++)
    {
      table[i].push_back( Cell(i,j) );
    }
  }
}

//destructor
Board::~Board(){}

//to access private memebers
int Board::getSize()const
{ 
  return size;
}
//-----------------------------
bool Board::isFull()const
{
   return occupiedCells==size*size;
}
//-------------------------
bool Board::isEmpty()const
{
   return occupiedCells==0;
}
//---------------------------
bool Board::isCellOwnedBy(const int row, const int col, const Player *p)
{
  return getCell(row,col).belongsTo(p);
}
//----------------------------------
bool Board::isCellOccupied(const int row, const int col)
{
    return getCell(row,col).isOccupied();
}
//----------------------------------
Cell& Board::getCell(const int row,const int col){

    Cell& c = table[row][col];
    return c;
}
//---------------------


//to count the num os stones fr ech player
int Board::countStonesFor(const Player *p)
{
  int count=0;
  for (int row=0; row<size; row++)
  {
    for (int col=0; col<size; col++)
    {
      if (getCell(row,col).belongsTo(p))
      {
        count++;
      }
    }
  }
    return count;
}

//-----------------------


// to remove the captured stones
Player* Board::removeStone(const int row, const int col)
{
    Cell& c = getCell(row,col);
    Player* p = c.getPlayerOwned();
    c.free();
    return p;
}

//--------------------
// placing the stone
bool Board::playAt(const int row, const int col, Player* p)
{
    Cell& c = getCell(row,col);

    if (c.isOccupied())
    {
      return false;
    }
    else
    {
      c.occupy(p);
      return true;
    }
}