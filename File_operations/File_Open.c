/*
int open(const char *pathname, int flags);
Return type : FD or -1 
Argument1 : File path
Argument2 :O_RDONLY ,O_WRONLY,O_RDWR
*/

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

