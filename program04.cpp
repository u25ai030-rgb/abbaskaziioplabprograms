#include <stdio.h>
int main()
{
	int gross, basic, hr, da;
	printf("Enter basic salary: ");
	scanf("%d", &basic);
	hr = basic * 10/100;
	da = basic * 5/100;
	gross = basic + hr + da;
	printf("Gross salary: %d", gross);
	return 0;
}
