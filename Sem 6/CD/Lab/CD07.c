//PROGRAM-7 Program To Find The Constants In A Input String    

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char s[200],con[20][80],c;
	int f,i,j,k,l,m,b;
	clrscr();
	printf("Enter the string: \n");
	gets(s);
	l=strlen(s);
	b=0;
	m=0;
	k=0;
	for(i=0;i<l;i=b)
	{
		c=s[i];
		if(c>=48 && c<=57)
		{
			b++;
			con[m][k++]=c;
			for(j=i+1;j<=l;j++)
			{
				c=s[j];
				if(c>=48 && c<=57)
				{
					con[m][k++]=c;
					b++;
				}
				else
				{
					con[m][k]='\0';
					m++;
					b++;
					k=0;
					break;
				}
			}
		}
		else
			b++;
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(strcmp(con[i],con[j])==0)
			{
				for(k=j+1;k<m;k++)
				{
					strcpy(con[k-1],con[k]);
				}
				i--;
				m--;
			}
		}
	}
	f=0;
	printf("\nThe constants in the string are=");
	for(i=0;i<m;i++)
	{
		printf("\n%s",con[i]);
	}
	getch();
}

