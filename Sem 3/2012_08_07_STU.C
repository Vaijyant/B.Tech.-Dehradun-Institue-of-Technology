#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	struct student
	{
		char name[10];
		int sub1, sub2, sub3, total;
		float avg;
	}detail[5];
	clrscr();
	for (i=0; i<5; i++)
	{
		printf("\nEnter name of candidate %d\n", (i+1));
		scanf("%s", &detail[i].name);
		printf("Enter marks in subject 1, 2 and 3\n");
		scanf("%d %d %d", &detail[i].sub1, &detail[i].sub2, &detail[i].sub3);
		detail[i].total = detail[i].sub1+detail[i].sub2+detail[i].sub3;
		detail[i].avg = (float)detail[i].total/3;

	}
	printf("\nNAME\t\tTotal\t\tAVERAGE\n");
	for(i=0; i<5; i++)
	{
		printf("%s\t\t%d\t\t%f\n", detail[i].name, detail[i].total, detail[i].avg);
	}
	getch();
}