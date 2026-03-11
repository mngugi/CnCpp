
#include <stdio.h>
#include <stdlib.h>

typedef struct Counter{

    int value;
    } Counter;

 Counter* Counter_new(int initial){
     Counter *c = malloc(sizeof(Counter));
     if (c) c->value = initial;
     return c;

 }

 void Counter_add(Counter *c, int amount){
        if (c) c->value += amount;

 }


