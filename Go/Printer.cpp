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

// to display the board
void Printer::displayBoard(Board& board, const Player* player1)
{
	int boardSize = board.size;
	int i,j,col,row;

	//to print the header line :
	//clf: count line formatting //cl count line
	for(i=0; i<boardSize/10+2; i++)
		cout <<setw(15);   //for formatting
	for(col=1; col<=boardSize; col++)
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
    //cout<<"2nd flush";

	// to print border and row nums
	for(j=0; j<boardSize; j++)
	{
		//printing row num at left side
		//row count working = crw
		for(row=0; row<=boardSize/10-j/10; row++)
			cout<<setw(8); //formatting
		//cout<<"rcw";
		cout <<setw(10) <<"|"<< setw(58)<<"|"<<endl;
		cout <<setw(9) << j+1 <<"|";
		//cout<<"rw";  // rw= row working

		//placing the stones , empty cells
		for (int k =0; k<boardSize; k++)
		{
			//cout<<"pw";  //pw= placment wrking
			Cell c = board.getCell(j,k);

			if(!c.isOccupied())
				cout<<setw(5) << this->emptyCellBox;
			
			else if(c.getPlayerOwned() == player1)
				cout <<setw(5) << this->player1Stone;
			
			else 
				cout<<setw(5) << this-> player2Stone;
			cout <<" ";
		}

        //cout <<"wap";  //wrking aftr placement=  wap
		//printing row num at right side
		cout <<setw(4) <<"|" <<j;
        
		cout.put(cout.widen('\n'));
		cout.flush();
		//cout<<"3rd flush";
	}//for loop 
    
	//cout<<"footer";
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
	for(col=1; col<=boardSize; col++)
		cout << col <<setw(6);   // to print the column numbers
	
	cout.put(cout.widen('\n'));
    cout.flush();
 } //class end


