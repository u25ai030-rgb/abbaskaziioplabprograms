#include<stdio.h>
#include<math.h>
int main()
{
    int num, i, nd, last, sum= 0;
    printf("enter number to check if it is an armstrong number: ");
    scanf("%d", &num);
    nd = 0;


    for(i = num; i > 0; i = i/10)
    {
        nd = nd + 1;
    }


    for(i = num; i > 0; i = i/10)
    {
        last = i % 10;
        sum = sum + pow(last, nd);
    }


    if (sum == num)
        printf("%d is an armstrong number", num);
    else
         printf("%d is not an armstrong number", num);
       
    return 0;


   
}

