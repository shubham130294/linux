#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

int main()
{
/* FD :File Descriptor  */
int FD;

FD = open("IMAGE.jpg",O_RDONLY);

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

