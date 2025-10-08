#include<stdio.h>
int main()
{
    int num, l, res, i;
    printf("enter the number ot print table: ");
    scanf("%d", &num);
    printf("enter the length of the table: ");
    scanf("%d", &l);


    for(i = 1; i <= l; i++)
    {
        res = i * num;
        printf("%d * %d = %d \n", num, i, res );
    }
    printf("-end of program-");
    return 0;


}

