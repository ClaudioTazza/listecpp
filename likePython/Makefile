CXX=g++
CXXFLAGS=-Wall -ansi -pedantic

main: main.o lista.o nodo.o
	$(CXX) $^ -o $@

lista.o: Lista/lista.cpp Lista/lista.h Nodo/nodo.h
nodo.o: Nodo/nodo.cpp Nodo/nodo.h
main.o: main.cpp

.PHONY: clean
clean:
	rm -f *.o main
