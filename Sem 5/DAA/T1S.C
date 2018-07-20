#include<stdio.h>
#include<conio.h>
void main()
{
	int pos[7], p[7], d[7], i, j, temp, ps;
	clrscr();
	printf("Enter the values for penalty and deadline\n");
	printf("S.no.\tPenalty\tDeadline\n");
	for(i=0; i<7; i++)
	{
		pos[i] = i+1;
		printf("%d\t", pos[i]);
		scanf("%d %d", &p[i], &d[i]);
	}

	for(i=0; i<6; i++)
	{
		ps=i;
		for(j=i+1; j<7; j++)
		{
			if(p[ps]<p[j])
			{
				ps=j;
			}
		}
		if(pos !=i)
		{
			temp = p[i];
			p[i] = p[ps];
			p[ps] = temp;

			temp = d[i];
			d[i] = d[ps];
			d[ps] = temp;
		}
	}
	printf("\nAfter sorting:\n");
	for(i=0; i<7; i++)
	{
		printf("%d\t%d\n", p[i], d[i]);
	}
	getch();
}