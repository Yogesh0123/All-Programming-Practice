#include<stdio.h>
struct Demo // declaration
{
    int i; //4
    char ch;//1
    float f; //4
}; //total size 8 byte

int main(){
   struct Demo dobj;
   printf("%d\n",sizeof(dobj));// output 12
    return 0;
}