//Write a simple database program that will store personal details such as age, date of birth, address etc.
#include <stdio.h>
int main()
{
	char ch;
	char add[50];
	int age, day, month, year;
	clrscr();
	printf("Enter your age:\t");
	scanf("%d",&age);
	printf("Enter your date of birth:\t");
	printf("Day:\t");
	scanf("%d", &day);
	printf("Month:\t");
	scanf("%d", &month);
	printf("Year:\t");
	scanf("%d", &year);
	printf("Enter your address:\t");
	scanf("%c", &ch);
	gets(add);
	printf("\nYour Information is: ");
	printf("\nAge : %d\nDate Of Birth : %d:%d:%d\nAddress: ", age, day, month, year);
	puts(add);
	return 0;
}