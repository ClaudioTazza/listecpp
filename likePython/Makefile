CXX=g++
CXXFLAGS=-Wall -ansi -pedantic

main: main.o nodo.o
	$(CXX) $^ -o $@

nodo.o: nodo.cpp nodo.h
main.o: main.cpp nodo.h

.PHONY: clean
clean:
	rm -f *.o main
