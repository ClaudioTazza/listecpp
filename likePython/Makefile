CXX=g++
CXXFLAGS=-Wall -ansi -pedantic

main: main.o lista.o nodo.o
	$(CXX) $^ -o $@

lista.o: lista.cpp lista.h nodo.h
nodo.o: nodo.cpp nodo.h
main.o: main.cpp nodo.h

.PHONY: clean
clean:
	rm -f *.o main
