#include<stdio.h>


int main()
{
    int num, temp, last, rev;
    printf("enter number to reverse: ");
    scanf("%d", &num);
    temp = num;
    rev = 0;


    while(num>0)
    {
        last = num % 10;
        rev = rev*10 + last;
        num = num / 10;
    }
    printf("%d reversed is : %d", temp, rev);
    return 0;
       
}



