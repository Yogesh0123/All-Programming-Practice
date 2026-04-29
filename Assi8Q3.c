//Detect the problems in bellow program. 
#include<stdio.h>
extern int i;
extern int j;//not defined any where.
extern int x;//not defined any where.
extern int y=151;// extern is only fo declaration.You cannot initialize a variable using extern .
void gun();
int main()
{
    printf("Inside main");
    fun(); // Fun in called inside main() but there is no defination of fun() is the program.
    gun();
    return 0;
}
int i=21;
void gun()
{
    printf("Inside gun");
}
