#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAXSIZE 100
void main()
    {
	char in[MAXSIZE],stuff[MAXSIZE]="",*p,*q,*pr;
	clrscr();
	printf("Enter the String to be Character Stuffed :\n");
	scanf("%s",in);
	p=in;
	q=stuff;
	strcat(q,"DLESOH");
	q+=6;
	strcat(q,"DLESOT");
	q+=6;
	while(*p!='\0')
	{
	  if(*p=='D'&& *(p+1)=='L'&& *(p+2)=='E' && *(p+3)=='S' && *(p+4)=='O'&& *(p+5)=='H')
	    {
	      strcat( q,"ESC"); q+=3;
	      strcat(q,"DLESOH"); q+=6;
	      p+=6;
	    }
	  else if(*p=='D'&& *(p+1)=='L'&& *(p+2)=='E' && *(p+3)=='S' && *(p+4)=='O'&& *(p+5)=='T')
	    {  strcat( q,"ESC");q+=3;
	       strcat(q,"DLESOT");q+=6;
	       p+=6;
	    }
	  else if(*p=='D'&& *(p+1)=='L'&& *(p+2)=='E' && *(p+3)=='E' && *(p+4)=='O'&& *(p+5)=='T')
	    {  strcat( q,"ESC"); q+=3;
	       strcat(q,"DLEEOT"); q+=6;
	       p+=6;
	    }
	  else if(*p=='D'&& *(p+1)=='L'&& *(p+2)=='E' && *(p+3)=='E' && *(p+4)=='O'&& *(p+5)=='H')
	    {  strcat( q,"ESC"); q+=3;
	       strcat(q,"DLEEOH"); q+=6;
	       p+=6;
	    }
	  else if(*p=='E'&& *(p+1)=='S' && *(p+2)=='C')
	    {
	       strcat( q,"ESC"); q+=3;
	       strcat( q,"ESC"); q+=3;
	       p+=3;
	    }
	  else
	  {
	       *q=*p;
	       q++; p++;
	  }
	}
	strcat(q,"DLEEOT");
	strcat(q,"DLEEOH");
	pr=stuff;
	printf("\nString after being Character Stuffed:\n");
	while(*pr!='\0')
	  printf("%c ",*(pr++));
	printf("\n\nString after Character Destuffing :\n");
	printf("%s",in);
	getch();
}
