/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#include <iomanip> //for setw()
#include<iostream>
#include "board.h"
#include "player.h"
#include "printer.h"
using namespace std;

int main(int argc, char *argv[])
{
	int boardSize = 9; //dimensions: 9x9
    int row,col;
	string  pass;

	//objct creation
	Board board = Board(boardSize);
	Player  *player1 = new Player(), 
			*player2 = new Player();
	Printer pb = Printer();
	
	// to print the header of the game:
	cout <<endl; 
	cout <<setw(50)<<"******************************"<<setw(50)
	     <<endl <<setw(50) <<"\tGO GAME\t" <<endl
		 <<setw(50)<<"******************************"
		 <<"\n\n\n";
    
	//pb.displayBoard(board,playe);
	//1st move by player1
    /*board.playAt(0,0, player1);
	pb.displayBoard(board, player1);
    cout<<endl<<endl;
    
	//2nd move by player2
    board.playAt(0,2, player2);
	pb.displayBoard(board, player2);
    cout<<endl<<endl;
    
	//3rd move by player1
    board.playAt(1,2, player1);
	pb.displayBoard(board, player1);
    cout<<endl<<endl;
	*/
     
	//input from the console
	cout <<"Enter the cordinates";
	cin>> row>>col;
      
	board.playAt(row,col, player1);
	pb.displayBoard(board, player1);
    cout<<endl<<endl; 


	cout<<endl<<endl;
	return 0;
}