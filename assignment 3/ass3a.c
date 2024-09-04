#include<stdio.h>


int main()
{
	int sum=0,rem,num;
	printf("Enter the 4 digit num:\n");
	scanf("%d",&num);
        
	while(num!=0)
	{
		rem=num%10;
		
		sum=sum+rem;
		
		num=num/10;
	}
		printf("sum=%d\n",sum);
	
	return 0;
}

