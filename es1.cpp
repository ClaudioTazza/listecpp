//Di Claudio Tazza
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

struct lista{
  int x;
  lista* next;
};

int somma_lista(lista* p){
  if(p == NULL) return 0;
  else return (*p).x + somma_lista((*p).next);
}

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

lista* crea_lista_random(int n){
  if(n <= 0) return NULL;
  else{
    lista* p = new lista;
    //il puntatore a lista del nodo, crea e punta ad un nuovo nodo

    (*p).x = rand() % 100;
    //inserisce un numero random nella x del nuovo nodo

    (*p).next = crea_lista_random(n-1);
    //chiamata ricorsiva
    return p;
  }
}

int close_by_media(lista* p, int media){
  if(p == NULL) return 0;

  int candidated, tmp, val_to_beat;
  candidated = (*p).x;
  //si ipotizza che il numero piu' vicino alla media sia il primo
  //valore della lista

  val_to_beat = fabs( (*p).x - media );
  //calcoliamo quanto sia vicino al valore della media
  //usando questo valore per controllare se un elemento 
  //della lista sia piu' o meno vicino alla media
  
  while( (*p).next != NULL ){
    tmp = fabs( (*((*p).next)).x - media );
    //calcoliamo la distanza tra la media e 
    //il val successivo della lista
   
    if (val_to_beat > tmp ){ 
      candidated = (*((*p).next)).x;
      val_to_beat = tmp;
    }//se il valore del secondo valore si avvicina di piu' 
     //alla lista del prima, il nuovo candidato sara' 
     //quest'ultimo e ci sara un nuovo valore come metro di
     //misura

    p = (*p).next;
    //adesso p punta al nodo successivo  
  }

  return candidated;
}


int main(){
  int long_list, media, elem_media, somma_elem_lista;

  cout << "istruzione inutile, forse dannosa" << endl;
  
  srand( time(NULL) );
  //inizializza rand per la funzione crea_lista_random()

  lista* p;
  //la nostra lista  

  cout << "Inserire il numero di elementi voluto nella lista." << endl;
  cin >> long_list;

  p = crea_lista_random(long_list);
  somma_elem_lista = somma_lista(p);

  media = somma_elem_lista/long_list;
  elem_media = close_by_media(p, media);

  cout << endl;

  cout << "Lista:" << endl;
  stampa_lista(p);

  cout << "Media: " << media << endl;
  cout << "Somma elem lista : "<< somma_elem_lista << endl; 
  cout << "Elemento piu' vicino ad essa: " << elem_media << endl;

  return 0;
}




