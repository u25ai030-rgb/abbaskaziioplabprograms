
    #include<stdio.h>
    int main()
    {
        int n;
        printf("enter length of pattern: ");
        scanf("%d", &n);

        for(int i = 1; i<=n; i++)
        {
            for(int j = n-i; j >= 1; j--)
            {
                printf(" ");
            }
            for(int j = 1; j <= i; j++)
            {
                printf("*");
            }
            for(int j = i; j > 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }

        for(int i = n; i>=1; i--)
        {
            for(int j = n-i; j >= 1; j--)
            {
                printf(" ");
            }
            for(int j = 1; j <= i; j++)
            {
                printf("*");
            }
            for(int j = i; j > 1; j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }

