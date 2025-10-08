#include<stdio.h>
int main()

{
	int p ,r ,t,m ;
	printf("enter the principal amount");
	scanf("%d" , &p);
	printf("enter the rate");
	scanf("%d" , &r);
	printf("enter the time");
	scanf("%d" , &t);
	m = p*r*t/100;
	printf("your simple interest is %d" , m);
	return 0 ;
	
	
	
}
