# include<stdio.h>
int main()
{
	int i,j,start,end,count=0,pcount,ncount;

	printf("Enter the starting range:\n");
	scanf("%d",&start);

	printf("Enter the ending range:\n");
	scanf("%d",&end);

	for(i=start;i<=end;i++)
	{

		for(j=2;j<i;j++)
		{
			if(i%j==0)
				count++;
		}
		if(count==0)
		{
			pcount++;
			printf("prime no.=%d\n",i);
			
		}
		else
		{
			ncount++;
		        printf("no prime no.=%d\n",i);

		}

		count=0;

	}


	printf("prime numbers are:%d\n no prime numbers are:%d\n",pcount,ncount);

	return 0;

}






















		

