#include<stdio.h>
int my_power(int b,int exp);
int main()
{
	int base,index;
        printf("enter the base value:\n");
	scanf("%d",&base);
	printf("enter the index value:\n");
	scanf("%d",&index);

	printf("pow:%d\n",my_power(base,index));

	return 0;
}
int my_power(int b,int exp)
{
	int i,res=1;
	for(i=1;i<=exp;i++)
	{
		res=res*b;
	}

	return res;
}
