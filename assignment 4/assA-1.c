#include<stdio.h>
int accept_num(void);
void fact_num(int n1);
int main()
{
	int num1,fact;
	num1=accept_num();
        fact_num(num1);

	return 0;
}

int accept_num(void)
{
	int x;
	printf("enter the num:\n");
	scanf("%d",&x);
	return x;
}

void fact_num(int n1)
{
	int sum=1,i;
	for(i=1;i<=n1;i++)
	{
		sum=sum*i;
	}
	printf("factorial no. of %d is %d\n",n1,sum);
}
