//Program to calculate time complexity of Insertion Sort
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define SIZE 5000
void main()
{
	int arr[SIZE], temp, i, j;
	clock_t start, end;
	clrscr();
	printf("Program to calculate time complexity of insertion sort\n\n");
	printf("Generating random numbers for array...\n");
	for(i=0; i<SIZE; i++)
		arr[i] = rand();

//insertion sorting algorithm
	printf("Sorting...\n\n");
	start = clock();
	for(i=2; i<=SIZE; i++)
	{
		temp = arr[i];
		j = i-1;
		while(temp<arr[j] && j>=1)
		{
			arr[j+1] = arr[j];
			j = j-1;
		}
		arr[j+1] = temp;
	}
	end = clock();
	printf("Time taken in sorting is: %f seconds", (end-start)/CLK_TCK);

	getch();
}