#include<stdio.h>
int main()
{
	int n,i ; 
	printf("enter the number :");
	scanf("%d" , &n);
	printf("even numbers upto %d are " , n);
	for (i=2;i<=n;i++)
		{
	
		if(i%2 == 0)
			printf("%d " , i);
		}
		
}
