
    #include<stdio.h>
    int main()
    {
        int n;
        printf("enter length of  arrray: ");
        scanf("%d", &n);

        int a[n];

        printf("- MAKING FIRST ARRAY - \n");
        for(int i=0;i<n;i++)
        {
            printf("enter array element: ");
            scanf("%d", &a[i]);
        }

        int b[n];
        printf("- MAKING SECOND ARRAY - \n");
        for(int i=0;i<n;i++)
        {
            printf("enter array element: ");
            scanf("%d", &b[i]);
        }
        printf("\n - YOUR FIRST ARRAY - \n");
        for(int i=0;i<n;i++)
        {
            printf("%d \t", a[i]);
        }
        printf("\n - YOUR SECOND ARRAY - \n");
        for(int i=0;i<n;i++)
        {
            printf("%d \t", b[i]);
        }

        int c[10];
        for(int i=0;i<n;i++)
        {
            c[i] = a[i] + b[i];
        }
        printf("\n - THE ADDITION ARRAY - \n");
        for(int i=0;i<n;i++)
        {
            printf("%d \t", c[i]);
        }



    }

