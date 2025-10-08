#include<stdio.h>
int main()
{
	float a,b,c;
	printf("enter number a : \n");
	scanf("%f",&a);
	printf("enter number b : \n");
	scanf("%f",&b);
	printf("enter number c : \n");
	scanf("%f",&c);
	if (a>b && a>c)
		printf("a , %f is the greatest number " , a);
	else if (b>a && b>c)
		printf("b , %f is the greatest number " , b);
	else 
		printf("c , %f is the greatest number  " , c);
	return 0 ; 
	
		
	
	
	
}
