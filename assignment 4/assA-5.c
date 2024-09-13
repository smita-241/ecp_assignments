#include<stdio.h>
int accept_num(void);
char accept_char(void);
void print_char(int,char);
int main()
{
	int n1;
	char ch;

	n1=accept_num();
	ch=accept_char();

	print_char(n1,ch);

	return 0;
}


int accept_num(void)
{
	int x;
	printf("Enter the num:\n");
	scanf("%d",&x);
	return x;
}

char accept_char(void)
{
	int y;
	printf("Enter the char:\n");
	scanf("%*c%c",&y);
	return y;
}

void print_char(int n1,char ch)
{
	printf("....Characters....\n");
	int i;
	for(i=1;i<=n1;i++)
	{
		printf("%c\n",ch);
		
	}
        printf("\n");
}
