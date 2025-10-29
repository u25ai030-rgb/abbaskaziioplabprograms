#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, k, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate left: ");
    scanf("%d", &k);

    k = k % n;

    for(i = 0; i < k; i++)
    {
        temp = arr[0];
        for(int j = 0; j < n-1; j++)
        {
            arr[j] = arr[j+1];
        }
        arr[n-1] = temp;
    }

    printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
