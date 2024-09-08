#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter the num:\n");
	scanf("%d",&num);

	for(i=2;i<num;i++)
	{
		if(num%i==0)
		{
			count++;
		}

	}
		if(count==0)
		{
	
			printf("%d is a prime number\n",num);
		}
		else
		{
			printf("%d is not prime number\n",num);
		}

		count=0;

	
	return 0;
}


			
