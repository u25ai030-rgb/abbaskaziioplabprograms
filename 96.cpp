#include <stdio.h>
#include<string.h>
#include <ctype.h>
int len(char str[]){
	int i=0,len=0;
	while(str[i]!='\0'){
		len++;
		i++;
	}
	return len;
}
int main() 
{
    char arr[100][100];
	int n,i,j;
    char temp[100];
    int max;
    printf("Enter number of strings: ");
    scanf("%d",&n);
    getchar();
    printf("Enter %d strings:\n",n);
    for(i=0;i<n;i++) 
	{
        gets(arr[i]);
    }      
    max=len(arr[0]);    
    for (i=0;i<n-1;i++) 
{
        for (j=0;j<n-i-1;j++) 
		{
            if (len(arr[j])>len(arr[j+1])) 
			{
                strcpy(temp,arr[j]);
                strcpy(arr[j],arr[j+1]);
                strcpy(arr[j+1],temp);
            }
        }
    }
    printf("\nStrings in ascending order of length:\n");
    for (i=0;i<n;i++) 
	{
        printf("%s\n",arr[i]);
    }

    return 0;
}

