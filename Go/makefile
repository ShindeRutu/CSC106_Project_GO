go: main.o Printer.o Board.o
	g++ -o go main.o Printer.o Board.o
main.o: main.o
	g++ -c main.cpp
Printer.o: Printer.o
	g++ -c Printer.cpp
Board.o: Board.o
	g++ -c Board.cpp

clean:
	rm *.o go