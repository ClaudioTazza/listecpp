#include "lista.h"
#include <cstddef>
#include <iostream>

lista::lista(){
 head = NULL;
}

void lista::setPrimoNodo(nodo* primo){
  head = primo;
}

void lista::stampa(){
  if(head == NULL);

  else{
    std::cout << (*head).getNum();
  }
}

