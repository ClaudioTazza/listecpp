#include "lista.h"
#include <cstddef>
#include <iostream>

lista::lista(){
 head = NULL;
}

void lista::setPrimoNodo(nodo* primo){
  head = primo;
  (*head).setNext(NULL);
}

void lista::setHead(nodo* newHead){
  head = newHead;
}

void lista::append(int Num){
  if(head == NULL){
    nodo n(Num);
    this->setPrimoNodo(&n);
  }

  else {
    lista l;
    l.head = (*head).getNext();
    l.append(Num);
    (*head).setNext(l.head);
  }
}

void lista::stampa(){
  if(head == NULL);

  else{
    std::cout << (*head).getNum() <<  std::endl;

    lista p;
    p.head = (*head).getNext();

    p.stampa();
  }
}

