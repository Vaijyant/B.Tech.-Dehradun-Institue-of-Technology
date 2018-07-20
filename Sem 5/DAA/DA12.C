#include<stdio.h>
#include<conio.h>
#define INFY 9999999
long int m[20][20];
int s[20][20];
int p[20], j, i, n;
void print_optimal(int i, int j)
{
	if(i==j)
		printf("A%d", i);
	else
	{
		printf("(");
	       //	print_optimal(i, s[i][j]);
	       //	print_optimal(s[i][j]+1, j);
		printf(")");
	}
}
void matmultiply()
{
	long int q;
	int k;
	for(i=n; i>0; i--)
	{
		for(j=i; j<=n; j++)
		{
			if(i==j)
				m[i][j]=0;
			else
			{
				for(k=1; k<j; k++)
				{
					q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
					if(q<m[i][j])
					{
						m[i][j]=q;
						s[i][j]=k;
					}
				}
			}
		}
	}
}
void main()
{
	int k;
	clrscr();
	printf("Program of Chain Matrix Multiplication\n");
	printf("finding optimal solution\n");
	printf("_____________________________\n");
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		//m[i][j]=0;
		m[i][j]=INFY;
		s[i][j]=0;
	}
	printf("\nEnter the dimensions: \n");
	for(k=0; k<=n; k++)
	{
		printf("p%d", k);
		scanf("%d", &p[k]);
	}
	matmultiply();
	printf("\nCost Matrix:\n");
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
	printf("\nMatric for k values: \n");
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			printf("%d\t", s[i][j]);
		}
		printf("\n");
	}
	i=1; j=n;
	printf("\nMultiplication Sequence: ");
	print_optimal(i, j);
	getch();
}