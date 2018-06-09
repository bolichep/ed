#include <iostream>

using namespace std;

#include "List.h"

// User functions
int sumar(List xs);
int length(List xs);
List mapSucc(List xs);
List take(int n, List xs);
List drop(int n, List xs);

int sumar(List xs){
  List p;
  int suma = 0;
  for (p = xs; p != NULL; p = tailL(p))
    suma = suma + headL(p);
  return suma;
}

int length(List xs){
  int largo= 0;
  for (; xs != NULL; largo++, xs = tailL(xs));
  return largo;
}

// suma uno a cada elemento
List mapSucc(List xs){
  List succ = emptyL();
  for (; xs != NULL; succ = consL(headL(xs)+1,succ), xs = tailL(xs));
  return succ;
}

// Dados un número n y una lista xs, devuelve una lista con los primeros n elementos de xs. Si xs posee menos de n elementos, se devuelve la lista completa.
List take(int n, List xs){
  List toma = emptyL();
  for(; xs != NULL and n != 0
      ; toma = consL( headL(xs), toma), xs = tailL(xs), n--);
  return toma;
}
// Dados un número n y una lista xs, devuelve una lista sin los primeros n elementos de lista recibida. Si la lista posee menos de n elementos, se devuelve una lista vacía.
List drop(int n, List xs){
  while ( xs != NULL and n != 0){
    xs = tailL(xs);
    n--;
  }
  return xs;
}

void printL(List xs){
  cout << "[";
  while (xs != emptyL()){
    cout << headL(xs) ;
    xs = tailL(xs);
    if (xs != emptyL()) cout << ",";
  }
  cout << "]";
}

int main(){
  List xs, start;
  xs = emptyL();

  xs = consL(1, xs);
  xs = consL(2, xs);
  xs = consL(3, xs);
  xs = consL(4, xs);
  xs = consL(5, xs);

  printL(xs); cout << endl;
  cout << "suma:  " << sumar(xs) << endl;
  cout << "largo: " << length(xs) << endl;
  cout << "mapSucc: "; printL(mapSucc(xs)); cout << endl;
  cout << "take 3: "; printL(take(3, xs)); cout << endl;
  cout << "drop 3: "; printL(drop(3, xs)); cout << endl;

  return 0;
}
