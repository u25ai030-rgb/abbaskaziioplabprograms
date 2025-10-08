#include<stdio.h>
int main()
{
    int n, i, flag;
    printf("enter number to check if it is prime: ");
    scanf("%d", &n);
    flag = 0;


    for (i=2; i< n; i++)
        if (n%i==0)
            flag = 1;


    if (flag == 0)
        printf("%d is prime", n);
    else
        printf("%d is not prime", n);
    return 0;
       
}

