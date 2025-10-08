
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

        int max = a[0], second_max = a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                second_max = max;
                max = a[i];
                 
            }
            else if(a[i]>second_max && a[i] != max)
            {
                second_max = a[i];
            }

        }
        printf("maximum is %d and second max is %d", max, second_max);


    }

