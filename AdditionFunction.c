#include<stdio.h>
int Addition(int no1 ,int no2)
{
    int Ans=0;
    Ans = no1+no2;
    return Ans;
}

int main()
{
   int result = 0;
   result =Addition(11,10);
   printf("Addition is : %d ",result);
   return 0;
}