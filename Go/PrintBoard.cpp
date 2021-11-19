/*
* Print Board:  to print the Go Board
*/

#include <iomanip>
#include<iostream>
#include <string>
using namespace std;

class PrintBoard{
  //attr
  private:
        int boardSize=9;      //board dm 9x9	
  public:
	    int i,j,row,col;
	    const string alpha ="ABCDEFGHJI";
	    void displayBoard();
};

void PrintBoard::displayBoard()
{
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
}


