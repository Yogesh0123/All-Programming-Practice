#include<iostream>
using namespace std;

int main()
{
    int Size =0;
    float *Marks=NULL;
    int i=0;

    cout<<"Enter number of elements :\n"<<endl;
    cin>>Size;
    //Dynamic memory allocation
    Marks = new float [Size];

    cout<<"Enter Your marks: \n";

    //Iteration
    //   1   2   3
    for(i=0;i<Size;i++)
    {
     cin>>Marks[i]; //4
    }

    cout<<"Entered marks are:\n ";
    //   1   2   3
    for(i=0;i<Size;i++)
    {
     cout<<Marks[i]<<"\n";//4 
    }
     delete [] Marks;
    return 0;
}
//DynamicMemory.cpp