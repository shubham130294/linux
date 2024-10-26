#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>


int main()
{
	int FD,sz;
	char Buffer[10];

	FD =open("Image.txt",O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IROTH);
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

return 0;
}
