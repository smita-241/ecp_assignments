#include<stdio.h>
int main()
{
	int num,rem,rev=0;
	printf("enter the num:\n");
	scanf("%d",&num);

	for( ;num; )
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("reverse num=%d\n",rev);
	return 0;
}

