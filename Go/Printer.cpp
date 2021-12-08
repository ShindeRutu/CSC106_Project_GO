/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

//#include <iomanip>   //to use set width; setw()
#include <iostream>
#include <string>
#include "printer.h"

using namespace std;


//constructor
Printer::Printer(const char emptyCell, const char player1, const char player2):emptyCellBox(emptyCell), player1Stone(player1), player2Stone(player2){}

// to display the board
void Printer::displayBoard(Board& board, const Player* player1)
{
  const string colNums ="123456789";
  int boardSize = board.size;

  /* -------------------------------------------------
   * to print the first line of colum numbers
   * ----------------------------------------------------*/
   
    // to get the 1st line of Nums in center of console
	for(col=0; col< boardSize/10+2; col++)
        cout <<"\t";         //setw() to provide field width 
	for (col =0; col< boardSize; col++)
        cout << colNums.at(col) 
		        <<"\t";   // will display char at ith index
    cout.put(cout.widen('\n'));
    cout.flush();	//request all characters written to the controlled sequence.
    
	// to print + -------+
	for(i=0; i<boardSize/10+1; i++)   
	    cout <<"\t";
	cout<<" +";   // prints "+" at the first pos 
	
	for (i=0; i<boardSize*2; i++)   //for loop "boardSize*3 + 4" is adjusted as per display 
		cout << "--";  // prints --
	cout <<"-+";   // prints "+" at the last pos 
	cout.put(cout.widen('\n'));
    cout.flush();	

   /* ---------------------------------------------------------
    * to print the coordinates intersection(.)
    * -----------------------------------------------------*/
   
	for(i=1; i<=boardSize; i++)
	{
		// to porint row numbers : left side
		for(row=1; row<boardSize/10-i/10; row++)
            cout<<"\t";
        cout<<"\t"
			<< i 
			<< "| ";
        
		// to print the stones
        for(j=0;j<boardSize; j++)
        {
			//cout <<setw(4);
			           //<<"___.____";   //adjusted as per the console
			Cell c = board.getCell(i,j);
			if(!c.isOccupied())
				cout<<"\t"<< this->emptyCellBox;
			else if (c.getPlayerOwned() == player1)
				cout <<"\t"<<this->player1Stone;
			else 
				cout<<"\t"<<this->player2Stone;
			cout<<" ";
		}//inner for loop
        
		// to porint row numbers : right side
        cout<< " |"
		    << i;
        cout.put(cout.widen('\n'));
        cout.flush();
	}//outer for loop
    
	/* ---------------------------------------------
    * to print the last line of  "+--------------+" and the column Nums
    * -----------------------------------------*/
	cout<<"outer line"<<endl;
	// to print + -------+
	for(i=0; i<boardSize/10+1; i++)   
	      cout <<"  ";
	cout<<"+";   // prints "+" at the first pos 
	
	for (i=0; i<boardSize; i++)   //for loop "boardSize*3 + 4" is adjusted as per display 
	      cout << "--";  // prints --
	cout <<"+";   // prints "+" at the last pos 
	cout.put(cout.widen('\n'));
    cout.flush();
		
	//to print the column Numbers(last line)
	for(col=0; col< boardSize/10+2; col++)
        cout <<" ";         //setw() to provide field width 
	
	for (col =0; col< boardSize; col++)
        cout << colNums.at(col) 
		     <<"  ";   // will display char at ith index
    cout.put(cout.widen('\n'));
    cout.flush();	//request all characters written to the controlled sequence.	

}//end of displayBoard 


