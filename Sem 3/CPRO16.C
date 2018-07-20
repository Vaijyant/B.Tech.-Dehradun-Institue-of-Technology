//Given a Boolean variable x1...xn we wish to print all possible  combination of truth values they can assume.
#include <stdio.h>
void comb(char *,int,int);
char toggle(char);
int main()
{
	char list[4]={'t','t','t','t'};
	int i=0,n;
	clrscr();
	printf("Enter the value for 'n':");
	scanf("%d",&n);
	comb(list,i-1,n-1);
	return 0;
}
void comb(char *list,int i,int n)
{
	int j,k;
	if(i==n)
	{
		for(j=0;j<=n;j++)
		printf("%c",list[j]);
		printf("  ");
	}
	else
	{
		for(k=0;k<=1;k++)
		{
			comb(list,i+1,n);
			list[i+1]=toggle(list[i+1]);
		}
	}
}
char toggle(char c)
{
	if(c=='t')
	return 'f';
	else
	return 't';
}
