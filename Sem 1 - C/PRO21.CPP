//Program 21 :
#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{       struct cricketer
	{
		char name[20];
		int age;
	};
	clrscr();
	struct cricketer c[5];
	int i;
	for(i=0; i<5; i++)
	{
		printf("Enter Name of the cricketer ");
		printf("Enter Age \n");
		scanf("%s%d", c[i].name,  &c[i].age);
	}
	printf ("You've entered\n");
	printf("Name\t\tAge\n");
	for (i=0; i<5; i++)
	{
		printf("%s\t\t%d\n", c[i].name, c[i].age);
	}
	getch();
}