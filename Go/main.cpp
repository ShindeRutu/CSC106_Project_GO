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
    int row,col,choice;
	int player1Move=1, player2Move =1, i=1;
	string  pass,player1Name,player2Name;

	//objct creation
	Board b = Board(boardSize);
	Player  *player1 = new Player(), 
			*player2 = new Player();
	Printer p = Printer();
	
	// to print the header of the game:
	p.printHeader();

	cout<<endl<<endl;

	//player details
	cout<<"Enter player1 Name: ";
	cin>>player1Name;
	cout<<"Enter player2 Nmae: ";
	cin>>player2Name;
     
	//input from the console
	do
	{
		cout<<"\n1.Play a move \t2.Pass over \nEnter your choice: ";
		cin>>choice;

		switch(choice)
		{
			case 1: {
						//input from player 1
						if(i%2 != 0)
			       		{
					   		cout <<"\n"<<player1Name<<" enter the cordinates for move num "<<player1Move<<" : "<<endl;
					   		cin>> row>>col;
							/*
							* check if cell is alrdy occupied :
							  if yes then display illegal move else place the stone.
							* check fr liberty illegal move
							*/ 
					   		b.playAt(row,col, player1);
					   		p.displayBoard(b, player1);
							player1Move++;
    				   		cout<<endl<<endl; 		   
				   		}
                          
						//input from player 2
				   		else if(i%2 ==0)
				   		{
							   cout <<"\n"<<player2Name<<" enter the cordinates for move num "<<player2Move<<" :  "<<endl;
					   			cin>> row>>col;
								/*
								 * check if cell is alrdy occupied :
							       if yes then display illegal move else place the stone
								 * check fr liberty illegal move
							    */ 
					   			b.playAt(row,col, player2);
					   			p.displayBoard(b, player2);
								player2Move++;
    				   			cout<<endl<<endl;
						} 	
						i++;			
					}break;
            
			case 2: //check the for winner 
			        cout<<"checking for winner";
					b.countStonesFor(player1);
					b.countStonesFor(player2);
					//cout<<count;
					break;
      
            default:  cout<<"Enter valid choice";break;
		}//switch
	}//do
	while(choice!=2);

		
		
    	

	cout<<endl<<endl;
	return 0;
}