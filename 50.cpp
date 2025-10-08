#include<stdio.h>
int main ()
{
	int i,j,n;
	char alpha = 'A' ; 
	printf("enter the number ");
	scanf("%d" , &n);
	for(i = 1;i<=n;i++)
	{
		for(j = 1;j<=i;j++)
		{
		printf("%c" , alpha); 
		}
	alpha++ ;
	printf("\n");
	}
}
	
	
	
	

