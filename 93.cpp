#include <stdio.h>
int main() 
{
    char str[200];
    int cnt=0;
    printf("Enter a string: ");
    gets(str);
    int i=0;   
    while (str[i] == ' ' || str[i] == '\t') 
        i++;
    while (str[i]!= '\0') 
	{
        if (str[i] == ' ' || str[i] == '\t') 
		{
            while (str[i] == ' '|| str[i] == '\t')
                i++;
            if (str[i] !='\0' && str[i] !='\n') 
                cnt++;
        }
        i++;
    }
    if (str[0] !='\n' && str[0] !='\0')
        cnt++;
    printf("Number of words = %d\n", cnt);
    return 0;
}
