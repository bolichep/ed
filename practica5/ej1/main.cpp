#include <iostream>

using namespace std;

#include "Pokemon.h"

int main(){
  Pokemon p, r;
  p = crearPokemon("alos", 20);
  r = crearPokemon("salt", 30);
  printP(p);
  printP(r);
  cambiarNombre(p, "flie");
  printP(p);
  lucharN(13, r, p);
  cout << "luchan" << endl;
  printP(p);
  printP(r);
  destruir(p);
  destruir(r);
 
  return 0;
}
