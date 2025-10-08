#include<stdio.h>
int main()

{
	int sec,hr,min,seconds ; 
	printf("enter the total seconds");
    scanf("%d" , &sec);
	
	
	hr  = sec / 3600; // hr = 3690/3600 = 1 hr
	min = (sec %3600)/60; //min = 3690 % 3600 / 60 = 90/60 = 1 min
	seconds = (sec%3600) % 60 ; // 3690 % 3600 % 60 = 90%60 = 30 sec
	printf("the time is %d hr %d min %d seconds ", hr,min,seconds );
	return 0;
	
	
}
	
