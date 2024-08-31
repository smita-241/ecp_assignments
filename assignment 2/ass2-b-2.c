#include<stdio.h>
int main()
{
	int num1,num2,res;
	char op;
        
	printf("Enter the num1: \n");
	scanf("%d",&num1);
	printf("Enter the character:[+,-,*,/]: \n");
	scanf("%*c%c",&op);
	printf("Enter the num2: \n");
	scanf("%d",&num2);

	switch(op)
	{

		

		case '+': 
			res=num1+num2;
			printf("addition=%d\n",res);
			break;
			 
		case '-':
			res=num1-num2;
			printf("substraction=%d\n",res);
			break;

		case '*':
			res=num1*num2;
			printf("multiplication=%d\n",res);
			break;

		case '/':
			if(num2==0)
				printf("cant divide by zero\n");
			else
			{
				res=num1/num2;
				printf("division=%d\n",res);

			}
			break;

		default:
			printf("The operator is invalid\n");
	}
	return 0;

}

		
