/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#include <iostream>
#include "cell.h"

using namespace std;

//to check if cell is occupied or no
bool Cell::isOccupied()const{
    return this->cellOccupied;
}

//---------------------------------------

//to place the stone on the cell
bool Cell::occupy(Player* player)
{
  //A) check if cell is already occupied
     //i) if yes then return false   
  if(this->cellOccupied)
     return false;
  
  // ii) if no then set cell occupied to true nd set the player also rturn true
  this->cellOccupied = true;
  this->playerOwned = player ;
  return true;
}

//----------------------------------------------

//to change the players Possesion
Player* Cell::changePossession(Player* newPlayer)
{
    Player* oldPlayer = this->playerOwned;  
    this->occupy(newPlayer);
    return oldPlayer;   // may be NULL
}

//-------------------------------------


bool Cell::belongsTo(const Player* p)const
{
    return this->playerOwned == p;
}

//---------------------------------
// to make the cell free
void Cell::free()
{
  this->cellOccupied = false;
  this->playerOwned = NULL;
}


