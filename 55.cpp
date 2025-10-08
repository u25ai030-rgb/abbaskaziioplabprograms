
    #include<stdio.h>
    int main()
    {
        int n;
        printf("enter length of arrray: ");
        scanf("%d", &n);

        int a[n];

        printf("- MAKING ARRAY - \n");
        for(int i=0;i<n;i++)
        {
            printf("enter array element: ");
            scanf("%d", &a[i]);
        }
        printf("\n - YOUR ARRAY - \n");
        for(int i=0;i<n;i++)
        {
            printf("%d \t", a[i]);
        }

        int num_e = 0, num_o = 0 ;
        for(int i=0; i<n; i++)
        {
            if(a[i]%2 == 0)
            {
                num_e++;
            }
            else
            {
                num_o++;
            }
        }

        printf("\n Total even numbers are %d and Total odd numbers are %d .", num_e, num_o);
    }

