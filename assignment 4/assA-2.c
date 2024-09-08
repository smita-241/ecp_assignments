#include<stdio.h>
int accept_num(void);
void pow_num(int b,int exp);
int main()
{
	int base,index;
	base=accept_num();
	index=accept_num();


	pow_num(base,index);

	return 0;
}

int accept_num(void)
{
	int x;
	printf("enter the num:\n");
	scanf("%d",&x);
	return x;
}


void pow_num(int b,int exp)
{
	int i,res=1;
	for(i=1;i<=exp;i++)
	{
		res=res*b;
	}
	printf("power=%d\n",res);
}

