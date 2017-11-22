//Di Claudio Tazza
#include <iostream>

using namespace std;

struct lista{
  int x;
  lista* next;
};

void stampa_lista(lista* p){
  if (p == NULL);
  //se il puntatore è vuoto vuol dire che la lista e' vuota o inesistente
  else{
    cout << (*p).x << endl ;
    //stampa il valore del nodo
    stampa_lista((*p).next);
    //stampa il resto della lista con una chiamata ricorsiva
  }
 
}

void crea_lista_input(lista ** p){
 
  int val;
  cin >> val;

  if(val == 0) *p == NULL;
  else{
    *p = new lista;
    (*p)->x = val;
    crea_lista_input(&( (*p)->next) );
  }
}

int main(){
  int  elem_media, somma_elem_lista;

  lista* p;
  //la nostra lista  

  cout << "inserire i valori per la lista (0 per concludere)." << endl;
  crea_lista_input(&p);

  cout << "Lista:" << endl;
  stampa_lista(p);

  return 0;
}




