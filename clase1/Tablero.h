#ifndef TABLERO_H
#define TABLERO_H

#include "Coordenada.h"

struct Tablero{
  int alto;
  int ancho;
  Coordenada cabezal;
};

Tablero nuevoT(int, int);

#endif

