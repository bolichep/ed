#include <iostream>
using namespace std;

#include "Duda.h"
struct DNode{
  int valor;
};

Duda crearD(int n){
  Duda d;

  d = new DNode;
  d->valor = n;
}

void printD(Duda d){
  cout << "Duda " << d << " " << &d << " {" << endl;
  cout << "  valor: " << d->valor << endl;
  cout << "}" << endl;
}

