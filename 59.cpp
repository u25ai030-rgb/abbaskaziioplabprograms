
    #include<stdio.h>
    int main()
    {
        int n;
        printf("enter length : ");
        scanf("%d", &n);

        int a[n];

        printf(" first array  \n");
        for(int i=0;i<n;i++)
        {
            printf("enter  element: ");
            scanf("%d", &a[i]);
        }

        int b[n];
        printf(" second array \n");
        for(int i=0;i<n;i++)
        {
            printf("enter element: ");
            scanf("%d", &b[i]);
        }

        printf(" before \n");
        printf("first array \n");
        for(int i=0;i<n;i++)
        {
            printf("%d \t", a[i]);
        }
        printf("second array \n");
        for(int i=0;i<n;i++)
        {
            printf("%d \t", b[i]);
        }

        for(int i=0;i<n;i++)
        {
            int temp;
            temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        }

        printf("after swapping \n");
        printf("first array \n");
        for(int i=0;i<n;i++)
        {
            printf("%d \t", a[i]);
        }
        printf(" second array\n");
        for(int i=0;i<n;i++)
        {
            printf("%d \t", b[i]);
        }


    }

