#include<stdio.h>
int main()
{
	int num1,num2,div;
	printf("Enter two num: \n");
	scanf("%d%d",&num1,&num2);
	
	
	if(num2==0)
		printf("divide by zero is not possible\n");
	else 
           div=num1/num2;
	   printf("div=%d\n",div);
   return 0;
}
