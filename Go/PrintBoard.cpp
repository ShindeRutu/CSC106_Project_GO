/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#include <iomanip>   //to use set width; setw()
#include <iostream>
#include <string>
#include "printBoard.h"
using namespace std;


//constructor
PrintBoard::PrintBoard(const char emptyCell, const char player1, const char player2)
  :emptyCellBox(emptyCell), player1Stone(player1), player2Stone(player2){}

// to display the board
void PrintBoard::displayBoard()
{
  const string alpha ="ABCDEFGHJI";
	 /* -------------------------------------------------
    * to print the first line of alphabets 
    * ----------------------------------------------------*/
    // to get the 1st line of alpha in center of console
	  for(col=0; col< boardSize/10+2; col++)
        cout <<setw(10);         //setw() to provide field width 
	  for (col =0; col< boardSize; col++)
        cout << alpha.at(col) 
		        <<setw(8);   // will display char at ith index
    cout.put(cout.widen('\n'));
    cout.flush();	//request all characters written to the controlled sequence.
    
	  // to print + -------+
	  for(i=0; i<boardSize/10+1; i++)   
	      cout <<setw(9);
	  cout<<"+---";   // prints "+" at the first pos 
	
	  for (i=0; i<boardSize*3+6; i++)   //for loop "boardSize*3 + 4" is adjusted as per display 
	      cout << "--";  // prints --
	  cout <<"---+";   // prints "+" at the last pos 
	  cout.put(cout.widen('\n'));
    cout.flush();	

   /* -------------------------------------------------------------------
    * to print the coordinates intersection(.)
    * -----------------------------------------------------*/
    //for the first |    |    |  |
	  cout <<setw(6)<<"|"<<setw(4)<<"|"
			   <<setw(8)<<"|"<<setw(8)<<"|"
			   <<setw(8)<<"|"<<setw(8)<<"|"
			   <<setw(8)<<"|"<<setw(8)<<"|"
			   <<setw(8)<<"|"<<setw(8)<<"|"
			   <<setw(5)<<"|"<<endl;
    
    
	  for(i=1; i<=boardSize; i++)
	  {
		    for(row=1; row<boardSize/10-i/10; row++)
            cout<<setw(8);
        cout<<setw(5)
		        << i 
			      << "|";
        
        for(j=0;j<boardSize; j++)
            cout <<setw(4)
			           <<"___.____";   //adjusted as per the console
        
        cout<<"|"<<i;
        cout.put(cout.widen('\n'));
        cout.flush();
        
        cout <<setw(6)<<"|"<<setw(4)<<"|"
        		 <<setw(8)<<"|"<<setw(8)<<"|"
			       <<setw(8)<<"|"<<setw(8)<<"|"
			       <<setw(8)<<"|"<<setw(8)<<"|"
			       <<setw(8)<<"|"<<setw(8)<<"|"
			       <<setw(5)<<"|"<<endl;
	  }

	
	 /* -------------------------------------------------------------------
    * to print the last line of  "+--------------+" and the alphabets
    * -----------------------------------------*/
	  // to print + -------+
	  for(i=0; i<boardSize/10+1; i++)   
	      cout <<setw(9);
	  cout<<"+---";   // prints "+" at the first pos 
	
	  for (i=0; i<boardSize*3+6; i++)   //for loop "boardSize*3 + 4" is adjusted as per display 
	      cout << "--";  // prints --
	  cout <<"---+";   // prints "+" at the last pos 
	  cout.put(cout.widen('\n'));
    cout.flush();
		
	  //to print the alphas
	  for(col=0; col< boardSize/10+2; col++)
        cout <<setw(10);         //setw() to provide field width 
	  for (col =0; col< boardSize; col++)
        cout << alpha.at(col) 
		         <<setw(8);   // will display char at ith index
        cout.put(cout.widen('\n'));
        cout.flush();	//request all characters written to the controlled sequence.	

}//end of displayBoard 

