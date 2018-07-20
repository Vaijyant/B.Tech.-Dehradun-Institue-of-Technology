#include<stdio.h>
#include<conio.h>
char code[100];
char result[100];
void input();
void process();
void display();
int k, r=0;
void main()
{


	clrscr();
	input();
	process();
	display();
	getch();
}
void input()
{

	char ch='\0';
	printf("Program to remove comments\nEnter Code:\n\n");

	do
	{
		ch=getchar();
		code[k++]=ch;
	}while(ch!='_');
	code[--k]='\0';
}
void process()
{
	k=0;
	do
	{
		if((code[k]=='/') && (code[k+1]=='/'))
		{
			k=k+2;
			while(code[k] !='\n')
				k++;

		}
		else if(code[k]=='/' && code[k+1]=='*')
		{
			k=k+2;
			while((code[k] != '*') && (code[k+1] != '/'))
				k++;
			k=k+2;
		}
		else
			result[r++] = code[k++];

	}while(code[k] != '\0');
	result[r] = '\0';
}
void display()
{
	int i=0;
	printf("\nOptimized code is:\n");
	while(result[i] != '\0')
		printf("%c", result[i++]);
}