#include<stdio.h>
int main ()
{
	int n , i , next = 0,x;
	printf("enter the number of fibonacci terms : ");
	scanf("%d" , &n );
	
	int a = 0 , b = 1 ;
		
	
	printf("fibonacci series : %d %d " , a , b);
	int p[n] = {0,1};
	for (i = 3 ; i<=n ; i++)
		{
		 	next = a+b;
		 	p[i-1] = next;
		 	printf("%d " , next);
		 	a = b;
		 	b = next;
		 	
		}
	printf("\n");
	printf("enter the number u want to check :");
	scanf("%d" , &x);
	for(i = 0;i<n;i++)
	{
		if (p[i]==x)
		{
			printf("yes it is present");
			break;
		}
		
	}
	
	return 0 ;
	 	
}
