#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,bt[20],wt[20],tat[20];
	float awt,atat;
	clrscr();
	printf("FCFS when arrival time is not considered\n");
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	printf("\nEnter the burst time of each process:\n");
	for(i=1;i<=n;i++)
	{
		printf("Process %d: ", i);
		scanf("%d",&bt[i]);
	}
	wt[0]=0;
	bt[0]=0;
	for(i=1;i<=n;i++)
	{
		wt[i]=0;
		for(j=1;j<i;j++)
		wt[i]=wt[i]+bt[j];
		tat[i]=wt[i]+bt[i];
	}
	awt=0.0;
	atat=0.0;
	printf("\n\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
	for(i=1;i<=n;i++)
	{
		printf("\n%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
		awt=awt+wt[i];
	atat=atat+tat[i];
	}
	awt=(float)awt/n;
	atat=(float)atat/n;
	printf("\n\nAverage waiting time = %f",awt);
	printf("\nAverage turnaround time = %f",atat);
	getch();
}
