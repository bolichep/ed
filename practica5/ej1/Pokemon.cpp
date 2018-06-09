#include "Pokemon.h"

//definir el tipo abstracto Pokemon como un numero entero que rrepresente la vida y un nombre.

Pokemon crearPokemon(string nombre, int vida){
  Pokemon p;
  
  p = new PokemonSt;
  p->name = nombre;
  p->life = vida;

  return p;
}

string getNombre(Pokemon p){
  return p->name;
}

int getVida(Pokemon p){
  return p->life;
}

void cambiarNombre(Pokemon& p, string nombre){
  p->name = nombre;
}

bool estaVivo(Pokemon p){
  return p->life > 0;
}

// Interno
//
void decLife(Pokemon p){
  p->life -= 1;
}

void restarVida(Pokemon& p){
  decLife(p);
}

// O(1)
void lucharN_(int n, Pokemon& p, Pokemon &r){
  p->life -= n;
  r->life -= n;
}

// O(n)
void lucharN(int n, Pokemon& p, Pokemon &r){
  while(n){
    decLife(p);
    decLife(r);
    n--;
  }
}

void printP(Pokemon p){
  cout << "Pokemon " << p << " { " << endl;
  cout << "  name: " << p->name << endl;
  cout << "  life: " << p->life << endl;
  cout << "}" << endl;
}

void destruir(Pokemon& p){
  delete p;
}

