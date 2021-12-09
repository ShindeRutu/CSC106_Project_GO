go: main.o Printer.o Board.o
	g++ -o go main.o Printer.o Board.o
main.o: main.cpp
	g++ -c main.cpp
Printer.o: Printer.cpp
	g++ -c Printer.cpp
Board.o: Board.cpp
	g++ -c Board.cpp

clean:
	rm *.o go