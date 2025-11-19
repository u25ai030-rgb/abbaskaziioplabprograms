#include <stdio.h>
int main() {
    char str1[200], str2[200];
    int len=0;
    printf("Enter a string: ");
    gets(str1);
    int i=0;
    while (str1[i]!='\0' && str1[i]!='\n') 
	{
        len++;
        i++;
    }
    i = len-1;   
    int j = 0;                
    while (len--) 
	{
        str2[j] = str1[i];
        j++;
        i--;
    } 
    printf("Reversed string: %s\n", str2);
    return 0;
}
