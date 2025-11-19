
#include <stdio.h>
int main() 
{
    char str[200];
    int leninc=0,lenexc=0;
    printf("Enter a string: ");
    gets(str);
	int i=0;   
    while (str[i]!='\0') 
	{
        leninc++;      
        if (str[i]!=' ')
		{
        	lenexc++;
		}      
        i++;    
    }
    printf("Length including spaces: %d\n", leninc); 
    printf("Length excluding spaces: %d\n", lenexc);

    return 0;
}
