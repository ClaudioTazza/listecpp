#include "nodo.h"

class lista{
private:
  nodo* head;			//Da head parte tutta la serie di nodi
				// che creeranno la nostra lista
public:
  lista();
  void setPrimoNodo(nodo*);
  void stampa();
};
