#include<stdio.h>
int main()
{
	int eng, cs, math, chem, phy, total;
	printf("enter marks in english out of 100: ");
	scanf("%d", &eng);
	printf("enter marks in computer out of 100: ");
	scanf("%d", &cs);
	printf("enter marks in math out of 100: ");
	scanf("%d", &math);
	printf("enter marks in chemistry out of 100: ");
	scanf("%d", &chem);
	printf("enter marks in physics out of 100: ");
	scanf("%d", &phy);
	
	total = eng + cs + math + chem + phy;
	float percentage = total / 5.0;
	
	printf("Total marks - %d \n", total);
	printf("Percentage - %f \n", percentage);
	
	if (percentage < 33.0)
		printf("Grade - X");
	else if (percentage >= 33.0 && percentage < 50.0)
		printf("Grade - F");
	else if (percentage >= 50.0 && percentage < 60.0)
		printf("Grade - E");
	else if (percentage >= 60.0 && percentage < 70.0)
		printf("Grade - D");
	else if (percentage >= 70.0 && percentage < 80.0)
			printf("Grade - C");
	else if (percentage >= 80.0 && percentage < 90.0)
			printf("Grade - B");
	else
		printf("Grade - A");

	return 0;
}
	

