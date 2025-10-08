#include<stdio.h>
#include<math.h>
int main()
{
    int x, n, y;
    printf("enter value for x: ");
    scanf("%d", &x);
    printf("enter value for n: ");
    scanf("%d", &n);


    if (n == 1)
        y = 1 + x;
    else if (n == 2)
        y = 1 + x/n;
    else if (n == 3)
        y = 1 + pow(x,n);
    else if (n < 1 && n > 3)
        y = 1 + n*x;
    else
        printf("unexpected value for n");
   
    printf("value of y is : %d", y);
    return 0;
}


