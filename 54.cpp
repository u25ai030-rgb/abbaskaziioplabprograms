
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

        int sum = 0;
        for(int i=0; i<n; i++)
        {
            sum = sum + a[i];
        }

        printf("\n Sum of all elements in your array is %d", sum);
    }

