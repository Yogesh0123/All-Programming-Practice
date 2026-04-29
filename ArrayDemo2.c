#include<stdio.h>
int main()
{
    int arr[4]={10,20,30,40};
    int brr[]={10,20,30,40};
    int crr[4]; //member of member 

    crr[0]=10;
     crr[1]=20;
      crr[2]=30;
       crr[3]=40;

       printf("%d\n",arr[0]); //10
       printf("%d\n",brr[0]); //10
       printf("%d\n",crr[0]); //10
    return 0;
}