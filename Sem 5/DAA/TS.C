#include<stdio.h>
#include<conio.h>
void main()
{
	int t[7], dt[7], penalty[7], slist[7], i, j, temp, c=0, ct;
	clrscr();
	printf("Enter the values fot\nTask\tEx. Time\tPenalty\n");
	for(i=0; i<7; i++)
	{
		t[i] = i+1;
		printf("%d\t",t[i]);
		scanf("%d%d", &dt[i], &penalty[i]);
	}
	/*for(i=7-2; i>=0; i--)
	{
		for(j=0; j<=i; j++)
		{
			if(penalty[j]<penalty[j+1])
			{
				temp = penalty[j];
				penalty[j] = penalty[j+1];
				penalty[j+1] = temp;

				temp = dt[j];
				dt[j] = dt[j+1];
				dt[j+1] = temp;

			}
		}
	}*/

	for(i=0; i<7; i++)
	{
		if(dt[i]<=t[i])
		{
			slist[c] = t[i];
			c++;
			i=0;

		}
		else
		{

		}

	}
	printf("\n");
	for(i=0; i<c; i++)
	{
		printf("%d\n", slist[i]);
	}
	getch();
}