#include <stdio.h>

int main() 
{
    int n=5, i, j, temp,pos=0;
	int array[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
	 {
        scanf("%d", &array[i]);
     }
    printf("original array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    for (i = 0; i < n - 1; i++) 
	{
        
        for (j = i+1 ; j < n ; j++) 
		{
            if (array[i] > array[j]) 
			{
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                pos = 1;

            }
        }
        if (pos == 0)
            break;
    }
    printf("sorted array: ");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
