#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
/*
int open(const char *pathname, int flags, mode_t mode );
Return type : FD or -1 
Argument1 : File path
Argument2 :O_RDONLY ,O_WRONLY,O_RDWR |O_CREAT
Argument3 : S_IRWXU  00700 user (file owner) has read, write, and execute permission   
            S_IRUSR  00400 user has read permission
            S_IWUSR  00200 user has write permission
            S_IXUSR  00100 user has execute permission

            S_IRWXG  00070 group has read, write, and execute permission
 			S_IRGRP  00040 group has read permission
			S_IWGRP  00020 group has write permission
			S_IXGRP  00010 group has execute permission

            S_IRWXO  00007 others have read, write, and execute permission
			S_IROTH  00004 others have read permission
			S_IWOTH  00002 others have write permission
			S_IXOTH  00001 others have execute permission

On command line you can change the permission of files via : "chmod 743 filename" and view via "ls -al"
*/

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

