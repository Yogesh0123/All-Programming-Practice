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
   struct Demo *ptr =NULL;

   ptr = &dobj;

   ptr->i =11;
   ptr->ch='A';
   ptr->f=10.0f;

   printf("%d\n",ptr->i);
   printf("%c\n",ptr->ch);
   printf("%f\n",ptr->f);
   
    return 0;
}// StructureDirect