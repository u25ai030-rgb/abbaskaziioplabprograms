#include<stdio.h>
int main ()
{
	int i , j , n;
	char alphabet = 'A' ; 
	printf("enter the number :");
	scanf("%d" ,&n );
	for(int i =0; i<=n ; i++)
	{
		char alphabet = 'A' ;
		for(j=n-i;j<=n;j++)
		{
			printf("%c" , alphabet);
			alphabet++ ;
		}
		printf("\n");
	}
	
	
	
	
}
