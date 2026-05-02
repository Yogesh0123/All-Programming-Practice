#include<stdio.h>

struct hello
{
    float f;//4 byte
    int arr[3]; // 12 byte
}hobj; // total 16 byte 




int main(){
  hobj.f=10.0f;
  hobj.arr[0]=11;
  hobj.arr[1]=21;
  hobj.arr[2]=31;
   
  printf("%f \n",hobj.f);
  printf("%d\t %d\t %d\n ",hobj.arr[0],hobj.arr[1],hobj.arr[2]);
   
    return 0;
}// StructureArrayX.c