#include "List.h"
#include <iostream>
#include <cstdio>

struct LNode {
  int    item;
  LNode* next;
};

List emptyL(){ 
  List es;
  es = NULL;
  return es;
}

List consL(int e, List& es){
  List nl = new LNode;
  nl->item = e;
  nl->next = NULL;
  if (es == NULL){
    es = nl;
  } else {
    List start = es;
    while (es->next != NULL)
      es = es->next;
    es->next = nl;
    es = start;
  }
  return es;
}
    

int headL(List& es){
  return es->item;
}

List tailL(List& es){
  return es->next;
}

