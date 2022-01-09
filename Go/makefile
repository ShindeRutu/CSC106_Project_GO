go: main.o Printer.o Board.o GamePlay.o
	g++ -o go main.o Printer.o Board.o GamePlay.o
main.o: main.cpp
	g++ -c main.cpp
Printer.o: Printer.cpp
	g++ -c Printer.cpp
Board.o: Board.cpp
	g++ -c Board.cpp
GamePlay.o: GamePlay.cpp
	g++ -c GamePlay.cpp

clean:
	rm *.o go