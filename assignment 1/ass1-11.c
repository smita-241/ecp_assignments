++#include<stdio.h>
#include<limits.h>

int main(void)
{
	printf("\n int                  :  %%d       %d   %d to %d",sizeof(int),INT_MIN,INT_MAX);
	printf("\n short int            :  %%hd      %d   %hd to %hd",sizeof(short int),SHRT_MIN,SHRT_MAX);
	printf("\n long int             :  %%ld      %d   %ld to %ld",sizeof(long int),LONG_MIN,LONG_MAX);
	printf("\n unsigned int         :  %%u       %d   %u to %u",sizeof(unsigned int),0,UINT_MAX);
	printf("\n unsigned long int    :  %%lu      %d   %u to %u",sizeof(unsigned long int),0,ULONG_MAX);
        printf("\n unsigned short int   :  %%hu      %d   %u to %u",sizeof(unsigned short int),0,USHRT_MAX);
	printf("\n signed char          :  %%c       %d   %d to %d",sizeof(char),SCHAR_MIN,SCHAR_MAX);
	printf("\n unsigned char        :  %%c       %d   %u to %u",sizeof(unsigned char),0,UCHAR_MAX);
	return 0;
}


