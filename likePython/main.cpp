#include <iostream>
using std::cout;
using std::endl;

#include "lista.h"

int main() {
  lista prova;
  nodo provaN(5);

  prova.setPrimoNodo(&provaN);

  prova.stampa();

  return 0;
}
