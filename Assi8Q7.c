#include<stdio.h>
int fun()
{
    int i =10;
    int j = 20;
    int ret =0;
    ret =i+j;
    return ret;
}
int main()
{
    printf("Inside main");
    fun();
    return 0;
}