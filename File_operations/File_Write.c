/*
ssize_t write(int fd, void buf[.count], size_t count);
Return Type : Actual no. of bytes written to the File
Argument1 :Opened FD on which write has to be performed 
Argument2 : Buffer address from where the data has to be fetched 
Argument3 : No. of bytes to be fetched s

O_APPEND or O_TRUNC defines the position of writing cursor .

*/


#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>


int main()
{
char W_buffer[30] = {"Welcome to Linux"};
char buffer[100];

int FD ,sz,sz1;
FD = open("WriteFile.txt",O_RDWR |O_CREAT|O_APPEND ,S_IRWXU|S_IRWXG|S_IROTH);
/* Read the data from the file */
sz = read(FD,buffer,8);
printf("Bytes Read from the File : %d \n",sz);
for(int i = 0 ; i < (sz);i++)
{
printf("%c\n",buffer[i]);
}
printf("\n");

/* Write the data from the local buffer to the File  */
sz1 = write(FD,W_buffer,17);
printf("Bytes written via write sys call : %d \n",sz1);
printf("\n");

/* Second Read the data from the file */
/*This sectoin of code wont work ,since the cursor lies at the extreme end of the data in the file . */
sz = read(FD,buffer,25);
printf("Bytes Read after the write system call via read sys call : %d \n",sz);
printf("\n");
printf("Appended Data :\n");
for(int i = 0 ; i < (sz);i++)
{
printf("%c\n",buffer[i]);
}
return 0;
}
