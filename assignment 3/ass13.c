#include<stdio.h>
int main()
{
	int n,a=0,b=1,c;

	printf("Enter the limit\n");
	scanf("%d",&n);

	printf("fibonacci series are: \n");

	for(int i=1;i<=n;i++)
	{

		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
	}

	return 0;
}
















































