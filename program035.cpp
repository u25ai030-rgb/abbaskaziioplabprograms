#include<stdio.h>
int main ()
{
	int n , sum = 0,k,m,l =0;
	printf("enter the number");
	scanf("%d" , &n);
	while(n>0)
	{
		k = n%10; 
		sum = sum + k;
		n = n/10 ; 
		
		if (sum >=10)
		{
			while(sum>0)
			{
				m = sum%10; 
				l = l + m;
				sum = sum/10 ;
				
			}
			sum = l;
 	}
		
	}
	printf("%d ", sum);
	return 0 ;
	
}
