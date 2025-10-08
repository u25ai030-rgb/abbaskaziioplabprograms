#include<stdio.h>
int main ()
{
	int n , i , next = 0;
	printf("enter the number of fibonacci terms : ");
	scanf("%d" , &n );
	
	int a = 0 , b = 1 ;
		
	
	printf("fibonacci series : %d %d " , a , b);
	for (i = 3 ; i<=n ; i++)
		{
		 	next  = a+b;
		 	printf("%d " , next);
		 	a = b;
		 	b = next;
		}
	printf("\n"); 
	return 0 ;
	 	
}
