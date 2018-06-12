#ifndef COORDENADA_H
#define COORDENADA_H
#include "Dir.h"

struct Coordenada{
  int x;
  int y;
};

Coordenada desplazar(Coordenada, Dir);
Coordenada nuevaCoordenada(int, int);
int distanciM(Coordenada, Coordenada);

#endif
