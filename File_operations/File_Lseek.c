/*
off_t lseek(int fd, off_t offset, int whence)
Return Type : Upon successful completion, lseek() returns the resulting offset
       location as measured in bytes from the beginning of the file.  On
       error, the value (off_t) -1 is returned and errno is set to
       indicate the error.

Argument1 : Opened FD on which position of cursor has to be operated
Argument2 : Offset 
Argument3 : Whence :
    SEEK_SET :The file offset is set to offset bytes.
    SEEK_CUR : The file offset is set to its current location plus offset bytes.
    SEEK_END :The file offset is set to the size of the file plus offset bytes.

*/

#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main(int argc, char *argv[])
{
int FD , cs[3];
FD = open("WriteFile.txt",O_RDONLY);
cs[0] = lseek(FD,0,SEEK_SET);
printf("Cursor_location_0 : %d \n",cs[0]);
cs[1] = lseek(FD,2,SEEK_CUR);
printf("Cursor_location_1 : %d \n",cs[1]);
cs[2] = lseek(FD,0,SEEK_END);
printf("Cursor_location_2 : %d \n",cs[2]);
return 0;
}