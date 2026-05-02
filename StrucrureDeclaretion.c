#include<stdio.h>
struct Demo // declaration
{
    int i; //4
    float f; //4
}; //total size 8 byte

int main(){
   struct Demo dobj;
   printf("%d\n",sizeof(dobj));// output 8
    return 0;
}