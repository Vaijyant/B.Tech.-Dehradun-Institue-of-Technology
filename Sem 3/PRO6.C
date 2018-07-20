#include<stdio.h>
int main()
{
	int dis, feet, inch, cent;
	clrscr();
	printf("Enter Distance between two cities in km.\n");
	scanf("%d", &dis);
	inch = (100000.0/24)*dis;
	feet = inch/12;
	cent = dis*100000;
	printf("Distance in:\ninch = %d\nfeet = %d\ncentimeters = %d", inch, feet, cent);
	return 0;
}
