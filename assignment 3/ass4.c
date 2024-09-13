#include<stdio.h>
int main()
{
	int num,sum=1,i;
	printf("Enter the num\n");
	scanf("%d",&num);

	for(i=1;i<=num;i++)
	{
		sum=sum*i;
	}         
	for(i=1;i<=num;i++)
	{
		printf("%d",i);
		if (i!=num)
			printf("*");
	}		
	printf("=%d",sum);
	
		
	return 0;
}
