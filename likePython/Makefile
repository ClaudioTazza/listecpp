CXX=g++
CXXFLAGS=-Wall -ansi -pedantic

main: main.o nodo.o
	$(CXX) $^ -o $@

nodo.o: nodo.cpp nodo.hpp
main.o: main.cpp nodo.hpp

.PHONY: clean
clean:
	rm -f *.o main
