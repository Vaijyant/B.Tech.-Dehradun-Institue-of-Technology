#include<stdio.h>
#include<conio.h>
char code[1000];
char result[1000];
void input();
void process();
void display();
int k=0, r=0;
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
	printf("Program to remove white spaces\nEnter Code:\n\n");

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

		if(code[k]==' ' && code[k+1]==' ')
				k++;
		else if(code[k]=='\t')
		{
			if(code[k+1]=='\t')
				k=k+2;
			else
			{
				result[r++] = ' ';
				k++;
			}
		}
		else if(code[k]=='\n')
		{
			k++;
		}
		else if(code[k]=='\0')
		{
			result[r]='\0';
			break;
		}
		else
		{
			result[r++] = code[k++];
		}

	}while(code[k] != '\0');
}
void display()
{
	int i=0;
	printf("\nOptimized code is:\n");
	while(result[i] != '\0')
		printf("%c", result[i++]);
}