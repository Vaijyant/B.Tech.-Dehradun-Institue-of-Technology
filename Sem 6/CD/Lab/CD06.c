//PROGRAM-6 Program To Find The Keywords In A Input String    

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char key[12][20]={"break","char","do","double","else","float","for","if","int","long","void","while"};
	char s[200],id[20][80],c;
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
		if((c>=65 && c<=90)||(c>=97 && c<=122))
		{
			b++;
			id[m][k++]=c;
			for(j=i+1;j<=l;j++)
			{
				c=s[j];
				if((c>=65 && c<=90)||(c>=97 && c<=122)||(c>=48 && c<=57))
				{
					id[m][k++]=c;
					b++;
				}
				else
				{
					id[m][k]='\0';
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
			if(strcmp(id[i],id[j])==0)
			{
				for(k=j+1;k<m;k++)
				{
					strcpy(id[k-1],id[k]);
				}
				i--;
				m--;
			}
		}
	}
	f=0;
	printf("\nThe keywords in the string are=");
	for(i=0;i<m;i++)
	{
		f=0;
		for(j=0;j<12;j++)
		{
			if(strcmp(id[i],key[j])==0)
			{
				f=1;
				break;
			}
		}
		if(f==1)
			printf("\n%s",id[i]);
	}
	getch();
}
}