/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/


#ifndef PLAYER_H
#define PLAYER_H

  #include <string>

  using namespace std;

  class Player
  {
    private: 
      string playerName; // to store player name  
   
    public:
  
      Player()  //constructor
        :playerName(""){}

      Player(const string name) //parametarised constructor (public)
        :playerName(name){}

      ~Player(){}    //destructor

      string getName()const{return this->playerName;} // access private member

      // to change the players turn   
      bool operator == (const Player &other){ return (this == &other); } 
      bool operator != (const Player &other){ return !(*this == other); }

  };


#endif // PLAYER_H