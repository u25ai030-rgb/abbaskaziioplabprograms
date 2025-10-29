#include <stdio.h>

int main()
{
    int matrix[3][3];
    int i, j;        
    printf("Enter numbers :\n");
     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++) 
        {
            scanf("%d", &matrix[i][j]);  
        }
    }
    printf("\nYour matrix is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");  
    }
  
    printf("\nSum of each row:\n");
    
    for(i=0; i<3; i++)  
    {
        int sum=0; 
        
        for(j=0; j<3; j++)  
        {
            sum = sum + matrix[i][j];
        }
        
        printf("Row %d: %d\n", i+1, sum); 
    }
    
    return 0;
}
