#include <stdio.h>
int main()
{
	int a,b; // 10, 7
	printf("Enter a,b: ");
	scanf("%d %d", &a, &b);
	printf("%d %d\n", a,b);
	a = a - b; // a = 10 - 7 = 3
	b = a + b; // b = 3 + 7 = 10
	a = b - a; // a = 10 - 3 = 7
	printf("%d %d", a,b);
	return 0;




}
