#include<stdio.h>

struct hello
{
    float f;//4 byte
    int arr[3]; // 12 byte
}hobj; // total 16 byte 




int main(){

    printf("size of object is: %lu\n",sizeof(hobj));
   
   
    return 0;
}// StructureArray.c