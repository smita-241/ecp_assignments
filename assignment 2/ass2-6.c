#include <stdio.h>
int main()
	{

		int num,temp,rem,rev=0;

		printf("Enter the num\n");
		scanf("%d",&num);

		temp=num;

		while(num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;

		}
        
		printf("rev=%d\n",rev);


		if(temp==rev)
			printf("The num is palendrome\n");
		else
			printf("The num is not palendrome\n");


		return 0;
	}


