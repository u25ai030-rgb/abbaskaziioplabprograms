
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

        int positive = 0, negative = 0, zero = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>0)
            {
                positive++;
            }
            else if(a[i]<0)
            {
                negative++;
            }
            else
            {
                zero++;
            }
        
        }
        printf("\npositive - %d \n negative - %d \n zero - %d", positive, negative, zero);

        
    }

