#include<stdio.h>;
int main()

{
	int sec,d,hr,min ;
	
	sec = 31558150;
	d = 31558159 / 86400;
	hr = (51558150 % 86400) / 3600;
	min = 31558150 % 60;
	printf(" day  : %d   hours  : %d  min : %d ", d,hr,min);
	return 0 ;
	
}
