#include<stdio.h>

int add(int,int);
int sub(int,int);
int prod(int,int);
int div(int,int);


int main()
{
	int n1,n2,res;
	char op;

	typedef enum menu{EXIT,ADD,SUB,PROD,DIV}MENU;

	MENU ch;
        do
	{

		printf("Enter the num1:\n");
		scanf("%d",&n1);
		printf("Enter the operator:\n");
		scanf("%*c%c",&n2);
		printf("Enter the num2:\n ");
		scanf("%d",&n2);


	printf("0.Exit\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
	printf("Enter your choice:\n");
	scanf("%d",&ch);

	

		switch(ch)
		{
			case EXIT:
				printf("Exit...\n");
				break;
                        case ADD:
				res=add(n1,n2);
			        printf("res=%d\n",res);
				break;
			case SUB:
                                printf("res=%d\n",sub(n1,n2));
				break;
			case PROD:
			        printf("res=%d\n",prod(n1,n2));
				break;
			case DIV:
				div(n1,n2);
				break;



		}
	}while(ch!=0);
	return 0;
}

	int add(int n1,int n2)
	{  
	    return n1+n2;
            
	}
	

	int sub(int n1,int n2)
	{
		return n1-n2;
	
	}

	int prod(int n1,int n2)
	{
		return n1*n2;
		
	}

	int div(int n1,int n2)
	{
		if(n2==0)
		{
			printf("error:cant divided by 0\n");
		}
		else
		{
			printf("res=%d\n",n1/n2);
		}
	}






