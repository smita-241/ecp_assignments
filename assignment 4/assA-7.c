#include<stdio.h>
int accept_num(void);
void fibo(int);
int main()
{
	int n;

	n=accept_num();
	fibo(n);

	return 0;
}

int accept_num(void)
{
	int x;
	printf("Enter the num:\n");
	scanf("%d",&x);
	return x;
}

void fibo(int n)
{
	int i,a=0,b=1,c;
	for(i=1;i<=n;i++)
	{
	printf("%d\t",a);

	c=a+b;
	a=b;
	b=c;
	}

}
