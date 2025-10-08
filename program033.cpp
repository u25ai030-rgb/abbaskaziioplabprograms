#include<stdio.h>
int main()
{
    int n, i, num, max,min;
    printf("how many numbers? : ");
    scanf("%d", &n);


    printf("enter number 1: ");
    scanf("%d", &max);
    printf("enter number 2 :");
    scanf("%d" , &min);


    for(i = 3; i<=n; i++)
    {
        printf("enter number %d 1: ", i);
        scanf("%d", &num ) ;
        if (num>max)  
            max = num;
        if (num<min)
        	min = num;
    }
   
    printf("%d is your maximum value \n", max);
    printf("%d is your minimum value", min);
}

