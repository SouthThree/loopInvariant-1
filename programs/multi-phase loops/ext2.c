#include "assert.h"
void foo(){
int x, y, z;
x=0;y=0;z=0;
while (x<100) {
       if(x<=50)
               y=y+1;
       else
               y=y-1;
       
       if(x<25)
               z=z+1;
       else
               z=z+5;
       
       x=x+1;
}
assert(z==400);
assert(y==2);
assert(x==100);
}