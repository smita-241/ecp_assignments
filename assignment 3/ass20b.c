#include<stdio.h>
int main()
{
	int i,n,r,num,sum,count;

	printf("Enter the ending range:\n");
	scanf("%d",&num);	

	printf("armstrong numbers are:\n");
	for(i=1;i<=num;i++)
	{
                sum=0;
		
		n=i;

		while(n!=0)
		{
			r=n%10;
			r=r*r*r;
			sum=sum+r;
			n=n/10;
		}
		
		if(i==sum)
		{
			count++;
			printf("armstrong num:%d\n",i);
		}
		

	}
	printf("armstrong numbers are:%d\n",count);

	return 0;
}

