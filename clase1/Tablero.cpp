#include "Tablero.h"
#include "Coordenada.h"

Tablero nuevoT(int ancho, int alto){
  Tablero t;

  t.ancho = ancho;
  t.alto  = alto;
  t.cabezal = nuevaCoordenada(0, 0);

  return t;
}

