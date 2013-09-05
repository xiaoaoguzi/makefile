
#include "test.h"

int value;

int add(int a,int b){
   printf("%s &va:%p\n",__func__,&value);
   return a+b;
}
