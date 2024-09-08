#include<stdio.h>
int accept_num(void);
int div(int n1,int n2);
int mul(int n1,int n2);
int sub(int n1,int n2);
int sum(int n1,int n2);
int main()
{
	int num1,num2,a,b,c,d;
	num1=accept_num();
	num2=accept_num();

	a=sum(num1,num2);
	b=sub(num1,num2);
	c=mul(num1,num2);
	printf("sum=%d\tsub=%d\tmul=%d\n",a,b,c);
	d=div(num1,num2);

	if(num2==0)
	{
		printf("cant divided by 0\n");
		
	}

	else
	{
		printf("div=%d\n",d);
	}




	return 0;
}

int accept_num(void)
{
	int x;
	printf("Enter the num:\n");
	scanf("%d",&x);
	return x;
}
int sum(int n1,int n2)
{
	return n1+n2;
}

int sub(int n1,int n2)
{
	return n1-n2;
}

int mul(int n1,int n2)
{
	return n1*n2;
}
int div(int n1,int n2)
{
 	return n1/n2;
}


