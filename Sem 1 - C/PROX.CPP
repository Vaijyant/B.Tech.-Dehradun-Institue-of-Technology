//Program 20 : Sort Names
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	printf("Enet Names\n");
	char name[10][15]; char cname[15]; int i;
	for(i=0; i<10; i++)
		gets(name[i]);
	strcpy(cname, name [0]);
	for(i=0; i<10; i++)
	{
		if(name[i][0]>name[i][(i+1)])
		{
			strcpy(name[i], name[i+1]);
		}
	}
	printf("Sorted list : \n");
	for(i=0; i<10; i++)
	printf("%s\n", name[i]);
	getch();
}
