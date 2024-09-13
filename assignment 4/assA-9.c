#include<stdio.h>
int accept_start(void);
int accept_end(void);
void check_prime(int,int);
int main()
{
	int start,end;
	start=accept_start();
	end=accept_end();

	check_prime(start,end);

	return 0;
}

int accept_start(void)
{
	int x;
	printf("Enter the starting range:\n");
	scanf("%d",&x);
	return x;
}

int accept_end(void)
{
	int y;
	printf("Enter the ending range:\n");
	scanf("%d",&y);
	return y;
}

void check_prime(int s,int e)
{
	int i,j,count=0,pcount,ncount;
	for(i=s;i<e;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
			if(count==0)
		        {
				pcount++;
				
			}
			else
			{
				ncount++;
				
				
			}

		
		}

		count=0;
	}


	
		printf("prime numbers are:%d\nnot prime numbers are:%d\n",pcount,ncount);

}


