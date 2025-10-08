#include<stdio.h>
int main ()
{
	int  n,m,k,sum,temp; 
	printf("enter the number");
	scanf("%d" , &n);
	temp = n;
	while(n>0)
	{
		m = n%10;
		k = temp%m;
		n = n/10;
		if (k==0)
		{
			sum = sum + 1;
		}
	
	}
printf("%d" , sum);

}
