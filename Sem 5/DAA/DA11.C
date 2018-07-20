#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
	int n, b[10], w[10], i, j, h, t, tt;
	int time[10], a[10];
	float avg=0;
	clrscr();
	printf("\n\tJob Scheduling");
	printf("\n\t****************");
	printf("\nEnter number of jobs to be scheduled: ");
	scanf("%d", &n);
	printf("\nEnter burst time for corresponding job\n");
	for(i=1; i<=n; i++)
	{
		printf("Process %d: ", i);
		scanf("%d", &b[i]);
		a[i]=i;
	}
	for(i=1; i<=n; i++)
	{
		for(j=i; j<=n; j++)
		{
			if(b[i]>b[j])
			{
				t=b[i];
				tt=a[i];
				b[i]=b[j];
				a[i]=a[j];
				b[j]=t;
				a[j]=tt;
			}
		}
	}
	w[i]=0;
	printf("\n\nProcess %d waiting time is 0", a[1]);
	for(i=2; i<=n; i++)
	{
		w[i]=b[i-1]+w[i-1];
		printf("\nProcess %d waiting time is: %d", a[i], w[i]);
		avg+=w[i];
	}
	printf("\nTotal waiting time: %f", avg);
	printf("\n\nThe average time is: %f\n", avg/n);
	printf("Gaunt chart\n*********\n\t");
	h=22;
	for(i=1; i<=n; i++)
	{
		printf("%d", b[i]);
		for(j=1; j<=b[i]; j++)
		{
			printf("%c", h);

		}
	}
	printf("\n\t");
	for(i=1; i<=n; i++)
	{
		printf("%d", w[i]);
		for(j=1; j<=w[i]; j++)
		{
			printf("%c", h);
		}
		delay(1000);
	}
	getch();
}