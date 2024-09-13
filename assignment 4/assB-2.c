#include<stdio.h>
int pow(int,int);
int accept_num(void);
int main()
{
	int base,index;
	base=accept_num();
	index=accept_num();

	printf("power=%d\n",pow(base,index));

	return 0;
}

int accept_num(void)
{
	int x;
	printf("enter num:\n");
	scanf("%d",&x);
	return x;
}

int pow(int b,int exp)
{
	if(exp==0)
		return 1;
	else if(exp==1)
		return b;
	else
		return b*pow(b,exp-1);
}
 
