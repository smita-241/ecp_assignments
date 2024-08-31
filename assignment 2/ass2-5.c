#include<stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("Enter the numbers:\n");
	scanf("%d%d%d",&num1,&num2,&num3);

/*	if (num1>num2)
	{
		if(num1>num3)
	        	printf("num1 is greater \n");
		else 
			printf("num3 is greater \n");
	}
	else 
	{
		if(num2>num3)
		        printf("num2 is greater \n");
		else
			printf("num3 is greater \n");
	}
          */



	(num1>num2)?((num1>num3)?(max=num1):(max=num3)):((num2>num3)?(max=num2):(max=num3));
	       


	return 0;

}


