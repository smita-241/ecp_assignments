#include<stdio.h>
int main()
{
	int start,i,j,count=0;

	printf("enter the starting num:\n");
	scanf("%d",&start);

	for(i=start;i<=5;i++)
	{
	
		for(j=2;j<i;j++)
		{
			
			
			if(i%j==0)
				count++;
			
		}

		if(count==0)
			printf("%d:prime num\n",i);

		count=0;

	
		
	}

	return 0;
}
