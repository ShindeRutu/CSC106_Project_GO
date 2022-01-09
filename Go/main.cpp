/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
	

    - player1Move,player2Move : move num of player 1 and 2
    - blackStones, whiteStones : num of stones bieng played 
    - bCap,wCap : num of black stones captured and white stones caputerd
	
*/

#include <iomanip> //for setw()
#include <iostream>
#include <stdlib.h> //fr system(CLS),system(Clear)
#include "board.h"
#include "player.h"
#include "printer.h"
#include "gamePlay.h"

using namespace std;

int main(int argc, char *argv[]){
	int boardSize = 9; //dimensions: 9x9
    int row,col,choice;
	int i=1, blackStones=0, whiteStones =0, bCap=0, wCap=0;
    char ch;//choice
    string player1Name, player2Name;


    //objct creation
	Board b = Board(boardSize);
	Printer p = Printer();
	GamePlay g = GamePlay();
	
	// to print the header of the game:1st page of game
	system("clear");  //fr replit nd linux
	p.printHeader();
    
    do{   
        cout<<"\t\t+-----------------|----------------+"<<endl;
		cout<<"\t\t|  To START -> S  |  To EXIT -> E  |"<<endl;
		cout<<"\t\t+-----------------|----------------+"<<endl;
		cout<<"\t\t==> ";
		//input validation for row num
		while(!(cin>>ch && (ch=='S' || ch=='s' || ch=='E' || ch=='e' ))){
			//explain the error
			cout<<"\n\t\tEnter a valid choice.Enter 'S' to start the game or 'E' to exit from the game."<<"\n\t\t==> ";
			cin.clear();		//clear the previous input
			cin.ignore(123, '\n');	// discard prwevious input
		}
        
        //once valid input is entered
		switch(ch){
			//case 'S': case's': will handel both the cases
			case 'S': case's':
			{
				g.instruct();
				//player details
				cout<<"\n\n\t\t\t\t<<<<<<< PLAYER DETAILS >>>>>>>";
				cout<<"\n\t\t Enter player 1 name: "; 	cin>>player1Name;
				cout<<"\t\t Enter player 2 name: ";	cin>>player2Name;
				
    			//player objects
				Player  *player1 = new Player(player1Name), 
						*player2 = new Player(player2Name);
						
 			
				//input from the console
				do{   
					system("CLS"); //to clear the screen for windows
					system("clear");  //fr replit nd linux
         
         			//top display
       				cout<<"\t\t+-----------------------|-----------------------+"<<endl;
					cout<<"\t\t|  PLAYER 1\t\t|  PLAYER 2\t\t|"<<endl;
					cout<<"\t\t|  Black Stones [o]:"<<blackStones<<"\t|  White Stones [x]:"
						<<whiteStones<<"\t|"<<endl;
					cout<<"\t\t|  Stones Captured:"<<bCap<<"\t|  Stones Captured:"
						<<wCap<<"\t|"<<endl;
					cout<<"\t\t+-----------------------|-----------------------+"<<endl<<endl;

					//initial board
					p.displayBoard(b, player1);
					
					cout<<"\n\n\t\t1.Play a move \t2.Remove a stone \t3.Pass over"
						<<"\n\t\t==> Enter your choice:";
					//input validation
					while(!((cin>>choice) && (choice ==1 || choice ==2 ||choice ==3))){
						//explain the error
						cout<<"\t\t==> Enter a valid choice fron 1,2,3 : ";
						cin.clear(); 	//clear the previous input 
						cin.ignore(123,'\n');  //discard previous input
					}
		
					switch(choice){
						case 1://we cn play until blackstones !=181 nd white stones !=180
						       {
								//input from player 1
								if(i%2 != 0){
					   				cout <<"\n\t\t"
					   		     		 <<player1->getName()
					   		     		 <<", enter the row and column number."
					   		     		 <<"\n\t\t==> Row: ";
					   		
					   				//input validation for row num
					   				while(!(cin>>row && row>0 && row<9)){
					   					//explain the error
					   					cout<<"\t\tEnter a valid row digit (0-8) : ";
					   					cin.clear();  //clear the previous input
					   					cin.ignore(123, '\n');  // discard prwevious input
					   				}
					   				//input validation for column num
					   				cout<<"\t\t==> Column: ";
					   				while(!(cin>> col && col>0 && col<9)){
					   					//explain the error
					   					cout<<"\t\tEnter a valid column digit (0-8) : ";
					   					cin.clear();		//clear the previous input
					   					cin.ignore(123, '\n');		// discard prwevious input
					   				}
					   		
									//if cell is not preocupied then 
					   				if(b.playAt(row,col, player1))
									p.displayBoard(b, player1);
							        //else if cell is preoccupied
									else{
										while(b.playAt(row,col, player1 ) != true){
											cout<<"\n\t\tCELL IS OCCUPIED!!!";
											cout <<"\n\t\t"
					   		     				 <<player1->getName()
					   		     				 <<", enter the row and column number."
					   		    				 <<"\n\t\t==> Row: ";
					   						//input validation for row num
					   						while(!(cin>> row && row>=0 && row<9)){
					   							//explain the error
					   							cout<<"\t\tEnter a valid row digit (0-8) : ";
					   							cin.clear();  //clear the previous input
					   							cin.ignore(123, '\n');	// discard prwevious input
					   						}
					   						//input validation for column num
					   						cout<<"\t\t==> Column: ";
					   						while(!(cin>> col && col>=0 && col<9)){
					   							//explain the error
					   							cout<<"\t\tEnter a valid column digit (0-8) : ";
					   							cin.clear();		//clear the previous input
					   							cin.ignore(123, '\n'); // discard prwevious input
					   						 }
										   }//while
									     } // else preoccupuied conditon 
									     blackStones++;
						   		      }//player 1 turn
                          
                          
							         //input from player 2
				   			         else if(i%2 ==0){
							 	   		cout <<"\n\t\t"
					   		     			 <<player2->getName()
					   		     			 <<", enter the row and column number."
					   		    	 		 <<"\n\t\t==> Row: ";
					   					//input validation for row num
					   					while(!(cin>> row && row>=0 && row<9)){
					   						//explain the error
					   						cout<<"\t\tEnter a valid row digit (0-8) : ";
					   						cin.clear();		//clear the previous input
					   						cin.ignore(123, '\n');		// discard prwevious input
					   					}
					   					//input validation for column num
					   					cout<<"\t\t==> Column: ";
					   					while(!(cin>> col && col>=0 && col<9)){
					   						//explain the error
					   						cout<<"\t\tEnter a valid column digit (0-8) : ";
					   						cin.clear(); 	//clear the previous input
					   						cin.ignore(123, '\n');		// discard previous input
					   					}
							
					   					if(b.playAt(row,col, player2))
											p.displayBoard(b, player2);
							  			 //if cell is occupied
										else{
											while(b.playAt(row,col, player2 ) != true){
												cout<<"\n\t\tCELL IS OCCUPIED!!!";
												cout <<"\n\t\t"
					   		     		 			 <<player2->getName()
					   		     		 			 <<", enter the row and column number."
					   		     			 		 <<"\n\t\t==> Row: ";
					   							//input validation for row num
					   							while(!(cin>> row && row>=0 && row<9)){
					   								//explain the error
					   								cout<<"\t\tEnter a valid row digit (0-8) : ";
					   								cin.clear();		//clear the previous input
					   								cin.ignore(123, '\n');// discard prwevious input
					   							}
					   							//input validation for column num
					   							cout<<"\t\t==> Column: ";
					   							while(!(cin>>col && col>=0 && col<9)){
					   							//explain the error
					   							cout<<"\t\tEnter a valid column digit (0-8) : ";
					   							cin.clear();		//clear the previous input
					   							cin.ignore(123, '\n');// discard prwevious input
					   							}
											}//while
										}//else of occupied condiotn
										whiteStones++;
						 			  } //player2 turn
									  cout<<endl<<endl;	
									  i++;			
									} //case1 while
									break;
            
					case 2: //Remove stone
					{
			  		  cout <<"\n\t\t"
						   <<"Enter the row and column number to remove the stone"
						   <<"\n\t\t==> Row: ";
							//input validation for row num
							while(!(cin>> row && row>=0 && row<9)){
								//explain the error
								 cout<<"\t\tEnter a valid row digit (0-8) : ";
								 cin.clear();		//clear the previous input
								 cin.ignore(123, '\n');		// discard prwevious input
							}
							//input validation for column num
							cout<<"\t\t==> Column: ";
						    while(!(cin>> col && col>=0 && col<9)){
								//explain the error
								cout<<"\t\tEnter a valid column digit (0-8) : ";
								cin.clear(); 	//clear the previous input
								cin.ignore(123, '\n');		// discard previous input
			    			}
				   
							//check if cell contains any stone
							/*if(b.isCellOccupied(row,col))
							{
								if(player1 == b.removeStone(row,col))
									bCap++;
								else
									wCap++;
							}
							else
							{*/
								while(b.isCellOccupied(row,col) != true){
										cout<<"\n\t\tCELL IS EMPTY!!!";
										cout <<"\n\t\t"
					  					   	 <<"Enter the row and column number."
					   						 <<"\n\t\t==> Row: ";
					   			  	  //input validation for row num
					   				  while(!(cin>> row && row>=0 && row<9)){
					   					//explain the error
					   					cout<<"\t\tEnter a valid row digit (0-8) : ";
					   					cin.clear();		//clear the previous input
					   					cin.ignore(123, '\n');		// discard prwevious input
					   	   			  }
					   			      //input validation for column num
					   				  cout<<"\t\t==> Column: ";
					   	 			  while(!(cin>>col && col>=0 && col<9)){
					   				  //explain the error
					   				  cout<<"\t\tEnter a valid column digit (0-8) : ";
					   				  cin.clear();		//clear the previous input
					   			   	  cin.ignore(123, '\n');		// discard prwevious input
					   	 			}
				     			 }
				     			 
				     		  if(player1 == b.removeStone(row,col))
									bCap++;
								else
									wCap++; 
				 			  //}//else	
						  }//case2 		
						  break;
			
			case 3: //pass over case
			{   
				system("CLS"); //to clear the screen for windows
				system("clear");  //fr replit nd linux
				
				//top display
					cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
					cout<<"\t\t|\t\t    GAME OVER \t\t\t|";
       				cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
					cout<<"\t\t|  PLAYER 1\t\t|  PLAYER 2\t\t|"<<endl;
					cout<<"\t\t|  Black Stones [o]:"<<blackStones<<"\t|  White Stones [x]:"
						<<whiteStones<<"\t|"<<endl;
					cout<<"\t\t|  Stones Captured:"<<bCap<<"\t|  Stones Captured:"
						<<wCap<<"\t|"<<endl;
					cout<<"\t\t+-----------------------|-----------------------+"<<endl<<endl;
				    
				//declaring the winner
				if(bCap < wCap)
				{
					//printing the winner
			   		cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
			   		cout<<"\t\t|\t\tWINNER : "<<player1->getName()<<" \t\t|";
       		   		cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
				}
				
				else if(bCap == wCap){
					if(blackStones > whiteStones){
						//printing the winner
				   		cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
				   		cout<<"\t\t|\t\tWINNER : "<<player1->getName()<<" \t\t|";
		   		   		cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
		   		   	}
		   		   	
					else if (blackStones < whiteStones){
						//printing the winner
				   		cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
				   		cout<<"\t\t|\t\tWINNER : "<<player1->getName()<<" \t\t|";
		   		   		cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
		   		   	}
		   		   	
					else{
						//printing the winner
				   		cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
				   		cout<<"\t\t|\t\t\tDRAW  \t\t\t|";
		   		   		cout<<"\n\t\t+-----------------------|-----------------------+"<<endl;
		   		   	}
				}  
				
				else
					cout<<"\n\t\tWINNER : "<<player2->getName();
			   
			   
			    cout<<"\n\t\t";
            }break;
		 }// inner switch
	  }//do
	  while(choice!=3);
	} //start case
    break;
	
	//exit case 	
	case 'E': case'e': 
				 cout<<"\t\t==> Exited game\n\n";exit(0);
				      
   }//outer switch
 }while(ch=='E' || ch=='e');
return 0;
}