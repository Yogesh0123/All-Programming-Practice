#include<stdio.h>
#pragma pack(1)
struct Demo // declaration
{
    int i; //4
    char ch;//1
    float f; //4
}; //total size 8 byte

int main(){
   struct Demo dobj;
   printf("%d\n",sizeof(dobj));// output 9
    return 0;
}