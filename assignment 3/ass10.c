#include<stdio.h>
int main()
{
	int num,i,a;
	printf("Enter the num\n");
	scanf("%d",&num);
        

	printf("----Table----\n");

	for(i=0;i<=10;i++)
	{
	        a=num*i;
                printf("%d*%d=%d\n",num,i,a);

	}

	return 0;
}
