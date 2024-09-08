#include<stdio.h>
int main()
{
	int i,j,start,end,res;

	printf("Enter the starting range:\n");
	scanf("%d",&start);

	printf("Enter the ending range:\n");
	scanf("%d",&end);


	printf("....TABLE....\n");

	for(i=start;i<=end;i++)
	{
		for(j=1;j<=10;j++)
		{
			res=i*j;
			printf("%d*%d=%d\n",i,j,res);
		}
		printf("\n");
	}
return 0;
}
