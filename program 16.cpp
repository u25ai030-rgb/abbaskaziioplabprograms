#include<stdio.h>
int main ()

{	
	float a,b,c;
	
	printf("enter number a : \n");
	scanf("%f",&a);
	printf("enter number b : \n");
	scanf("%f",&b);
	printf("enter number c : \n");
	scanf("%f",&c);
	
	if(a>b)
		{
		if(a>c)
			{
				printf("a , %f is the greatest " , a);
			}
		else
			{
				printf("c, %f is the greatest ", c);
			}
		}
	else 
		{
			if (b>c)
				{
					printf("b, %f is the greatest ", b);
				}
			else 
				{
					printf("c, %f is the greatest ", c);
				}
				
		}
	 return 0;
	 	 		
 	
	
	
	
}
