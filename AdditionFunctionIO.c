#include<stdio.h>
int Addition(int no1 ,int no2)
{
    int Ans=0;
    Ans = no1+no2;
    return Ans;
}

int main()
{
   int result = 0, A=0, B=0;
   printf("Enter First Number :  \n");
   scanf("%d",&A);
   printf("Enter Second Number :  \n");
   scanf("%d",&B);
   result =Addition(A,B);
  printf("Addition is:  %d \n\n",result);
   return 0;
}