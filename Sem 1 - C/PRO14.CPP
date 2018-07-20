//Program 14 : multiplication of two 2x2 matrices
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[2][2], b[2][2], ans[2][2];
	int i, j, k;
	printf("Enter elements for 1st matrix:\n");
	for (i=0; i<=1; i++)
	{
		for (j=0; j<=1; j++)
		{
			printf("Enter %d,%d element\n", (i+1), (j+1));
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter elements for 2nd matrix:\n");
	for(i=0; i<=1; i++)
	{
		for (j=0; j<=1; j++)
		{
			printf("Enter %d,%d element\n", (i+1), (j+1));
			scanf("%d", &b[i][j]);
		}
	}
	printf("ANS = \n");
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=1;j++)
		{
			ans[i][j]=0;
			for(k=0;k<=1;k++)
			{
				ans[i][j]+=a[i][k]*b[k][j];/*mult[0][0]=m1[0][0]*m2[0][0]+m1[0][1]*m2[1][0]+m1[0][2]*m2[2][0];*/
			}
			printf("%d\t",ans[i][j]);
		}
		printf("\n");
	}
	getch();
}