#include<stdio.h>


int main()
{
	int num,i,a;
	printf("Enter the number:\n");
	scanf("%d",&num);

	printf("-------Table------\n");
	i=1;
	while(i<11)
	{
         
		a=num*i;
		
		printf("%d * %d = %d\n",num,i,a);
		i++;
	}
	return 0;
}

