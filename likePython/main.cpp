#include <iostream>
using std::cout;
using std::endl;

#include <stdlib.h>
#include <time.h>
#include "nodo.hpp"

int main() {
  srand(time(NULL));

  nodo* lista = new nodo(30);

  for(int i = 0; i < 10; i++)
    (*lista).append(rand() % 10);


  (*lista).stampa();

  return 0;
}
