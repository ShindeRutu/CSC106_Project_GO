package csc_GoGame_2115_2128.com;

/* class :  Place 
 * description : to set the position of the stone on the board 
 */

public class Placement {

	// variables
	private Stone stonePos;
	private int xPos;  // x coordinate
	private int yPos;  // y coordinate
	
	
	// getter nd setter fr private variables
	public Stone getStonePos() {
		return stonePos;
	}

	public void setStonePos(Stone stonePos) {
		this.stonePos = stonePos;
	}

	public int getxPos() {
		return xPos;
	}

	public void setxPos(int xPos) {
		this.xPos = xPos;
	}

	public int getyPos() {
		return yPos;
	}

	public void setyPos(int yPos) {
		this.yPos = yPos;
	}
	
	// constructor
	public Placement(Stone stonePos, int xPos, int yPos) {
		this.stonePos = stonePos;
		this.xPos = xPos;
		this.yPos = yPos;
	}// end of constructor

}//end of class
