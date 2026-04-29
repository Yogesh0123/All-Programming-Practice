#include<stdio.h>
int main()
{
    double no=3.14;
    double *a=&no;
    double **b=&a;
    double ***c=&b;
    double ****d=&c;

    printf("%d \n",&no);
    printf("%d \n",a);
    printf("%d \n",&c);
    printf("%d \n",&d);
    printf("%d \n",d);
    printf("%d \n",**d);
    printf("%d \n",**c);
    printf("%d \n",*b); 

    return 0;

}