all: main.o src.o
	g++ main.o src.o -o output.out

main.o: ./src/main.cpp
	g++ -I ./include -c ./src/main.cpp

src.o: ./src/src.cpp
	g++ -I ./include -c ./src/src.cpp

clean:
	rm *.o output.out
