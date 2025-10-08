#include<stdio.h>
int main ()
{
	int n ,sum=0 ;
	do{
	
	printf("enter a number:");
	scanf("%d" , &n );
	if (n<0)
		{
			break;
		}
	sum = sum + n;
	}
	while (n>0);
	printf("%d", sum);
	return 0 ;
	
	
}
