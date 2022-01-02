go: main.o Printer.o Board.o Winner.o
	g++ -o go main.o Printer.o Board.o Winner.o
main.o: main.cpp
	g++ -c main.cpp
Printer.o: Printer.cpp
	g++ -c Printer.cpp
Board.o: Board.cpp
	g++ -c Board.cpp
Winner.o: Winner.cpp
	g++ -c Winner.cpp

clean:
	rm *.o go