#include <iostream>

using namespace std;

#include "Fraccion.h"

int main(){
  Fraccion fa, fb;
  fa = fraccion(1, 8);
  fb = fraccion(1, 8);
  fa = sumar(fa, fb);
  simplificar(fa);
  if (numerador(fa) == 1 && denominador(fa) == 4) cout << "ok sumar" << endl;
  else 
    cout << "wrong " << numerador(fa) << "/" << denominador(fa) << endl;
  fa = fraccion(1, 2);
  fb = fraccion(1, 8);
  fa = restar(fa, fb);
  simplificar(fa);
  if (numerador(fa) == 3 && denominador(fa) == 8) cout << "ok restar" << endl;
  else 
    cout << "wrong " << numerador(fa) << "/" << denominador(fa) << endl;
  fa = fraccion(2, 4);
  fb = fraccion(3, 6);
  fa = multiplicar( fb, fa);
  simplificar(fa);
  if (numerador(fa) == 1 && denominador(fa) == 4) cout << "ok multiplicar" << endl;
  else 
    cout << "wrong " << numerador(fa) << "/" << denominador(fa) << endl;
  fa = fraccion(1, 8);
  fb = fraccion(1, 2);
  fa = dividir( fa, fb);
  simplificar(fa);
  if (numerador(fa) == 1 && denominador(fa) == 4) cout << "ok dividir" << endl;
  else 
    cout << "wrong " << numerador(fa) << "/" << denominador(fa) << endl;
  invertir(fa);
  if (numerador(fa) == 4 && denominador(fa) == 1) cout << "ok invertir" << endl;
  else 
    cout << "wrong " << numerador(fa) << "/" << denominador(fa) << endl;
  // cout << numerador(fa) << "/" << denominador(fa) << " - " << denominador(fa) % numerador(fa) << endl;
  destruir(fa);
  destruir(fb);
}
