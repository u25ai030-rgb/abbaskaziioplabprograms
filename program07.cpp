#include <stdio.h>
int main()
{
	int area, base, height;
	printf("Enter base and height of triangle: ");
	scanf("%d %d", &base, &height);
	area = base * height / 2;
	printf("Area of triangle: %d", area);
	return 0;

}
