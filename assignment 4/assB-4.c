#include<stdio.h>
int fibonacci(int );
int main()
{
	int n,i;
	printf("enter the no. of terms:\n");
	scanf("%d",&n);

	printf("fibonacci series\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",fibonacci(i));
	}
}

int fibonacci(int f)
{
	if(f==0)
		return 0;
	else if(f==1)
		return 1;
	else
		return fibonacci(f-1)+fibonacci(f-2);
}
