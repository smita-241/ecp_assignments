#include<stdio.h>
int main()
{
	int num,r,sum=0,temp;
	printf("Enter the num\n");
	scanf("%d",&num);
           
	temp=num;


	for( ;num; )
	{
		r=num%10;
		r=r*r*r;
		sum=sum+r;
		num=num/10;
	}


	printf("sum=%d\n",sum);

	if(sum==temp)
		printf("the num is armstrong\n");
	else
		printf("the num is not armstrong\n");

	return 0;
}
