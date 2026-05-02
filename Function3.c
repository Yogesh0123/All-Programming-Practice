#include<stdio.h>
void fun();
void gun();

int main()
{
    printf("Inside main");
    fun();
    printf("End of main");
    return 0;
}
void gun()
{
    printf("Inside gun");
}
void fun()
{
    printf("Inside fun");
    gun();
    printf("End of fun");
}