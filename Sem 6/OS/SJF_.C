#include<stdio.h>
#include<conio.h>
int n, i, j, p=1,  proc[20], at[20], wt[20], tat[20], cpb[20], temp;
void gchart();
void check(int , int);
void sort(int , int );
void main()
{

	clrscr();
	printf("SJF Program: non preemptive");

	printf("\nEnter number of processses: ");
	scanf("%d", &n);
	printf("Process\t\tArrival Time\t\tCPU Burst\n");
	for(i=1; i<=n; i++)
	{
		printf("%d\t\t", i);
		proc[i]=i;
		scanf("%d", &at[i]);
		scanf("%d", &cpb[i]);

	}
	for (i=1; i<=n; i++)
	{
		gchart(p);
	}
	printf("Process\t\tCPU Burst\t\tArrival Time\t\t");
	for(i=1; i<=n; i++)
	{
		printf("%d\t\t%d\t\t%d", proc[i], cpb[i], at[i]);
	}
	getch();

}
void gchart(int pr)
{
	check(cpb[pr], pr);
}
void check(int c, int pr)
{
	while(c>at[i])
	{
		i++;
	}
	sort(pr, i-1);
}
void sort(int from, int to)
{
	int pos;
	for(i=from; i<to; i++)
	{
		for(j=i+1; j<to; j++)
		{
			if(cpb[i]>cpb[j])
			{
				pos = j;
			}
		}
		temp = proc[i];
		proc[i] = proc[pos];
		proc[pos] = temp;

		temp = cpb[i];
		cpb[i] = cpb[pos];
		proc[pos] = temp;

		temp = at[i];
		at[i] = at[pos];
		at[pos] = temp;

	}
}