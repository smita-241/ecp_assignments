#include<stdio.h>
int main()
{
	int num,i;
	printf("Enter the num\n");
	scanf("%d",&num);

	i=1;
	while(i<num)
	{
		if(num%i==0)
			printf("%d,",i);
				i++;
	}
			

	return 0;
}



