#include<stdio.h>

struct demo
{
  int i;
  float f;
};

int main(){
  struct demo arr[4];
  printf("Size of arr is : %lu \n",sizeof(arr));
  arr[0].i=11;
  arr[0].f=11.0f;

  arr[1].i=21;
  arr[1].f=21.0f;

  arr[2].i=31;
  arr[2].f=31.0f;

  arr[3].i=41;
  arr[3].f=41.0f;

  printf("%d \n",arr[2].i);//31
   printf("%d \n",arr[1].f);//21.0f
    return 0;
}// StructureObjectArray.c