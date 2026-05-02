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
   dobj.i=11;
   dobj.ch='A';
   dobj.f=10.0f;

   printf("%d \n",dobj.i);// op 11
    printf("%c \n",dobj.ch);// op A
     printf("%f \n",dobj.f);// op 10.0f
   
    return 0;
}// StructureDirect