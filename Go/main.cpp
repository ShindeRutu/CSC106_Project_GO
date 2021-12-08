/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#include <iomanip>
#include<iostream>
#include <string>
#include "printer.h"
using namespace std;

int main(int argc, char *argv[])
{
	int boardSize = 9; //dimensions: 9x9
    //objct creation
	Printer pb = Printer();
	Player *player1 = new Player(), *player2 = new Player();
    Board board = Board(boardSize);

	//pb.displayBoard();
    board.playAt(0,0, player1);
	pb.displayBoard(board, player1);
    cout<<endl<<endl;

    board.playAt(4,5, player2);
	pb.displayBoard(board, player2);
    cout<<endl<<endl;

    board.playAt(6,7, player1);
	pb.displayBoard(board, player1);
    cout<<endl<<endl;
	
	cout<<endl<<endl;
	return 0;
}