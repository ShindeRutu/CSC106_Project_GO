/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#include <iomanip>   //to use set width; setw()
#include <iostream>
#include <string>
#include "printer.h"

using namespace std;


//constructor
Printer::Printer(const char emptyCell, const char player1, const char player2):emptyCellBox(emptyCell), player1Stone(player1), player2Stone(player2){}

//to print game nme
void Printer::printHeader()
{
	/*
	###############################
	##___|___|___|___|___|___|___##
	##_|___|___|___|___|___|___|_##
	##___|___|_GO GAME|___|__|___##
	##_|___|___|___|___|___|___|_##
	##___|___|___|___|___|___|___##
	###############################
	*/
	cout<<"\n\n\n";

	//to print ###############################
	for(int j=0; j<10; j++)
		cout<<setw(20);
	cout<<"##";

	//conditions are  adjusted acording to console
	for(int j=0; j<36; j++)    
		cout<<"##";
	cout<<"##";
    cout.put(cout.widen('\n'));
	cout.flush();
    
	//to print ##___|___|___|___|___|___|___##
		cout<<setw(20)<<"##";
		for(int j=0; j<18; j++)    
			cout<<"___|";
    	cout<<"##"<<endl;

	//to print ##__|__|__|__GO GAME__|__|__|__##
	cout<<setw(20)<<"##";
	for(int j=0;j<8; j++)
		cout<<"_|__";
    cout<<"_GO GAME";
	for(int j=0;j<8; j++)
		cout<<"_|__";
    cout<<"##"<<endl;

    
	//to print ##___|___|___|___|___|___|___##

		cout<<setw(20)<<"##";
		for(int j=0; j<18; j++)    
			cout<<"___|";
    	cout<<"##"<<endl;	

	/*to print ###############################
	for(int j=0; j<10; j++)
		cout<<setw(20);
	cout<<"##";
	for(int j=0; j<36; j++)    
		cout<<"##";
	cout<<"##";
    cout.put(cout.widen('\n'));
	cout.flush();*/

}// printHeader()


/***************************/
// to display the board
void Printer::displayBoard(Board& board, const Player* player1)
{
	int boardSize = board.size;
	int i,j,col,row;

	//to print the header line :
	
	for(i=0; i<boardSize/10+2; i++)
		cout <<setw(15);   //for formatting
	for(col=0; col<boardSize; col++)
		cout << col <<setw(6);   // to print the column numbers
	
	cout.put(cout.widen('\n'));
	cout.flush();

    //to print +---------------+
	for(i=0; i<boardSize/10+1; i++)
		cout<<setw(10);
	cout<<"+";

	//boardSize*7-6 : adjusted acording to console
	for(i=0; i<boardSize*7-6; i++)    
		cout<<"-";
	cout<<"+";

	cout.put(cout.widen('\n'));
	cout.flush();
    

	// to print border and row nums
	for(j=0; j<boardSize; j++)
	{
		//printing row num at left side
		
		for(row=0; row<=boardSize/10-j/10; row++)
			cout<<setw(8); //formatting
		
		cout <<setw(10) <<"|"<< setw(58)<<"|"<<endl;
		cout <<setw(9) << j <<"|";
		

		//placing the stones , empty cells
		for (int k =0; k<boardSize; k++)
		{
			Cell c = board.getCell(j,k);

			if(!c.isOccupied())
				cout<<setw(5) << this->emptyCellBox;
			
			else if(c.getPlayerOwned() == player1)
				cout <<setw(5) << this->player1Stone;
			
			else //if(c.getPlayerOwned() == player2)
				cout<<setw(5) << this-> player2Stone;
			cout <<" ";
		}

        
		//printing row num at right side
		cout <<setw(4) <<"|" <<j;
        
		cout.put(cout.widen('\n'));
		cout.flush();
		
	}//for loop 
    cout <<setw(10) <<"|"<< setw(58)<<"|"<<endl;
	// To print the footer 
	// to print +------------+
	for(i=0; i<boardSize/10+1; i++)
		cout<<setw(10);
	cout<<"+";

	// boardSize*7-6 : adjusted acording to console
	for(i=0; i<boardSize*7-6; i++)   
		cout<<"-";
	cout<<"+";
	

	cout.put(cout.widen('\n'));
    cout.flush();
	//col num line  //clf: count line formatting //cl count line
	for(i=0; i<boardSize/10+2; i++)
		cout <<setw(15);   //for formatting
	for(col=0; col<boardSize; col++)
		cout << col <<setw(6);   // to print the column numbers
	
	cout.put(cout.widen('\n'));
    cout.flush();
 } //class end



