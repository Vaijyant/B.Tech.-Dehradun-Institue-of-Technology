//Program to calculate time complexity of Selection Sort
#include<stdio.h>
#include<conio.h>
#include<time.h>
#define SIZE 5000

int main()
{
	int arr[SIZE], i, j, pos, temp;
	clock_t start, end;
	clrscr();
	printf("Program to calculate time complexity of selection sort\n\n");
	printf("Generating random numbers for array...\n");
	for(i=0; i<SIZE; i++)
		arr[i] = rand();

//Selection sorting algorithm
	printf("Sorting...\n\n");
	start = clock();
	for (i = 0; i < (SIZE-1 ); i++)
	{
		pos = i;
		for(j=i+1; j<SIZE; j++ )
		{
			if (arr[pos] > arr[j])
				pos = j;
		}
		if (pos != i )
		{
			temp= arr[i];
			arr[i] = arr[pos];
			arr[pos] = temp;
		}
	}
	end = clock();
	printf("Time taken in sorting is: %f seconds", (end-start)/CLK_TCK);
	getch();
}