#ifndef LIST_H
#define LIST_H


struct LNode;
typedef LNode* List;

List emptyL();
List consL(int, List&);
int headL(List&);
List tailL(List&);

#endif
