#include "Coordenada.h"


Coordenada nuevaCoordenada(int x, int y){
  Coordenada c;
  c.x = x;
  c.y = y;
  return c;
}

Coordenada desplazar(Coordenada c, Dir d){
  Coordenada desp = c;
  if (d == norte()) desp.y++;
  if (d == sur()) desp.y--;
  if (d == este()) desp.x++;
  if (d == oeste()) desp.x--;
}

int distanciaM(Coordenada c1, Coordenada c2){
  return abs(c1.x - c2.x) - abs(c1.y - c2.y);
}

