#include "Fraccion.h"

struct FNode {
  int numerador;
  int denominador;
};

Fraccion fraccion(int x, int y){
  Fraccion f = new FNode;
  f->numerador = x;
  f->denominador = y;
  return f;
}

Fraccion sumar(Fraccion f1, Fraccion f2){
  Fraccion f = new FNode;
  f->denominador = f1->denominador * f2->denominador;
  f->numerador = f1->denominador * f2->numerador + f2->denominador * f1->numerador;
  return f;
}

Fraccion restar(Fraccion f1, Fraccion f2){
  Fraccion f = new FNode;
  f->denominador = f1->denominador * f2->denominador;
  f->numerador =  f2->denominador * f1->numerador - f1->denominador * f2->numerador;
  return f;
}

Fraccion multiplicar(Fraccion f1, Fraccion f2){
  Fraccion f = new FNode;
  f->denominador = f1->denominador * f2->denominador;
  f->numerador = f1->numerador * f2->numerador;
  return f;
}

Fraccion dividir(Fraccion f1, Fraccion f2){
  Fraccion f = new FNode;
  f->denominador = f1->denominador * f2->numerador;
  f->numerador = f1->numerador * f2->denominador;
  return f;
}

void invertir(Fraccion& f1){ // Invierte numerador y denominador
  int t = f1->numerador;
  f1->numerador = f1->denominador;
  f1->denominador = t;
}

// enorme porqueria de simplificador
void simplificar(Fraccion& f1){
  int d = 9;
  while ( d > 1) {
    if ((f1->denominador % d) == 0 && (f1->numerador % d) == 0){
      f1->numerador /= d;
      f1->denominador /= d;
    } else 
    d--;
  }
}

void destruir(Fraccion& f1){
  delete f1;
}

int numerador(Fraccion& f){
  return f->numerador;
}

int denominador(Fraccion& f){
  return f->denominador;
}
