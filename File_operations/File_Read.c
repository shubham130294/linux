/*
ssize_t read(int fd, void buf[.count], size_t count);
Return Type : Actual no. of bytes read from the File
Argument1 :Opened FD 
Argument2 : Buffer address where the data has to be stored
Argument3 : No. of bytes to be fetched 
*/


#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
	int FD,sz;
	char Buffer[20];

	FD =open("Image.txt",O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IROTH);
        #ifdef P1
        /*P1 macro is used to demonstrate a program where all successive reads are of 5 bytes and the source file has more than 15 bytes*/
        {
	sz = read(FD,Buffer,5);
	printf("CALL 1 : No . of bytes read = %d \n",sz);
		for(int i = 0 ; i < sz ; i++)

		{

			printf("---%c---",Buffer[i]);
		}
	printf("\n");

        sz = read(FD,Buffer,5);
        printf("CALL 2 : No . of bytes read = %d \n",sz);
  		for(int i = 0 ; i < sz ; i++)
                
                {

                        printf("---%c---",Buffer[i]);
                }
        printf("\n");

        sz = read(FD,Buffer,5);
        printf("CALL 3 : No . of bytes read = %d \n",sz);
                for(int i = 0 ; i < sz ; i++)

                {

                        printf("---%c---",Buffer[i]);
                }
        printf("\n");
        }
        #endif
	sz = read(FD,Buffer,7);
	printf("CALL 1 : No . of bytes read = %d \n",sz);
		for(int i = 0 ; i < sz ; i++)

		{

			printf("%c",Buffer[i]);
		}
	printf("\n");

        sz = read(FD,Buffer,20);
        printf("CALL 2 : No . of bytes read = %d \n",sz);
  		for(int i = 0 ; i < sz ; i++)
                
                {

                        printf("%c",Buffer[i]);
                }
        printf("\n");

        sz = read(FD,Buffer,12);
        printf("CALL 3 : No . of bytes read = %d \n",sz);
                for(int i = 0 ; i < sz ; i++)

                {

                        printf("%c",Buffer[i]);
                }
        printf("\n");
        
        
return 0;
}
