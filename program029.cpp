#include<stdio.h>


int main()
{
    int num, temp, last, rev, i;
    printf("enter number to check if its a palindrome: ");
    scanf("%d", &num);
    temp = num;
    rev = 0;


    for(i=num; i> 0; i = i/10)
    {
        last = i % 10;
        rev = rev*10 + last;
    }
    if (rev == num)
        printf("%d is a palindrome", num);
    else
        printf("%d is not a palindrome", num);
    return 0;
       
}

