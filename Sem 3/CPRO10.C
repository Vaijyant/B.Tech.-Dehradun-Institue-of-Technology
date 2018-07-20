/*Write a program to calculate the elements of the Pascal  triangle for 10 rows
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[15][15],i,j;
	clrscr();
	for(i=0;i<10;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0||i==j)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=a[i-1][j-1]+a[i-1][j];
			}
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}