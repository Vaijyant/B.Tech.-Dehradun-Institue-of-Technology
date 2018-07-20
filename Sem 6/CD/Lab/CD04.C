// PROGRAM-4 Program To Check Whether A Given String Is Accepted By A Recursive Grammar Or Not  


#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
	int i,fo,l,k,a,b;
	char s[10],c,f;
	clrscr();
	printf("The Grammar is: \n");
	printf("\nS->aSb|ab");
	f='y';
	k=0;
	fo=0;
	while(f=='Y'||f=='y')
	{
		fflush(stdin);
		printf("\n\nenter the string to be checked: ");
		gets(s);
		l=strlen(s);
		a=0;
		b=0;
		for(i=0;i<l;i++)
		{
			c=s[i];
			if(c=='a')
			{
				k++;
				if(s[i+1]=='b')
					a=1;
			}
			else if(c=='b')
			{
				k--;
				if(s[i+1]=='a')
				b=1;
			}
			else
			{
				fo=1;
				break;
			}
		}
		if(k==0 && fo==0 && a==1 && b==0)
			printf("yes");
		else
			printf("no");
		printf("\nEnter y or Y to continue: ");
		scanf("%c",&f);
	}
	getch();
}
