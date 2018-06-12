#include <iostream>

using namespace std;

#include "Tablero.h"
#include "Coordenada.h"
#include "Dir.h"

int main(){
  Dir header;

  header = este();
  cout << siguiente(norte()) << endl << previo(norte()) << endl;
  cout << siguiente(sur()) << endl << previo(sur()) << endl;

  return 0;
}
