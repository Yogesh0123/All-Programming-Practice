//PraticeArray1.c
#include<stdio.h>
int main(){
    int arr[5] = {2,4,6,8,10};
    int i ,sum =0;
    for (i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum=%d",sum);
    return 0;
}