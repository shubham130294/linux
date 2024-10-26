#include <stdio.h>

#include <fcntl.h>
#include <errno.h>


int main()
{

int FD , FD1 ;

//FD = open("IMAGE.jpg",O_RDONLY|O_CREAT ,777);
FD = open("IMAGE.jpg",O_RDONLY|O_CREAT ,S_IRWXU|S_IRGRP|S_IWOTH);
if(FD == -1)
{
        printf("Error No :%d\n",errno);
        perror("ERROR : " );
}
else
{
        printf("File Present");

}

return 0;

}
