#ifndef DIR_H
#define DIR_H

typedef int Dir;

int abs(int);
Dir norte();
Dir este();
Dir oeste();
Dir sur();
Dir siguiente(Dir);
Dir previo(Dir);

#endif
