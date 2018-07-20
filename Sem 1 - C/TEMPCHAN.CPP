/*Program 5 : A menu driven program to change :
1. Celsius into Fahrenheit
2. Fahrenheit into Celsius*/
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int ch; float f, c;
	printf("Enter 1 to change Celsius into Fahrenheit\n");
	printf("Enter 2 to change Fahrenheit into Celsius\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
		printf("Enter Celsius temperature\n");
		scanf("%f", &c);
		f = (9*c/5)+32;
		printf("Temperature in Fahrenheit = %f", f);
		break;
		case 2:
		printf("Enter Fahrenheit temperature\n");
		scanf("%f", &f);
		c = (f-32)*5/9;
		printf("Temperature in Celsius = %f", c);
		break;
		default:
		printf("Invalid choice");
	}
	getch();
}
