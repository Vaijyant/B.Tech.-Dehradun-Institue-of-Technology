//modify the program to count number of words which start with 's'
#include<stdio.h>
int main()
{
	char *ch;
	int l=0,i,c=0;
	clrscr();
	printf("\n\n\tenter any string = ");
	scanf("%[^\n]s",ch);
	for(;*ch!='\0';ch++)
	{
		l++;
	}
	ch--;
	while(l>=0)
	{
		if(*ch=='s')
		{
			ch--;
			if(*ch==' ')
				c++;
			ch++;
		}
		ch--;
		l--;
	}
	ch++;
	printf("The number of words starting with 's' is : %d",c);
	return 0;
}
