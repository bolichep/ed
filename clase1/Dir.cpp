#include "Dir.h"

int abs(int x){
  int a;
  if (x > 0) { a = x; }
  else { a = -x; }
  return a;
}

Dir norte(){ return 0;}
Dir este() { return 1;}
Dir sur()  { return 2;}
Dir oeste(){ return 3;}

Dir siguiente(Dir d){
  return (d + 1) % 4;
}

Dir previo(Dir d){
  return (d + 3) % 4;
}
