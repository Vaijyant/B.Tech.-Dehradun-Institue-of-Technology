//A nxn matrix is said to have saddle point if some entery a[i][j] is the smallest calue in row i and largest value in column j. Write a program that determines the location of a saddle point if one exists.
int main()
{
	int a[10][10],i,j,k,n,min,max,col,m;
	clrscr();
	printf("Enter order m,n of mxn matrix:\n");
	scanf("%d %d",&m,&n);
	printf("Enter elements row-wise\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		min=a[i][0];
		for(j=0;j<n;j++)
		{
			if(a[i][j]<=min)
			{
				min=a[i][j];
				col=j;
			}
		}
		max=a[0][col];
		for(k=0;k<m;k++)
		{
			if(a[k][col]>=max)
			{
				max=a[k][col];
			}
		}
		if(max==min)
		printf("\nsaddle pt.at (%d,%d)",i+1,col+1);
	}
	return 0;
}
