/*
    Authors : 1) Dinesh Gawas
              2) Rutu Shinde
    Program for : GO Game
    Date created :  November 2021 
*/

#ifndef CELL_H
#define CELL_H

class Board{
    friend class Printer;
public:

    Board(int size);
    ~Board();

    bool    playAt        (const int row, const int col, Player* p);
    Player* removeStone   (const int row, const int col);
    int     countStonesFor(const Player* p);

    bool isCellOccupied   (const int row, const int col);
    bool isCellOwnedBy    (const int row, const int col, const Player* p);
    bool isEmpty          ()const;
    bool isFull           ()const;

    int getSize           ()const;


private:
    int size;
    std::vector< std::vector<Cell> > table;
    int occupiedCells;

    Cell& getCell(const int row,const int col);
};

#endif