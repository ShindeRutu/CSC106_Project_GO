/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#include <iomanip> //for setw()
#include <iostream>
#include "board.h"
#include "player.h"
#include "printer.h"
using namespace std;

int main(int argc, char *argv[])
{
	int n = 9;
    Board board = Board(n);


    Player *p1 = new Player(),
        *p2 = new Player();
    Printer p = Printer();


    board.playAt(0,0, p1);
	p.displayBoard(board, p1);
    cout << endl; cout << endl;


    board.playAt(4,5, p2);
    p.displayBoard(board, p2);
    cout << endl; cout << endl;

	board.playAt(6,7, p1);
    p.displayBoard(board, p1);
    cout << endl; cout << endl;

	board.playAt(0,0, p2);
	p.displayBoard(board, p2);
    cout << endl; cout << endl;

    //p.displayBoard(board, p1);
    //cout << endl; cout << endl;


    //board.removeStone(0,0);
    //p.displayBoard(board, p1);

    delete p1, p2;
    return 0;
}
