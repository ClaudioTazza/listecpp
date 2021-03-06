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

lista* crea_lista_input(lista * p){ 
  int val;
  cin >> val;

  if(val == 0) return NULL;
  else{
    p = new lista;
    (*p).x = val;
    (*p).next = crea_lista_input( (*p).next );
    return p;
  }
}

lista * rimuovi_n_lista(lista* p, int n){
  lista * head = p;
  //Segna l'inizio della lista
  if(p == NULL) return NULL;
  
  else{ 
    if( ( ((*p).x % n) == 0 ) && ((*p).x != n)){
      lista * tmp;
      tmp = p;
      p = (*p).next;
      delete tmp;
      return rimuovi_n_lista(p,n);
    }//Elimina il nodo della lista se il val e' multiplo di n
 
    else{
      (*p).next = rimuovi_n_lista((*p).next, n);
      return head;
    }//Se il val va bene il nodo non viene toccato 
     //e next e' uguale al resto della lista senza i nodi non voluti
  }    
}

lista * crivello_di_era(lista * p){
  lista * head = p;
  if(p == NULL) return NULL;

  else{
    if((*p).x >=2){
      p = rimuovi_n_lista(p, (*p).x);//rimuovi_n_lista modificata
      p = crivello_di_era((*p).next);
      return head;
    }
    else p = crivello_di_era((*p).next);

  }
}

int main(){
  lista* p;
  //la nostra lista  

  cout << "inserire i valori per la lista (0 per concludere)." << endl;
  p = crea_lista_input(p);

  p = crivello_di_era(p);

  cout << "\nLista:" << endl;
  stampa_lista(p);

  return 0;
}




