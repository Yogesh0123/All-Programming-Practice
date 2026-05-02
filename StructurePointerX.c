#include<stdio.h>

struct demo
{
  int i; //4
  int *ptr; //8
}; //12 

int main(){
  struct demo dobj;
  int no =21;

  dobj.i=11;
  dobj.ptr=&no;

  printf("%d\n",dobj.i); //11
  printf("%d\n",*(dobj.ptr)); //21
  
}// StructurePointerX.c