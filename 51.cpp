#include<stdio.h>
int main()
{
    int n;
    char alphabet = 'A';
    printf("enter length of pattern: ");
    scanf("%d", &n);

    for(int i = 1; i<=n; i++)
    {
        for(int j = 1; j<=n;j++)
        {
            if(j==i)
            {
                printf("%d", 1);
            }
            else
            {
                printf("%d", 0);
            }
        }
        printf("\n");
    }


}
