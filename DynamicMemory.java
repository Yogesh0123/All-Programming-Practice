import java.util.Scanner;

class DyanamicMemory
{
 public static void main(String[] args)
{
    Scanner sobj = new Scanner(System.in);
    int Size = 0;

    System.out.println("Enter Number Of Elements: ");
    Size = sobj.nextInt();

    //Dyanamic memory allocation
    float Marks[] = new float[Size];

    //Use the memory 

    Marks = null;
    System.gc();
 }
}