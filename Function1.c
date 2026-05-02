#include<stdio.h>
int Addition(int no1,int no2)
{
    int Result=0;
    Result=no1+no2;
    return Result;
}
int main(){
    int i=0,j=0,add=0;
    printf("Enter First Number: ");
    scanf("%d",&i);
    printf("Enter Second Number: ");
    scanf("%d",&j);
    add=Addition(i,j);
    printf("Addition is : %d",add);
    return 0; 
} 