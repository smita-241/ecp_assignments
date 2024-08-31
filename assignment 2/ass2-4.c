#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter the num \n");
	scanf("%d%d",&num1,&num2);

/*	if(num1>num2)
		printf("The num1 is greater than num2\n ");
	else
		printf("The num1 is less than num2\n ");*/



         (num1>num2)?printf("num1 is greater than num2"):printf("num2 is greater than num1");
         



	return 0;
}
