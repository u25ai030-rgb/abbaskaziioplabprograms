#include<stdio.h>
int main()
{
    int n, i, sum_e = 0, sum_o = 0;
    printf("enter upper limit: ");
    scanf("%d", &n);




    printf("EVEN NUMBERS - \n");
    for(i=1; i<=n; i++)
    {
        if (i%2 == 0)
        {
            printf("%d \n", i);
            sum_e = sum_e + i;
        }
    }
    printf("sum of even nos is: %d \n", sum_e);
   
           
    printf("ODD NUMBERS - \n");
    for(i=1; i<=n; i++)
    {
            if (i%2 != 0)
            {
                printf("%d \n", i);
                sum_o = sum_o + i;
            }
    }
    printf("sum of odd nos is: %d \n", sum_o);
   
    return 0;


}

