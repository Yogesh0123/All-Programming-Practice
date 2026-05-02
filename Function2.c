#include<stdio.h>
void fun();
void gun();

int main(){
    printf("Inside Main");
    fun();
    gun();
    return 0;
}
void gun()
{
    printf("Inside Gun");
}
void fun()
{
    printf("Inside Fun");
}