#include "lista.h"
#include "nodo.h"

lista::lista(){
  head = new nodo;
}

void append(int num){
  nodo* p = getLastNode(head);
  p.next = new nodo;
  (* p.next).num = num;

}

nodo* getLastNode(nodo* head){
 if(head.next == NULL)
    return head;

 else
   return getLastNode(head.next);
}
