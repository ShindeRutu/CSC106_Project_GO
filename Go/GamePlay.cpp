/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/


#include <iostream>
#include <stdlib.h> //fr system(CLS),system(Clear)
#include "gamePlay.h"
using namespace std;
	
   void GamePlay::instruct()
   {
   		system("clear");  //to get on 2nd new screen
		//instructions:
		cout<<"\t\t\t\t <<<<<<<<<< INSTRUCTIONS >>>>>>>>>>>>>>";
		cout<<"\n\n\t==> Black should always make the first move."
			<<"\n\t==> White makes the second move."
			<<"\n\t==> A player makes a move when he places a stone on a vacant intersection on the board."	
			<<"\n\t==> Players are allowed to pass their turns. However it bring the game to end."
			<<"\n\t==> The player who occupies the most extensive area wins."
			<<"\n\t==> The player’s area comprises of all the points he has surrounded."
			<<"\n\t==> A stone should be removed when the enemy occupies adjacent intersections."
			<<"\n\n\n\t\t\t\t<<<<<<<< How to Place and remove a stone >>>>>>>>>>>"
			<<"\n\t==> To place a stone, select option 1 and then enter the corresponding row and column number."
			<<"\n\t==> To remove the stone, select option 2 and then enter the corresponding row and column number."
			<<"\n\t==> To pass over the turn simply swelect option 3.\n\n";
			
	}//startGame()
  