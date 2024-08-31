#include<stdio.h>
int main()
{
	int num;
	printf("Enter the num\n");
	scanf("%d",&num);

	if (num>0)
		printf("The num is positive\n");
	else if(num<0)
		printf("The num is negative\n");
	else
		printf("The num is zero\n");
	return 0;
}
