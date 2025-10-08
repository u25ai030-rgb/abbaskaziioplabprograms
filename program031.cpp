#include<stdio.h>
int main()
{
    int num, temp, last, sum;
    printf("enter a number who's digits you want to add up: ");
    scanf("%d", &num);


    temp = num;
    sum = 0;
    while(num>0)
    {
        last = num % 10;
        sum = sum + last;
        num = num / 10;
    }
   
        printf("%d is your answer", sum);
        return 0;


}

