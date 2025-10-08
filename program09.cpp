#include<stdio.h>;
int main()

{
	int hr, min, sec, total;
	printf("enter hours - \n");
	scanf("%d", &hr);
	printf("enter minutes - \n");
	scanf("%d", &min);
	printf("enter seconds - \n");
	scanf("%d", &sec);
	
	total = (hr*3600) + min*60 + sec;
	printf("your total time in seconds is %d", total);
	return 0;
	
	
}
