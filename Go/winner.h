/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#ifndef WINNER_H
#define WINNER_H

#include "board.h"
#include "player.h"
#include "printer.h"
#include<iostream>

	using namespace std;
    
	class Winner
	{
				
		//if player says pass over: then 
		
		/*
            method: a. to count the stone : more the num of stones
				    c. count the captured/removed stones
					d. declare the wiiner
	    */
		
        /* a. method to remove stones from captured area:
		* check if the surrounding stones belong to one player only... if yes check fr liberty : if liberty count = 1, then remove the stones... 
		*/

		/* c. method to count the stones
		* call the method fromj board class providing player name :  count StonesFor()
       */

	}
	

#endif //WINNER_H