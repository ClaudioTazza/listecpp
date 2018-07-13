#include "nodo.h"

nodo::nodo(int n){
  setNum(n);
  setNext(NULL);
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


