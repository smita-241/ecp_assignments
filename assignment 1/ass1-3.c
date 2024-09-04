#include<stdio.h>
int main()

{
	int num,dec,octal,hex;
	char ch;
	printf("Enter the character: \n");
	scanf("%c",&ch);
	

	dec=printf("decimal:%d \n",ch);
	octal=printf("octal:%o \n",ch);
	hex=printf("hexadecimal:%x \n",ch);
	
	printf("ASCII VALUE:\ndec=%d\noctal=%d\nhex=%d\n",dec,octal,hex);
	


	return 0;




}
