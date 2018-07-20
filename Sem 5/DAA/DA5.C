#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
#define SIZE 10

void quick(int a[SIZE], int l, int r);
clock_t start, end;
void main()
{
	int i, a[SIZE];

	clrscr();
	printf("Program to demonstrate quick sort\n\n");
	printf("Generating random numbers for array...\n");

	for(i=0;i<SIZE;i++)
		a[i] = rand();
	printf("Generation complete");

	start = clock()*(float)100000;
	quick(a, 0, (SIZE-1));
	end = clock()*(float)100000;

	printf("sorted array\n");
	for(i=0; i<SIZE; i++)
	{
		printf("%d\t", a[i]);

	}
	printf("Sorting complete");
	getch();
}
void quick(int a[SIZE], int l, int r)
{
	int i, j, pivot, temp;

	if(l<r)
	{
		pivot = l;
		i=l;
		j=r;
		while(i<j)
		{
			while((a[i]<=a[pivot])&&(i<r))
				i++;
			while(a[j]>a[pivot])
				j--;
			if(i<j)
			{
				temp =a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		temp=a[pivot];
		a[pivot]=a[j];
		a[j]=temp;
		quick(a, l, j-1);
		quick(a, j+1, r);
	}
 }