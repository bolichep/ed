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
  List ws = Nil();
  while( not isNil(xs)){
    mkCons(head(xs)+1, ws);
    tkTail(xs);
  }
  xs = ws;
  cout << "Devuelvo la lista en el parametro por que es por referencia!!!" << endl;
}

void ver(List xs,int  n){
    cout << "*" << n << " " << xs;
}

// prec n < len xs
void drop(int n, List& xs){
  while (n--) tkTail(xs);
}

// prec n =< len xs
void take(int n, List& xs){
  List ws = Nil();
  for(;n > 0 ; n--){
    mkSnoc(ws, head(xs));
    // mkCons(head(xs), ws);
    tkTail(xs);
  }
  // while (not isNil(xs)) tkTail(xs); // avoid memory leak

}

int main(){
  List xs, ys;
  xs = Nil();
  ys = Nil();
  mkCons(1, xs);
  mkCons(2, xs);
  mkCons(3, xs);
  mkCons(4, xs);
  mkCons(5, xs);
  mkCons(6, xs);
  printList(xs);
<<<<<<< HEAD
  take(2, xs);
=======
  take(3, xs);
>>>>>>> 68b1c492ea5eb451d910a4471ea2a5d59fea5c4f
  printList(xs);

  mkSnoc(ys,1);
  mkSnoc(ys,2);
  mkSnoc(ys,3);
  mkSnoc(ys,4);
  cout << "$";
  printList(ys);

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
