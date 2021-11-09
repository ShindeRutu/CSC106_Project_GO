package csc_GoGame_2115_2128.com;

// need further improv..
public class Board {

	final String alpha = "ABCDEFGHI" ;
	Integer boardSize =  9;    //board dm 9x9
	int i, j, row, col;
	
	//to print the board
	public void printBoard() {
		
		/* -------------------------------------------------
		 * to print the first line of alphabets 
		 * ----------------------------------------------------*/
		
		for(col=0; col < boardSize/10+2; col++)
			System.out.print(" ");
		for (col =0; col< boardSize; col++)
			System.out.print(" "+alpha.charAt(col));   // will display char at ith index
		System.out.print("\n");
	
		// to print +-------+
		for(i=0; i < boardSize/10+1; i++)   
			System.out.print(" ");
		System.out.print("+");   // prints "+" at the first pos 
		for (i =0; i< boardSize; i++)   //"boardSize*2" is adjusted as per display 
			System.out.print("--");  // prints --
		System.out.print("-+");   // prints "+" at the last pos 
	
	
		/* -------------------------------------------------------------------
		 * to print the coordinates intersection(.)
    	------------------------------------------------------------------------*/
	
		System.out.print("\n");  //to tke numbering on next line
		for(i=1 ; i<=boardSize; i++)
		{
			// to print the row number at left side
			for (row = 1; row < boardSize/11-i/11; row++) 
				System.out.print(" "); // to print trailing spaces
			System.out.print(i+"|");
	    
			for(j=0;j<boardSize; j++) 
				System.out.print(" .");
	    
			// to print the row number at right side
			System.out.println(" |" + i); 
			System.out.print("");
		}
	
		/* -------------------------------------------------------------------
		 * to print the last line of  "+--------------+" and the alphabets
    	-----------------------------------------------------------------------*/
		
		// to print + -------+
		for(i=0; i < boardSize/10+1; i++)   
			System.out.print(" ");
		System.out.print("+");   // prints "+" at the first pos 
		for (i =0; i< boardSize*2; i++)   //"boardSize*2" is adjusted as per display 
			System.out.print("-");  // prints --
		System.out.print("-+");   // prints "+" at the last pos 
	
		System.out.print("\n");  
		//to print the alpha bottom line
		for(i=0; i < boardSize/10+2; i++)
			System.out.print(" ");
		for (i =0; i< boardSize; i++)
			System.out.print(" "+alpha.charAt(i));   // will display char at ith index
		System.out.print("\n");
    
	}//end of printBoard
    
}//end of class
