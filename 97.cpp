#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
	char str[100];
	int cnt=0,i=0;
	printf("Enter string.");
	gets(str);
	while(str[i]!='\0')
	{
		if(strchr("AEIOUaeiou",str[i])!=NULL)
		{
			cnt++;
		}
		i++;
	}
	printf("No. of vowels in %s = %d",str,cnt);
	return 0;
}
