#include<stdio.h>
int main()

{
    int num, factorial, i;
    printf("enter a number to fetch facotrial: ");
    scanf("%d", &num);
    factorial = 1;
    i = num;
    
    while (i > 0)
        {
            factorial = factorial*i;
            i = i - 1;
        }
	printf("factorial is %d", factorial);
    return 0;
}
