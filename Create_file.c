#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd =0;

    fd = creat("Marvellous.txt",0777);

    if (fd == -1)
    {
        printf("Enable to create file \n");
    }
    else
    {
        printf("File gets created with fd : %d \n",fd);
    }
    

    return 0;
}
//Create_file.c