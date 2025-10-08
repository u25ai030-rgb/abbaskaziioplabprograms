#include<stdio.h>
int main()
{
	int num;
	printf("enter a number to check- \n");
	scanf("%d", &num);
	
	if (num == 0)
		printf("number is invalid input");
	else if (num < 0)
		printf("number is negative");
	else
	{
		if (num % 2 == 0)
			printf("number is even");
		else
			printf("number is odd");
	return 0;
	}
	
}
