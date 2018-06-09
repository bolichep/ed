#include <iostream>

using namespace std;

#include "DestructiveLinkedLists.h"

int sumar(List xs){
  int ret = 0;
  while (not isNil(xs)){
    ret += head(xs);
    tkTail(xs);
  }
  return ret;
}  

int length(List xs){
  int l = 0;
  while (not isNil(xs)){
    l++;
    tkTail(xs);
  }
  return l;
}

void mapSucc(List& xs){
  cout << endl << "Como carajo!!!" << endl;
  List ws = Nil();
  while( not isNil(xs)){
    mkCons(head(xs)+1, ws);
    tkTail(xs);
  }
  xs = ws;
  cout << "Devuelvo la lista en el parametro!!!" << endl;
}

// prec n < len xs
void drop(int n, List& xs){
  while (n--) tkTail(xs);
}

// prec n =< len xs
void take(int n, List xs){
  List ws = Nil();
  for(;n > 0 ; n--){
    cout << n ;
    mkSnoc(ws, head(xs));
   // mkCons(head(xs), ws);
    tkTail(xs);
    cout << n ;
  }
  // while (not isNil(xs)) tkTail(xs); // avoid memory leak

}

int main(){
  List xs;
  xs = Nil();
  mkCons(1, xs);
  mkCons(2, xs);
  mkCons(3, xs);
  mkCons(4, xs);

  printList(xs);
  take(2, xs);
  printList(xs);
}
     
int main2 (){
  List xs = Nil();
  List cs, zs, ys, us;
  /*
  mkSnoc(xs, 10); mkSnoc(xs, 20); 
  mkSnoc(xs, 30); mkSnoc(xs, 17);
  */
  mkCons(10,xs);
  mkCons(20,xs);
  mkCons(30,xs);
  mkCons(17,xs);

  printList(xs); // nodestructivo
  cout << endl;

  cs = copiar(xs); // nodestructivo
  zs = copiar(xs); // nodestructivo
  ys = copiar(xs); // nodestructivo
  us = copiar(xs); // nodestructivo
  
  cout << "Sumar  : " << sumar(xs) << endl;
  cout << "Length : " << length(cs) << endl;
  mapSucc(zs); printList(zs); // nodestructivo
  cout << endl;
  drop(2, ys); printList(ys); // nodestructivo
  cout << endl;
  take(2, us); printList(us); // nodestructivo
  cout << endl;

  return 0;
}
