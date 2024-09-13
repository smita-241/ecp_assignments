#include<stdio.h>
int main()
{
	int f,n;
	n=accept_num();

	f=fact(n);
	printf("fact=%d\n",f);

	return 0;
}

int accept_num(void)
{
	int x;
	printf("enter the num:\n");
	scanf("%d",&x);
	return x;
}

int fact(int y)
{
	int fa;
	if(y==0)
	
		return 1;
	else if(y==1)
		return y;
	else
		fa=y*fact(y-1);
	
	        return fa;

}
