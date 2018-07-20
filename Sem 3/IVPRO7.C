/*Write the program to print the week day by passing day number using  switch case
Example: if you pass 3 the result should display Wednesday.*/
#include<stdio.h>
int main()
{
	int ch;
	printf("Enter day number to print day name\n");
	scanf("%d", &ch);
	switch (ch)
	{
		case 1:
		printf("SUNDAY");
		break;
		case 2:
		printf("MONDAY");
		break;
		case 3:
		printf("TUESDAY");
		break;
		case 4:
		printf("WEDNESDAY");
		break;
		case 5:
		printf("THURSDAY");
		break;
		case 6:
		printf("FRIDAY");
		break;
		case 7:
		printf("SATURDAY");
		break;
		default :
		printf("Invalid choice!\n :P");
	}
}
