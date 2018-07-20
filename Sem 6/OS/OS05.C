#include<stdio.h>
#include<conio.h>
int i, j, n, twt=0, ttat=0,proc[20], cpb[20], prio[20], tat[20], wt[20];

void input();
void calculate();
void display();
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
		printf("p[%d]\t", i);
		scanf("%d %d", &cpb[i], &prio[i]);
	}

}
void calculate()
{
	tat[1] = cpb[1];
	wt[1] = 0;
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
void display()
{
	printf("\n\nProcess\tcpu burst\tpriority\t tat\t wt\n");
	for(i=1; i<=n; i++)
	{
		printf("p[%d]\t\t%d\t%d\t%d\t%d\n", i, cpb[i], prio[i], tat[i], wt[i]);
	}
	printf("\nAverage TAT: %f", (float)ttat/n);
	printf("\nAverage WT: %f", (float)twt/n);
}