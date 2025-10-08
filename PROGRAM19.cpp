#include<stdio.h>
int main()

{
    char ch;
    int ascii_ch;
    
    printf("enter a character: ");
    scanf("%c", &ch);
    
    ascii_ch = ch;
    
    if (ascii_ch >= 97 && ascii_ch <= 122)
        printf("smaller case character.");
    else if (ascii_ch >= 65 && ascii_ch <= 90)
        printf("upper case letter");
    else
        printf("not an alphabet.");
    return 0;
    
		
}
