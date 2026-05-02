//if-else.c

#include<stdio.h>
int main(){
    int no=0;
    printf("Enter number: ");
    scanf("%d",&no);
    if (no%2==0)
    {
        printf("Its even number ");
    }else
    {
        printf("Its odd number");
    }
    return 0;
}