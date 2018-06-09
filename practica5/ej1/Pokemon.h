#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
using namespace std;

struct PokemonSt{
  string name;
  int life;
};
typedef PokemonSt* Pokemon;

void printP(Pokemon);
Pokemon crearPokemon(string nombre, int vida);
string getNombre(Pokemon p);
int getVida(Pokemon p);
void cambiarNombre(Pokemon& p, string nombre);
bool estaVivo(Pokemon p);
void restarVida(Pokemon& p); // resta una unidad a la vida
void lucharN(int n, Pokemon& p, Pokemon& r); // resta vida n a los dos pokemones. Pensar una solucion que sea O(n) y otra que sea O(1)
void destruir(Pokemon&);
#endif
