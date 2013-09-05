
#include <stdio.h>
#include "test.h"
#include "city.h"
//改变作用域不改变生命周期
static int a;

int main(void)
{
   //改变生命周期不变作用域
   static int c=300;
   printf("%s %d\n",__func__,SIZE);

   printf("%s &va:%p\n",__func__,&value);
   printf("%s city:%s\n",__func__,city[33]);

   int ret,a=10,b=20;
   ret=add(a,b);
   printf("add:%d\n",ret);
   ret=sub(a,b);
   printf("sub:%d\n",ret);

   ret=sum(a,b);
   printf("sum:%d\n",ret);

   ret=div(a,b);
   printf("div:%d\n",ret);

   return 0;
}
