#include<stdio.h>

int main()
{
    char str[]="Ganesh";
    char *ptr = NULL;

    ptr = str; //100 address

    printf("%c\n",*ptr); //G
    ptr++; //101

    printf("%c\n",*ptr); // A
    ptr++; //102

    printf("%c\n",*ptr); // N
    ptr++; //103

    return 0;
}
//StringPointer.c