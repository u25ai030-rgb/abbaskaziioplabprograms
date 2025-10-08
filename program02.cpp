#include<stdio.h>;
int main()

{
	int s1,s2,s3,s4,s5,t ;
	int percent; 
	printf("enter your first subject marks");
	scanf("%d" , &s1);
	printf("enter your second subject marks");
	scanf("%d" , &s2);
	printf("enter your third subject marks");
	scanf("%d" , &s3);
	printf("enter your fourth subject marks");
	scanf("%d" , &s4);
	printf("enter your fifth subject marks");
	scanf("%d" , &s5);
	t = s1 + s2 + s3 + s4 + s5;
	percent = t/5;
	printf("Your total marks are %d and percentage is %d%%", t, percent );
	return 0;
	
	
}
