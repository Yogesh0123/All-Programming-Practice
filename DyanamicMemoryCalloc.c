#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Size =0;
    float *Marks=NULL;
    int i=0;

    printf("Enter number of elements :\n");
    scanf("%d",&Size);

    //Dynamic memory allocation
    Marks =(float *) calloc(Size,sizeof(float));


    printf("Enter Your marks: \n");


    //Iteration
    //   1   2   3
    for(i=0;i<Size;i++)
    {
     scanf("%f",&Marks[i]); //4
    }

    free(Marks);
  
    printf("Entered marks are:\n ");
    //   1   2   3
    for(i=0;i<Size;i++)
    {
     printf("%f\n",Marks[i]);//4 
    }
  
    return 0;
}
//DyanamicMemoryCalloc.c