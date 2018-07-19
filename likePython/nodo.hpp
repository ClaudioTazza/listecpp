#ifndef NODO_HPP
#define NODO_HPP

class nodo{
private:
  int num;
  nodo* next;

public:
  nodo(int);

  void setNum(int);
  void setNext(nodo*);
  int getNum();
  nodo* getNext();
  void append(int);
  void stampa();
};

#endif
