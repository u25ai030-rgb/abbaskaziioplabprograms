#include<stdio.h>
#include<math.h>
int main ()
{
	int n,i;
	float e ;
	printf("enter the number till you want to ");
	scanf("%d" , &n);
	
	for(i=1;i<=n;i++)
	{
		e = pow(i,2);
		printf("%0.0f " , e );
		
	}
	
	
}
