#include "lista.h"
#include <cstddef>

lista::lista(){
 head = NULL;
}

void lista::setPrimoNodo(nodo* primo){
  head = primo;
}

void lista::stampa(){
  if(head == NULL);

  else{
    cout << *head.getNum() << endl;
  }
}

