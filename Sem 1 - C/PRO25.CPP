#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	struct time
	{
		int hrs;
		int min;
		int sec;
	}time;
	printf("Enter Time in Hrs Min Sec\n");
	scanf("%d%d%d", &time.hrs, &time.min, &time.sec);
	printf("\nYou've ebtered : \n%dHrs %dmin %dsec", time.hrs, time.min, time.sec);
	getch();
}