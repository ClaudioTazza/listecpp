#include "nodo.h"

nodo::nodo(int n){
  setNum(n);
}//Costruttore del nodo

void nodo::setNum(int n){
  num = n;
}//Setta il valore all'interno del nodo

void nodo::setNext(nodo* nextNodo){
  next = nextNodo;
}

int nodo::getNum(){
  return num;
}//Ritorna il numero presente nel nodo

nodo* nodo::getNext(){
  return next;
}//Ritorna il nodo successivo

nodo* nodo::getLastNodo(){
  if(this->getNext() == NULL)
    return &nodo;

  else this.next->getLastNodo();
}
