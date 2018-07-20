//Program to calculate time complexity of Bubble sort
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define SIZE 30000
void main()
{
	int temp, i, j, arr[SIZE];
	clock_t start, end;
	clrscr();
	printf("Program to calculate time complexity of bubble sort\n\n");
	printf("Generating random numbers for array...\n");
	for(i=0; i<SIZE; i++)
		arr[i] = rand();

//Bubble sorting algorithm
	printf("Sorting...\n\n");
	start = clock();
	for(i=(SIZE-2); i>=0; i--)
	{
		for(j=0; j<=i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	end = clock();
	printf("Time taken in sorting is: %f seconds", (end-start)/CLK_TCK);

	getch();
}