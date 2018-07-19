#include <iostream>
using namespace std;

#include "nodo.hpp"
#include <cstddef>

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


void nodo::append(int Num){
  if(this->getNext() == NULL){
    this->setNext(new nodo(Num));
  }//Se il nodo e' l'ultimo ne attacca uno nuovo con Num

  else{
    (*this->getNext()).append(Num);
  }//Altrimenti passa al prossimo

}

void nodo::stampa(){
  if(this->getNext() == NULL){
    cout << this->getNum() << endl;
  }//Se il nodo e' l'ultimo nodo, lo stampa e si ferma

  else{
    cout << this->getNum() << endl;	//Stampa il nodo attuale
    (*this->getNext()).stampa();	//Stampa il prossimo nodo e i restanti
  }
}
