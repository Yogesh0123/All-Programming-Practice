//PraticeArray2.c

#include<stdio.h>
int main(){
    int arr[5]={12,45,7,34,89};
    int i ,max;
    max=arr[0];
    for ( i = 1; i < 5; i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    printf("max=%d",max);
    
}