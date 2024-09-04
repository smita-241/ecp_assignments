#include<stdio.h>
int main(){
	  
	int a,b,c;
	float avg;
	printf("Enter three no.\n");
	scanf("%d%d%d",&a,&b,&c);

	avg=(a+b+c)/3.0f;
	printf("average of three no is %lf\n",avg);

	return 0;

}
