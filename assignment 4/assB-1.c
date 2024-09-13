#include<stdio.h>
int accept_num(void);
void fact(int);
int main()
{
	int num;
	num=accept_num();

	fact(num);

	return 0;
}

int accept_num(void)
{
	int x;
	printf("Enter the num:");
	scanf("%d",&x);
	return x;
}

void fact(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}

	printf("%d=%d\n",n,fact);


}


