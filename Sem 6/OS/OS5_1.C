#include<stdio.h>
#include<conio.h>
int i, j, n, twt=0, temp, ttat=0,proc[20], cpb[20], prio[20], tat[20], wt[20];

void input();
void calculate();
void display();
void swap(int , int );
void main()
{
	clrscr();
	printf("Priority: nonpreemptive\n");
	input();
	calculate();
	display();
	getch();
}
void input()
{
	printf("Enter number of process\n");
	scanf("%d", &n);
	printf("Proccess\tcpu burst\tpriority\n");
	for(i=1; i<=n; i++)
	{
		proc[i]=i;
		printf("p[%d]\t", i);
		scanf("%d %d", &cpb[i], &prio[i]);
	}

}
void calculate()
{
	for(i=n-1; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			if(prio[j]<prio[j+1])
			{
				swap(j, j+1);
			}
		}
	}
	tat[i] = cpb[i];
	wt[i] = 0;
	for(i=2; i<=n; i++)
	{
		tat[i]=tat[i-1]+cpb[i];
		wt[i] = tat[i-1];
	}
	i=n;
	while(i>=1)
	{
		twt=twt+wt[i];
		ttat=ttat+tat[i];
		i--;

	}

}
void swap(int x, int y)
{
	temp = proc[x];
	proc[x] = proc[y];
	proc[y] = temp;

	temp = prio[x];
	prio[x] = prio[y];
	prio[y] = temp;

	temp = cpb[x];
	cpb[x] = cpb[y];
	cpb[y] = temp;
}
void display()
{
	printf("\n\nProcess\tcpu burst\tpriority\t tat\t wt\n");
	for(i=1; i<=n; i++)
	{
		printf("p[%d]\t\t%d\t%d\t\t%d\t%d\n", proc[i], cpb[i], prio[i], tat[i], wt[i]);
	}
	printf("\n\nAverage TAT: %f", (float)ttat/n);
	printf("\nAverage WT: %f", (float)twt/n);
}