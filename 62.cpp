#include <stdio.h>

int main() {
    int n=5, i, first, end, temp;
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
    first = 0;
    end = n - 1;
    while (first < end) 
	{
        temp = array[first];
        array[first] = array[end];
        array[end] = temp;
        first++;
        end--;
    }
    printf("reversed array: ");
    for (i = 0; i < n; i++)
        printf("%d ", array[i]);
    printf("\n");

    return 0;
}
