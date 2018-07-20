//Write a program that reads city names from the keyboard and display on;y those name begining with character 'B' or 'C'
#include<stdio.h>
int main()
{
	char city[10][15];
	int i;
	clrscr();
	printf("enter the name of the cities:\n");
	for(i=0;i<10;i++)
	scanf("%s",&city[i]);
	for(i=0;i<10;i++)
	{
		if(city[i][0]=='b'||city[i][0]=='c'||city[i][0]=='B'||city[i][0]=='C')
		printf("\n%s",city[i]);
	}
	return 0;
}
