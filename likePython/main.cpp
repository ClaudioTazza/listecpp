#include <iostream>
using std::cout;
using std::endl;

#include "nodo.h"

int main() {
  nodo prova(5);			//Crea il nodo prova inserendovi 5
  nodo prossimo(2);			//Crea un secondo nodo con invece 2

  prova.setNext(&prossimo);		//Inserisce nel valore next di prova
					//l'indizzo del noto 'prossimo'

  cout << (*prova.getNext()).getNum() << endl;
  //Stampa il num presente nel nodo il quale indirizzo si trova nella variabile
  // 'next' di prova (Sembra complicato ma capito questo il resto dovrebbe essere
  // un po' piu' banale)


  return 0;
}
