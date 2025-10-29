#include <stdio.h>

int main() 
{
    int matrix[3][3];
    int i, j;
    printf("Enter the elements :\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");
    printf("\n The matrix is:\n");
    for (i = 0; i < 3; i++) 
	{
        for (j = 0; j < 3; j++) 
		{
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int max = matrix[0][0];
    int min = matrix[0][0];

    for (i = 0; i < 3; i++)
	{
        for (j = 0; j < 3; j++) 
		{
            if (matrix[i][j] > max)
                max = matrix[i][j];
            if (matrix[i][j] < min)
                min = matrix[i][j];
        }
    }
    printf("Maximum element = %d \n", max);
    printf("Minimum element = %d \n", min);

    return 0;
}
