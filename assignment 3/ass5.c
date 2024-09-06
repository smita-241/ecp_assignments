#include<stdio.h>
int main()
{
	int num,sum=1,i;
	printf("Enter the num\n");
	scanf("%d",&num);

	for(i=num;i>=1;i--)
	{
		sum=sum*i;
	
		printf("%d*",i);
	}	
	printf("=%d",sum);
	
		
	return 0;
}
