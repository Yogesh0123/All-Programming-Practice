import java.util.Scanner;

class DyanamicMemory
{
 public static void main(String[] args)
{
    Scanner sobj = new Scanner(System.in);
    int Size = 0;
    int i =0 ;

    System.out.println("Enter Number Of Elements: ");
    Size = sobj.nextInt();

    //Dyanamic memory allocation
    float Marks[] = new float[Size];

    //Use the memory 
    System.out.println("Enter Your Marks");

    for(i=0; i<Size;i++)
    {
        Marks[i] = sobj.nextFloat();
    }

    System.out.println("Enter Marks are : ");

    for(i=0; i<Size;i++)
    {
       System.out.println(Marks[i]);
    }

    Marks = null;
    System.gc();
}
 }

 //DynamicMemoryIO.java