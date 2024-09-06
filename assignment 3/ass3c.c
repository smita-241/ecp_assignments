#include<stdio.h>
int main()
{
	int num,temp,rem,rev=0;
	printf("Enter the num\n");
	scanf("%d",&num);

	temp=num;
	
	while(num)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}

	printf("reverse num=%d\n",rev);

	if(rev==temp)
		printf("num is palendrome\n");
	else
		printf("num is not palendrome\n");
	return 0;
}
