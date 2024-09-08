#include<stdio.h>
int main()
{
	int num1,num2,res;
	char op;

	typedef enum menu{EXIT,ADD,SUB,MUL,DIV}MENU;
	MENU ch;

	do
	{
		printf("Enter the num1:\n");
		scanf("%d",&num1);
	//	printf("Enter the character:\n");
	//	scanf("%*c%c",&op);
		printf("Enter the num2:\n");
		scanf("%d",&num2);

		printf("0.EXIT\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n");
		printf("your choice:\n");
		scanf("%d",&ch);


		switch(ch)
		{
			case EXIT:
				printf("bye bye....\n");
				break;
			case ADD:
				res=num1+num2;
				printf("res=%d\n",res);
				break;
			case SUB:
				res=num1-num2;
				printf("res=%d\n",res);
				break;
			case MUL:
				res=num1*num2;
				printf("res=%d\n",res);
				break;
			case DIV:
				if(num2==0)
					printf("cant devided by 0\n");
				else
				{
					res=num1/num2;
					printf("res=%d\n",res);
				}
				break;

		}
	}while(ch!=0);



	return 0;
}



